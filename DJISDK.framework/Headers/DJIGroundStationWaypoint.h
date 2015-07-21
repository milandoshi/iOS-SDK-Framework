/*
 *  DJI iOS Mobile SDK Framework
 *  DJIGroundStationWaypoint.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <DJISDK/DJIFoundation.h>

/**
 *  Maximum action count for each waypoint. current supported max actions is 15.
 */
DJI_API_EXTERN const int DJIMaxActionCount;
/**
 *  Maximum repeat times for waypoint action. current supported max repeat times is 15.
 */
DJI_API_EXTERN const int DJIMaxActionRepeatTimes;

/**
 *  Turn mode of drone when adjust the aircraft's heading.
 */
typedef NS_ENUM(NSUInteger, DJIWaypointTurnMode){
    /**
     *  Clockwise
     */
    WaypointTurnModeClockwise,
    /**
     *  Anti clockwise
     */
    WaypointTurnModeAntiClockwise,
};

/**
 *  Waypoint Action Type
 */
typedef NS_ENUM(NSUInteger, DJIWaypointActionType){
    /**
     *  Stay at point. actionParam will be the time in millisecond for staying. [0, 20000]
     */
    WaypointActionStay,
    /**
     *  Start take photo. actionParam will ignore. action timeout 6 second.
     */
    WaypointActionStartTakePhoto,
    /**
     *  Start record. actionParam will ignore. action timeout 6 second.
     */
    WaypointActionStartRecord,
    /**
     *  Stop record. actionParam will ignore. action timeout 6 second.
     */
    WaypointActionStopRecord,
    /**
     *  Rotate the aircraft's yaw. the rotationg direction will deternminded by the waypoint's turnMode property. actionParam in range [-180, 180] degree.
     */
    WaypointActionRotateAircraft,
    /**
     *  Rotate the gimbal's yaw. Inspire gimbal supported, actionParam in range [-180, 180]
     */
    WaypointActionRotateGimbalYaw,
    /**
     *  Rotate gimbal's pitch. Inspire in range [-90, 30], Phantom3PRO/Phantom3Adv in range [-90, 0]
     */
    WaypointActionRotateGimbalPitch,
};

@interface DJIWaypointAction : NSObject

/**
 *  Type of action
 */
@property(nonatomic, assign) DJIWaypointActionType actionType;

/**
 *  Param of action
 */
@property(nonatomic, assign) int16_t actionParam;

-(id) initWithActionType:(DJIWaypointActionType)type param:(int16_t)param;

@end

@interface DJIGroundStationWaypoint : NSObject

/**
 *  Coordinate of waypoint (degree)
 */
@property(nonatomic) CLLocationCoordinate2D coordinate;

/**
 *  Altitude of waypoint (meters)
 */
@property(nonatomic) float altitude;

/**
 *  Heading of aircraft when reached to this waypoint. range in [-180, 180].
 */
@property(nonatomic) float heading;

/**
 *  Horizontal velocity of aircraft when reached to this waypoint, in range [0, 7] (m/s)
 */
@property(nonatomic) float horizontalVelocity;

/**
 *  Time for aircraft staying at this waypoint (second).
 *  
 *  @attention Phantom 2 vision/Phantom 2 vision+ supported only.
 */
@property(nonatomic) int stayTime;

/**
 *  How the aircraft turn to the target direction.
 */
@property(nonatomic) DJIWaypointTurnMode turnMode;

/**
 *  Waypoint's action list. The action will perform one by one while the aircraft reached to this waypoint.
 */
@property(nonatomic, readonly) NSArray* waypointActions;

/**
 *  Max time for executing the all actions. if timed out and action still not completed, then the aircraft will stop actions and moving to the next waypoint. default timeout is 60 second.
 */
@property(nonatomic) int actionTimeout;

/**
 *  Dictates how many times a waypoint action is repeated. The default value is one time.
 */
@property(nonatomic, assign) NSUInteger actionRepeatTimes;

-(id) initWithCoordinate:(CLLocationCoordinate2D)coordinate;

/**
 *  Adds a waypoint action to a waypoint. In order for this method to work, the 
 *  number of current waypoint actions added to the waypoint should not be larger
 *  than DJIMaxActionCount.
 *
 *  @param action Waypoint action to be added to the waypoint
 *
 *  @return Whether or not the waypoint action has been added to the waypoint. If the
 *  number of current waypoint actions added to the waypoint is not larger
 *  than DJIMaxActionCount, the waypoint //TODO: DOES NOT exist in the action list,
 *  or the waypoint action's actionParam is invalid, this method returns NO.
 */
-(BOOL) addWaypointAction:(DJIWaypointAction*)action;

/**
 *  Removes a waypoint action from a waypoint
 *
 *  @param action Waypoint action to be removed from the waypoint
 *
 *  @return Whether or not the waypoint action has been removed from the waypoint
 */
-(BOOL) removeWaypointAction:(DJIWaypointAction*)action;
@end
