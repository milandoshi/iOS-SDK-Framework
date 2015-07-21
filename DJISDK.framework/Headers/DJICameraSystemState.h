/*
 *  DJI iOS Mobile SDK Framework
 *  DJICameraSystemState.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJICameraCurrentState.h

#import <Foundation/Foundation.h>
#import <DJISDK/DJICameraSettingsDef.h>

@interface DJICameraSystemState : NSObject

/**
 *  The camera is currently taking .raw or .jpeg type of picture. //TODO: Is this only state where it's taking .raw or .jpeg or are all the capture properties taking the same type of photos //TODO: What is the difference between this and taking single capture?
 */
@property(nonatomic, readonly) BOOL isTakingRawCapture;

/**
 *  The camera is taking pictures continuously.
 */
@property(nonatomic, readonly) BOOL isTakingContinusCapture;

                                                                    //TODO: What is the difference between continuous/multi capture?
/**
 *  The camera is taking multi capture.
 */
@property(nonatomic, readonly) BOOL isTakingMultiCapture;

/**
 *  The camera is taking a single capture.
 */
@property(nonatomic, readonly) BOOL isTakingSingleCapture;

/**
 *  Whether the camera's time has synced. //TODO: Time is synced to what??
 */
@property(nonatomic, readonly) BOOL isTimeSynced;

~~~~~~

/**
 *  Whether or not the camera is currently recording.
 */
@property(nonatomic, readonly) BOOL isRecording;

/**
 *  Whether or not the camera is currently over heating.
 */
@property(nonatomic, readonly) BOOL isCameraOverHeated;

/**
 *  Whether or not the camera has a sensor error. //TODO: What is a sensor error?
 */
@property(nonatomic, readonly) BOOL isCameraSensorError;

/**
 *  //TODO: What is this?
 */
@property(nonatomic, readonly) BOOL isInvalidOperation;
//TODO PROPERTY NAME CHANGE:

/**
 *  Whether or not the camera has a serious error.
 */
@property(nonatomic, readonly) BOOL isSeriousError;
//TODO PROPERTY NAME CHANGE: hasSeriousError

/**
 *  Whether or not the camera currently has an SD card inserted into it.
 */
@property(nonatomic, readonly) BOOL isSDCardExist;
//TODO PROPERTY NAME CHANGE: isSDCardInserted

/**
 *  Whether or not the camera is currently in USB mode. //TODO: What is USB mode?
 */
@property(nonatomic, readonly) BOOL isUSBMode;
//TODO PROPERTY NAME CHANGE: isInUSBMode

/**
 *  Whether or not the camera is currently connected to a PC or laptop. 
 */
@property(nonatomic, readonly) BOOL isConnectedToPC;

/**
 *  Current camera work mode. Property supported for Inspire 1 & Phantom 3 Professional.
 */
@property(nonatomic, readonly) CameraWorkMode workMode;

/**
 *  Current recording time of the camera. Property supported for Inspire 1 & Phantom 3 Professional.
 */
//TODO: What is the unit? 
@property(nonatomic, readonly) int currentRecordingTime;

@end