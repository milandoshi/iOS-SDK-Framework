/*
 *  DJI iOS Mobile SDK Framework
 *  DJISDK.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

//Application
#import <DJISDK/DJIFoundation.h>
#import <DJISDK/DJIAppManager.h>
#import <DJISDK/DJIObject.h>
#import <DJISDK/DJIError.h>


//Drone
#import <DJISDK/DJIDrone.h>


//Camera
#import <DJISDK/DJICamera.h>
#import <DJISDK/DJICameraSettingsDef.h>
    //SD Card
    #import <DJISDK/DJICameraSDCardInfo.h>
    #import <DJISDK/DJISDCardOperation.h>
    //Playback
    #import <DJISDK/DJICameraPlaybackState.h>
    #import <DJISDK/DJIMedia.h>
    //Current State
    #import <DJISDK/DJICameraSystemState.h>


//Battery
#import <DJISDK/DJIBattery.h>


//Gimbal
#import <DJISDK/DJIGimbal.h>
#import <DJISDK/DJIGimbalCapacity.h>


//Main Controller
#import <DJISDK/DJIMainController.h>
#import <DJISDK/DJIMainControllerDef.h>
#import <DJISDK/DJIMCSmartGoHome.h>
    //Current State
    #import <DJISDK/DJIMCSystemState.h>
    #import <DJISDK/DJIMCLandingGearState.h>


//Navigation
#import <DJISDK/DJINavigation.h>
    //GroundStation
    #import <DJISDK/DJIGroundStation.h>
    #import <DJISDK/DJIGroundStationTask.h>
        //Features
        #import <DJISDK/DJIHotPointSurround.h>
        #import <DJISDK/DJIGroundStationWaypoint.h>
        //Current State
        #import <DJISDK/DJIGroundStationFlyingInfo.h>


//Range Extender
#import <DJISDK/DJIRangeExtender.h>


//Image Transimtter
#import <DJISDK/DJIImageTransmitter.h>


//Remote Controller
#import <DJISDK/DJIRemoteController.h>
#import <DJISDK/DJIRemoteControllerDef.h>


//DJI Phantom
#import <DJISDK/DJIPhantomCamera.h>
#import <DJISDK/DJIPhantomMainController.h>


//DJI Inspire 1
#import <DJISDK/DJIInspireRemoteController.h>
#import <DJISDK/DJIInspireGimbal.h>
#import <DJISDK/DJIInspireBattery.h>
#import <DJISDK/DJIInspireCamera.h>
#import <DJISDK/DJIInspireMainController.h>


//DJI Phantom 3 Advanced
#import <DJISDK/DJIPhantom3AdvancedRemoteController.h>
#import <DJISDK/DJIPhantom3AdvancedGimbal.h>
#import <DJISDK/DJIPhantom3AdvancedBattery.h>
#import <DJISDK/DJIPhantom3AdvancedCamera.h>
#import <DJISDK/DJIPhantom3AdvancedMainController.h>


//DJI Phantom 3 Professional
#import <DJISDK/DJIPhantom3ProRemoteController.h>
#import <DJISDK/DJIPhantom3ProGimbal.h>
#import <DJISDK/DJIPhantom3ProBattery.h>
#import <DJISDK/DJIPhantom3ProCamera.h>
#import <DJISDK/DJIPhantom3ProMainController.h>


