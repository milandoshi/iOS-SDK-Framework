/*
 *  DJI iOS Mobile SDK Framework
 *  DJIMainControllerDef.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJIMainControllerSettings.h

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
/**
 *  Main controller error
 */
typedef NS_ENUM(NSInteger, MCError){
    /**
     *  No error
     */
    MC_NO_ERROR,
    /**
     *  Main controller config error
     */
    MC_CONFIG_ERROR,
    /**
     *  Main controller serial number error
     */
    MC_SERIALNUM_ERROR,
    /**
     *  Main controller IMU error
     */
    MC_IMU_ERROR,
    /**
     *  Main controller X1 error
     */
    MC_X1_ERROR,
    /**
     *  Main controller X2 error
     */
    MC_X2_ERROR,
    /**
     *  Main controller PMU error
     */
    MC_PMU_ERROR,
    /**
     *  Main controller transmitter error
     */
    MC_TRANSMITTER_ERROR,
    /**
     *  Main controller sensor error
     */
    MC_SENSOR_ERROR,
    /**
     *  Main controller compass error
     */
    MC_COMPASS_ERROR,
    /**
     *  Main controller calibration error
     */
    MC_IMU_CALIBRATION_ERROR,
    /**
     *  Main controller compass calibration error
     */
    MC_COMPASS_CALIBRATION_ERROR,
    /**
     *  Main controller transmitter calibration error
     */
    MC_TRANSMITTER_CALIBRATION_ERROR,
    /**
     *  Main controller invalid battery error
     */
    MC_INVALID_BATTERY_ERROR,
    /**
     *  Main controller battery communication error
     */
    MC_INVALID_BATTERY_COMMUNICATION_ERROR
};

/**
 *  Attitude
 */
typedef struct
{
    double pitch;
    double roll;
    double yaw;
} DJIAttitude;

/**
 *  No fly zone
 */
typedef struct
{
    float zoneRadius;
    CLLocationCoordinate2D zoneCenterCoordinate;
} DJINoFlyZone;

/**
 *  Limit fly
 */
typedef struct
{
    BOOL isReachMaxHeight;
    //TODO PROPERTY NAME CHANGE: hasReachedMaxHeight
    BOOL isReachMaxDistance;
    //TODO PROPERTY NAME CHANGE: hasReachedMaxDistance
    Float32 maxLimitHeight;
    //TODO PROPERTY NAME CHANGE: maxHeightLimit
    Float32 maxLimitDistance;
    //TODO PROPERTY NAME CHANGE: maxDistanceLimit
} DJILimitFlyStatus;


/**
 *  Opetions for what do when 
 */
typedef NS_ENUM(uint8_t, DJIMCLowBatteryAction){
    /**
     *  Do nothing
     */
    LowBatteryDoNothing,
    /**
     *  Go home
     */
    LowBatteryGoHome,
    /**
     *  Landing
     */
    LowBatteryLanding,
    /**
     *  Unknown
     */
    LowBatteryActionUnknown = 0xFF
};

/**
 *  Landing gear status
 */
typedef NS_ENUM(uint8_t, DJIMCLandingGearStatus){
    /**
     *  None, Unknown status
     */
    LandingGearStatusNone,
    /**
     *  Landing gear is folded
     */
    LandingGearFolded,
    /**
     *  Landing gear is in folding
     */
    LandingGearFolding,
    /**
     *  Landing gear is stretched
     */
    LandingGearStretched,
    /**
     *  Landing gear is stretching
     */
    LandingGearStretching,
    /**
     *  Landing gear deform stoped
     */
    LandingGearStoped,
};



