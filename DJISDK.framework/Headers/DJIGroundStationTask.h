/*
 *  DJI iOS Mobile SDK Framework
 *  DJIGroundStationTask.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

@class DJIGroundStationWaypoint;

/**
 *  Action that will be completed when an aircraft finishes a Ground Station task
 */
typedef NS_ENUM(NSUInteger, DJIGSTaskFinishedAction){
    /**
     *  No action will be taken. The aircraft will exit the task and hover in the air where
     *  the task was completed. After that, the aircraft will be able to be controlled by
     *  the remote controller.
     */
    GSTaskFinishedNoAction,
    /**
     *  The aicraft will go home.
     */
    GSTaskFinishedGoHome,
    /**
     *  The aircraft will land automatically.
     */
    GSTaskFinishedAutoLanding, //TODO PROPERTY NAME CHANGE: GSTaskFinishedAutoLand
    /**
     *  The aircraft will go back to its first waypoint.
     */
    GSTaskFinishedGoFirstWaypoint //TODO PROPERTY NAME CHANGE: GSTaskFinishedGoToFirstWaypoint
};

/**
 *  There are four different modes available for an aicraft's heading during a ground station task.
 */
typedef NS_ENUM(NSUInteger, DJIGSHeadingMode){
    /**
     *  Aircraft's heading will be set toward each consequent waypoint
     */
    GSHeadingTowardNextWaypoint,
    /**
     *  Aircraft's heading will be set to the initial direction the aircraft
     *  took off from
     */
    GSHeadingUsingInitialDirection,
    /**
     *  Aircraft's heading will be controlled by the remote controller
     */
    GSHeadingControlByRemoteController,
    /**
     *  Aircraft's heading will be set based on each individual waypoint's heading value
     */
    GSHeadingUsingWaypointHeading,
};

@interface DJIGroundStationTask : NSObject
{
    NSMutableArray* _waypointsArray;
}

/**
 *  Number of waypoints in the ground station task
 */
@property(nonatomic, readonly) int waypointCount;

/**
 *  Index of the first waypoint in the waypointsArray
 */
@property(nonatomic, assign) int startWaypointIndex;

/**
 *  This property determines whether or not the ground station task will execute in a 
 *  loop. The default value for this property is NO (false).
 */
@property(nonatomic, assign) BOOL isLoop;

/**
 *  Max vertical velocity of the aircraft during a ground station task. 
 *  This value can be set from 0 - 5 m/s. //TODO: Is this meters/seconds?
 */
@property(nonatomic, assign) float maxVerticalVelocity;

/**
 *  Max horizontal velocity of the aircraft during a ground station task.
 *  This value can be set from 0 - 7 m/s.
 */
@property(nonatomic, assign) float maxHorizontalVelocity;

/**
 *  Max angular velocity of the aircraft during a ground station task.
 *  This value can be set from 30 - 180 degrees/second. The default value
 *  for this property is 100 degrees/second.
 */
@property(nonatomic, assign) float maxAngularVelocity;

/**
 *  Max execution time of a ground station task. This value can be set from
 *  60 - 1500 seconds. Once the value is set, if the execution time of the ground 
 *  station task goes over the max execution time set, the aircraft will exit the 
 *  ground station task and enter go home mode.
 */
@property(nonatomic, assign) uint16_t maxExecuteTime;

/**
 *  Will be set to the action the aircraft will take when the
 *  ground station task is finished. 
 */
@property(nonatomic, assign) DJIGSTaskFinishedAction finishedAction;

/**
 *  Will be set to the heading mode the aircraft will adhere to during a
 *  ground station task.
 */
@property(nonatomic, assign) DJIGSHeadingMode headingMode;

/**
 *  Creates a new ground station task
 */
+(id) newTask;

/**
 *  Adds a waypoint to the ground station task. The maximum number of waypoints
 *  allowed for the Inspire 1, Matrice 100, Phantom 3 Professional, and Phantom 3 Advanced
 *  is 100. The maximum number of waypoints allowed for the Phantom 2 Vision
 *  and the Phantom 2 Vision+ is 16.
 *
 *  @param Waypoint to be added to the ground station task
 */
-(void) addWaypoint:(DJIGroundStationWaypoint*)waypoint;

/**
 *  Removes one waypoint from the ground station task
 *
 *  @param waypoint Waypoint to be removed from the ground station task
 */
-(void) removeWaypoint:(DJIGroundStationWaypoint*)waypoint; //TODO: Which one does it remove?

/**
 *  Removes all waypoints from the ground station task
 */
-(void) removeAllWaypoint;

/**
 *  Gets a waypoint from the array of waypoints in a ground station task based on a specific index
 *
 *  @param index Index of the waypoint wanting to be retrieved from the array of waypoints in the
 *  ground station task
 *
 *  @return Waypoint of type DJIGroundStationWaypoint
 */
-(DJIGroundStationWaypoint*) waypointAtIndex:(int)index;

/**
 *  Gets all the waypoints from the ground station task 
 *
 *  @return Array of waypoints, where each waypoint is of type DJIGroundStationWaypoint
 */
-(NSArray*) allWaypoints;

@end
