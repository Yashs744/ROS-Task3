#!/usr/bin/env python
from cv_bridge import CvBridge, CvBridgeError
from duckietown_msgs.msg import Twist2DStamped
from sensor_msgs.msg import CompressedImage, Image
import rospy
import numpy as np
from image_processing import *
import cv2

class DemoNode(object):
	def __init__(self):
		self.node_name = "LineDetectorNode"
		self.sub_image = rospy.Subscriber("/None/corrected_image/compressed", CompressedImage, self.cbImage, queue_size=1)
		self.pub_cmd = rospy.Publisher("/None/car_cmd", Twist2DStamped, queue_size=1)


	def cbImage(self, image_msg):
		msg = Twist2DStamped()
		
		image_msg = np.fromstring(image_msg.data, dtype=np.uint8)
		canny = canny_filter(image_msg)

		segment = segmentation(canny)
		hough = cv2.HoughLinesP(segment, 2, np.pi / 180, 100, np.array([]), minLineLength = 100, maxLineGap = 50)

		lines = calculateLines(image_msg, hough)
		lines_visualize = visualizeLines(image_msg, lines)
		
		output = cv2.addWeighted(image_msg, 0.9, lines_visualize, 1, 1)

		print(output)
		print("\n")		

		msg.v = 1.0
		msg.omega = 0.0
		self.pub_cmd.publish(msg)

if __name__ == '__main__': 
	rospy.init_node('demo',anonymous=False)
	demo_node = DemoNode()
	rospy.spin()
