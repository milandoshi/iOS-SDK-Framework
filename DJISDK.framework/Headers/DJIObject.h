/*
 *  DJI iOS Mobile SDK Framework
 *  DJIObject.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

@class DJIError;

/**
 *  Remote execute result callback. To show result of the async operation after completion.
 *
 *  @param error Result of the async operation after completion. User should always check the error's code to see whether the operation is execut succeed. if error.errorCode not equal to ERR_Successed then chekc the error description to see the reason why the operation failed.
 */
typedef void (^DJIExecuteResultBlock)(DJIError* error);
//TODO TYPEDEF NAME CHANGE: typedef void (^DJIErrorBlock)(DJIError* error); 

@interface DJIObject : NSObject

@end
