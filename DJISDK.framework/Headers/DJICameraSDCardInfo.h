/*
 *  DJI iOS Mobile SDK Framework
 *  DJICameraSDCardInfo.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJISDCardCurrentState.h
//Alternatively, it could be DJICameraSDCardInformation.h.

#import <Foundation/Foundation.h>

@interface DJICameraSDCardInfo : NSObject

/** 
 *  Whether or not the SD card has an error 
 */
@property(nonatomic, readonly) BOOL hasError;

/** 
 *  Whether or not the SD card is read-only 
 */
@property(nonatomic, readonly) BOOL readOnly;

/** 
 *  Whether or not the SD card has an invalid format 
 */
@property(nonatomic, readonly) BOOL invalidFormat;

/** 
 *  Whether or not the SD card is formatted 
 */
@property(nonatomic, readonly) BOOL isFormated;
//TODO PROPERTY NAME CHANGE: isFormatted

/** 
 *  Whether or not the SD card is currently formatting 
 */
@property(nonatomic, readonly) BOOL isFormating;
//TODO PROPERTY NAME CHANGE: isFormatting

/** 
 *  Whether or not the SD card is full 
 */
@property(nonatomic, readonly) BOOL isFull;

/** 
 *  Whether or not the SD card is valid 
 */
//TODO: Clarify meaning
@property(nonatomic, readonly) BOOL isValid;

/** 
 *  Whether or not the SD card is currently inserted into the camera 
 */
@property(nonatomic, readonly) BOOL isInserted;

/** 
 *  Returns the size of the SD card 
 */
@property(nonatomic, readonly) int totalSize;
//TODO PROPERTY NAME CHANGE: totalSpace
//TODO: Clarify meaning (what are the units?)

/** 
 *  Returns the remaining space left in the SD card 
 */
@property(nonatomic, readonly) int remainSize;
//TODO PROPERTY NAME CHANGE: remainingSpace
//TODO: Clarify meaning (what are the units?)

/** 
 *  Returns the number of pictures that can be taken with the space 
 *  availabe on the SD card. 
 */
//TODO: Clarify meaning and what is the unit
@property(nonatomic, readonly) int availableCaptureCount;

/** 
 *  Returns the time available for recording with the space availabe 
 *  in the SD card. Property supported for Inspire 1 & Phantom 3 Professional.
 */
//TODO: Clarify meaning and what is the unit
@property(nonatomic, readonly) int availableRecordingTime;

@end
