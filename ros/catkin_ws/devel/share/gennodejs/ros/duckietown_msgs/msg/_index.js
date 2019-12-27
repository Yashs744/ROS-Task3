
"use strict";

let AntiInstagramTransform = require('./AntiInstagramTransform.js');
let ThetaDotSample = require('./ThetaDotSample.js');
let LanePose = require('./LanePose.js');
let AntiInstagramHealth = require('./AntiInstagramHealth.js');
let SegmentList = require('./SegmentList.js');
let CoordinationSignal = require('./CoordinationSignal.js');
let Segment = require('./Segment.js');
let Trajectory = require('./Trajectory.js');
let ObstacleImageDetection = require('./ObstacleImageDetection.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let AprilTagDetection = require('./AprilTagDetection.js');
let Rect = require('./Rect.js');
let SceneSegments = require('./SceneSegments.js');
let AprilTagsWithInfos = require('./AprilTagsWithInfos.js');
let ObstacleProjectedDetection = require('./ObstacleProjectedDetection.js');
let LEDDetection = require('./LEDDetection.js');
let CoordinationClearance = require('./CoordinationClearance.js');
let TagInfo = require('./TagInfo.js');
let StreetNames = require('./StreetNames.js');
let StreetNameDetection = require('./StreetNameDetection.js');
let VehiclePose = require('./VehiclePose.js');
let Vector2D = require('./Vector2D.js');
let SignalsDetection = require('./SignalsDetection.js');
let ObstacleImageDetectionList = require('./ObstacleImageDetectionList.js');
let Vsample = require('./Vsample.js');
let SourceTargetNodes = require('./SourceTargetNodes.js');
let Rects = require('./Rects.js');
let Twist2DStamped = require('./Twist2DStamped.js');
let Pixel = require('./Pixel.js');
let FSMState = require('./FSMState.js');
let ObstacleType = require('./ObstacleType.js');
let LEDDetectionDebugInfo = require('./LEDDetectionDebugInfo.js');
let StopLineReading = require('./StopLineReading.js');
let LEDDetectionArray = require('./LEDDetectionArray.js');
let VehicleCorners = require('./VehicleCorners.js');
let BoolStamped = require('./BoolStamped.js');
let AprilTagDetectionArray = require('./AprilTagDetectionArray.js');
let KinematicsWeights = require('./KinematicsWeights.js');
let DuckieSensor = require('./DuckieSensor.js');
let LEDInterpreter = require('./LEDInterpreter.js');
let ObstacleProjectedDetectionList = require('./ObstacleProjectedDetectionList.js');
let WheelsCmd = require('./WheelsCmd.js');
let WheelsCmdStamped = require('./WheelsCmdStamped.js');
let CarControl = require('./CarControl.js');
let KinematicsParameters = require('./KinematicsParameters.js');

module.exports = {
  AntiInstagramTransform: AntiInstagramTransform,
  ThetaDotSample: ThetaDotSample,
  LanePose: LanePose,
  AntiInstagramHealth: AntiInstagramHealth,
  SegmentList: SegmentList,
  CoordinationSignal: CoordinationSignal,
  Segment: Segment,
  Trajectory: Trajectory,
  ObstacleImageDetection: ObstacleImageDetection,
  Pose2DStamped: Pose2DStamped,
  AprilTagDetection: AprilTagDetection,
  Rect: Rect,
  SceneSegments: SceneSegments,
  AprilTagsWithInfos: AprilTagsWithInfos,
  ObstacleProjectedDetection: ObstacleProjectedDetection,
  LEDDetection: LEDDetection,
  CoordinationClearance: CoordinationClearance,
  TagInfo: TagInfo,
  StreetNames: StreetNames,
  StreetNameDetection: StreetNameDetection,
  VehiclePose: VehiclePose,
  Vector2D: Vector2D,
  SignalsDetection: SignalsDetection,
  ObstacleImageDetectionList: ObstacleImageDetectionList,
  Vsample: Vsample,
  SourceTargetNodes: SourceTargetNodes,
  Rects: Rects,
  Twist2DStamped: Twist2DStamped,
  Pixel: Pixel,
  FSMState: FSMState,
  ObstacleType: ObstacleType,
  LEDDetectionDebugInfo: LEDDetectionDebugInfo,
  StopLineReading: StopLineReading,
  LEDDetectionArray: LEDDetectionArray,
  VehicleCorners: VehicleCorners,
  BoolStamped: BoolStamped,
  AprilTagDetectionArray: AprilTagDetectionArray,
  KinematicsWeights: KinematicsWeights,
  DuckieSensor: DuckieSensor,
  LEDInterpreter: LEDInterpreter,
  ObstacleProjectedDetectionList: ObstacleProjectedDetectionList,
  WheelsCmd: WheelsCmd,
  WheelsCmdStamped: WheelsCmdStamped,
  CarControl: CarControl,
  KinematicsParameters: KinematicsParameters,
};
