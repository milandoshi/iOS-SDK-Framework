/*
 *  DJI iOS Mobile SDK Framework
 *  DJIMCSmartGoHome.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJIMainControllerGoHome.h

#import <Foundation/Foundation.h>

@interface DJIMCSmartGoHomeData : NSObject

/**
 *  The remaining time, in seconds, it will take the aircraft to go home. This
 *  time includes the landing time for the aircraft.
 */
@property(nonatomic, readonly) NSUInteger remainTimeForFlight;
//TODO PROPERTY NAME CHANGE: remainingTimeUntilReachedHome

/**
 *  The time, in seconds, that is needed for the aircraft to go home from its current location.
 */
@property(nonatomic, readonly) NSUInteger timeForGoHome;
//TODO PROPERTY NAME CHANGE: timeNeededToGoHome

/**
 *  The time, in seconds, that is needed for the aircraft to land from its current height.
 */
@property(nonatomic, readonly) NSUInteger timeForLanding;
//TODO PROPERTY NAME CHANGE: timeNeededToLandFromCurrentHeight

/**
 *  The battery percentage needed (TODO: Ask if aircraft or RC) for the aircraft
 *  to go home from its current location.
 */
@property(nonatomic, readonly) NSUInteger powerPercentForGoHome;
//TODO PROPERTY NAME CHANGE: batteryPercentageNeededToGoHome

/**
 *  The battery percentage needed (TODO: Ask if aircraft or RC) for the aircraft
 *  to land from its current height.
 */
@property(nonatomic, readonly) NSUInteger powerPercentForLanding;
//TODO PROPERTY NAME CHANGE: batteryPercentageNeededToLandFromCurrentHeight

/**
 *  The max radius in meters that the aircraft can fly to from its home location.
 */
@property(nonatomic, readonly) float radiusForGoHome;
//TODO PROPERTY NAME CHANGE: maxRadiusAircraftCanFlyToGoHome

/**
 *  Determines whether or not the drone is requesting to go home. If value is YES and
 *  the user does not respond, the aircraft will automatically go to it's home location 
 *  after 10 seconds. (TODO: Ask what they mean by the user here)  
 */
@property(nonatomic, readonly) BOOL droneRequestGoHome;
//TODO PROPERTY NAME CHANGE: droneRequestToGoHome

@end
