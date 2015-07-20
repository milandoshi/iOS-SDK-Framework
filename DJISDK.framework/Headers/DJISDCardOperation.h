/*
 *  DJI iOS Mobile SDK Framework
 *  DJISDCardOperation.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJISDCard.h
//Alternatively, you could use DJISDCardOperations.h

#import <Foundation/Foundation.h>
#import <DJISDK/DJIObject.h>

@class DJICameraSDCardInfo;

@protocol DJISDCardOperation <NSObject>

/**
 *  Formatting the SD card deletes all data that is on the SD card. //ASK ABOUT THIS LATER: Are there certain settings that user changes on the SD card that get changed? 
 *
 *  @param block Will give you a block where you will be able to check 
 *  the error once the method is complete. 
 */
-(void) formatSDCard:(DJIExecuteResultBlock)block;

/**
 *  Gets the current state of the SD card. For instance, accessing the sdInfo
 *  parameter of the block will tell you whether or not the SD card is inserted 
 *  into the camera or how much memory remaining. For more information on what all 
 *  the possible current states of the SD card are, take a look at DJICameraSDCardInfo.h.
 *
 *  @param block Will give you access to the error and the
 *  the current state of the SD card.
 */
-(void) getSDCardInfo:(void(^)(DJICameraSDCardInfo* sdInfo, DJIError* error))block;
//TODO METHOD NAME CHANGE: getSDCardCurrentState:
//TODO PARAMETER NAME CHANGE: sdInfo --> sdCardCurrentState

@end
