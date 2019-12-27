import cv2
import numpy as np

def canny_filter(frame):
	blur = cv2.GaussianBlur(frame, (5, 5), 0)
	canny = cv2.Canny(blur, 50, 150)
	return canny

def segmentation(frame):
	height = frame.shape[0]
	polygons = np.array([[(0, height), (800, height), (380, 290)]])

	mask = np.zeros_like(frame)
	
	cv2.fillPoly(mask, polygons, 255)
	
	segment = cv2.bitwise_and(frame, mask)
	return segment

def calculateLines(frame, lines):
	left = []
	right = []
	
	for line in lines:
		
		x1, y1, x2, y2 = line.reshape(4)
		parameters = np.polyfit((x1, x2), (y1, y2), 1)
		slope = parameters[0]
		y_intercept = parameters[1]
		if slope < 0:
			left.append((slope, y_intercept))
		else:
			right.append((slope, y_intercept))
	left_avg = np.average(left, axis = 0)
	right_avg = np.average(right, axis = 0)
	
	left_line = calculate_coordinates(frame, left_avg)
	right_line = calculate_coordinates(frame, right_avg)
	
	return np.array([left_line, right_line])

def findCoordinates(frame, parameters):
	slope, intercept = parameters
	
	y1 = frame.shape[0]
	y2 = int(y1 - 150)
	
	x1 = int((y1 - intercept) / slope)
	x2 = int((y2 - intercept) / slope)
	
	return np.array([x1, y1, x2, y2])

def visualizeLines(frame, lines):
	lines_visualize = np.zeros_like(frame)

	if lines is not None:
		for x1, y1, x2, y2 in lines:
			cv2.line(lines_visualize, (x1, y1), (x2, y2), (0, 255, 0), 5)
	return lines_visualize
