/*
 *  DJI iOS Mobile SDK Framework
 *  DJIHotPointSurround.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJIGroundStationHotPoint.h

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <DJISDK/DJIFoundation.h>
#import <DJISDK/DJIObject.h>
#import <DJISDK/DJINavigation.h>

/**
 *  Max surrounding radius
 */
DJI_API_EXTERN const float DJIMaxSurroundingRadius;

/**
 *  Entry point position relative to the hot point
 */
typedef NS_ENUM(NSUInteger, DJIHotPointSurroundEntryPoint){
    /**
     *  Entry from the north
     */
    SurroundEntryFromNorth,
    /**
     *  Entry from the south
     */
    SurroundEntryFromSouth,
    /**
     *  Entry from the west
     */
    SurroundEntryFromWest,
    /**
     *  Entry from the east
     */
    SurroundEntryFromEast,
    /**
     *  Entry from point which nesrest to the current position
     */
    SurroundEntryFromNearest,
};

/**
 *  Heading mode for aircraft while surrounding the hot point
 */
typedef NS_ENUM(NSUInteger, DJIHotPointSurroundHeadingMode){
    /**
     *  Along the circle
     */
    SurroundHeadingAlongTheCircle,
    /**
     *  Toward the hot point
     */
    SurroundHeadingTowardHotPoint,
    /**
     *  Backward the hot point
     */
    SurroundHeadingBackwardHotPoint,
    /**
     *  Control by remote controller
     */
    SurroundHeadingControlByRemoteController,
    /**
     *  Using initial direction always
     */
    SurroundHeadingUsingInitialDirection
};

/**
 *  The hotpoint mission executing state
 */
typedef NS_ENUM(uint8_t, DJIHotpointMissionExecutePhase){
    /**
     *  Initializing
     */
    HotpointMissionInitializing,
    /**
     *  Moving,
     */
    HotpointMissionMoving,
    /**
     *  Waing, Maybe the gps level is bad, waiting gps ready.
     */
    HotpointMissionWaiting,
};

@interface DJIHotpointMissionStatus : DJINavigationMissionStatus

/**
 *  Execute phase of hot point mission.
 */
@property(nonatomic, readonly) DJIHotpointMissionExecutePhase currentPhase;

/**
 *  The current radius to the hotpoint
 */
@property(nonatomic, readonly) float currentRadius;

@end


/**
 *  Mission for Hot point surround action
 */
@interface DJIHotPointSurroundMission : NSObject

/**
 *  Hot point coordinate in degree
 */
@property(nonatomic, assign) CLLocationCoordinate2D hotPoint;

/**
 *  Hot point altitude in meter. relate to the ground.
 */
@property(nonatomic, assign) float altitude;

/**
 *  Radius in meter for surrounding. should be in range [5, 500]
 */
@property(nonatomic, assign) float surroundRadius;

/**
 *  Surround the hot point in clockwise
 */
@property(nonatomic, assign) BOOL clockwise;

/**
 *  Entry point of the aircraft when start to surround
 */
@property(nonatomic, assign) DJIHotPointSurroundEntryPoint entryPoint;

/**
 *  Heading of aircraft while in surrounding
 */
@property(nonatomic, assign) DJIHotPointSurroundHeadingMode headingMode;

/**
 *  Init mission instance using coordinate
 *
 *  @param coordinate Hot point coordinate
 *
 *  @return Mission Instance
 */
-(id) initWithCoordinate:(CLLocationCoordinate2D)coordinate;

@end

@protocol DJIHotPointSurround <DJINavigation>

@required

/**
 *  Current execute mission
 */
@property(nonatomic, readonly) DJIHotPointSurroundMission* currentHotPointMisson;

/**
 *  Set mission
 *
 *  @param mission Mission to be execute
 *
 *  @return Return YES while the parameters of mission is valid.
 */
-(BOOL) setHotPointSurroundMission:(DJIHotPointSurroundMission*)mission;

/**
 *  Start execute hot point surround mission. Will enter NavigationMissionHotpoint mode.
 *
 *  @param result Remote execute result
 */
-(void) startHotPointMissionWithResult:(DJIExecuteResultBlock)result;

/**
 *  Pasue execute hot point surround mission
 *
 *  @param result Remote execute result
 */
-(void) pauseHotPointMissionWithResult:(DJIExecuteResultBlock)result;

/**
 *  Resume hot point surround mission
 *
 *  @param result Remote execute result
 */
-(void) resumeHotPointMissionWithResult:(DJIExecuteResultBlock)result;

/**
 *  Stop hot point surround mission
 *
 *  @param result Remote execute result
 */
-(void) stopHotPointMissionWithResult:(DJIExecuteResultBlock)result;

@end
