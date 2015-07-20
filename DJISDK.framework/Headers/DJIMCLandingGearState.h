/*
 *  DJI iOS Mobile SDK Framework
 *  DJIMCLandingGearState.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJIMainControllerLandingGearCurrentState.h

#import <Foundation/Foundation.h>
#import <DJISDK/DJIMainControllerDef.h>

@interface DJIMCLandingGearState : NSObject

/**
 *  Will tell you whether or not the self-adaptive landing gear is turned on or off. 
 *
 *  If self-adaptive landing gear is turned on, then when the Inspire is 0.5m
 *  above the ground, the landing gear will automatically lower. After it takes off, 
 *  once the Inspire 1 is 0.5m above the ground, the landing gear will automatically 
 *  be raised up. If self-adaptive landing gear is turned off, the Inspire will not 
 *  automatically lower and raise the landing gear.
 */
@property(nonatomic, readonly) BOOL isLandingGearProtectOpened;
//TODO PROPERTY NAME CHANGE: isSelfAdaptiveLandingGearOn

/**
 *  Gives you the current status of the landing gear. For instance, accessing
 *  the landingGeatStatus property will tell you if the landing gear is stretching
 *  or if it has folded. For more information on what all
 *  the possible statuses for the landing gear are, take a look at DJICameraSDCardInfo.h.
 */
@property(nonatomic, readonly) DJIMCLandingGearStatus landingGearStatus;

@end
