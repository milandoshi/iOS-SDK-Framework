/*
 *  DJI iOS Mobile SDK Framework
 *  DJIAppManager.h
 *
 *  Copyright (c) 2015, DJI. 
 *  All rights reserved.
 *
 */

//TODO FILE NAME CHANGE: DJIApplicationManager.h

#import <Foundation/Foundation.h>
#import <DJISDK/DJIFoundation.h>

/**
 * The error codes below are the error codes that are returned when the method -(void) appManagerDidRegisterWithError:(int)errorCode is called.
 */

#define RegisterSuccess                   0
//TODO: #define RegistrationSuccessful

//The application is not able to connect to the internet the first time it registers.
#define RegisterErrorConnectInternet     -1
//#define RegistrationErrorCouldNotConnectToInternet


//The application key you provided is incorrect.
#define RegisterErrorInvalidAppKey       -2
//#define RegistrationErrorInvalidApplicationKey


//The network you are trying to reach is busy, or the server is unreachable.
#define RegisterErrorGetMetaDataTimeout  -3
//#define RegistrationError--??

~~~~~~

//Attempt to copy meta data from other registered device is not allow.
#define RegisterErrorDeviceNotMatch      -4
//#define RegistrationError--??


//The bundle identifier of your application does not match the bundle identifier you registered on the website when you applied to obtain an application key.
#define RegisterErrorBundleIdNotMatch    -5
//#define RegistrationErrorBundleIdDoesNotMatch


// The app key is prohibited, please contact to the dji for help.
#define RegisterErrorAppKeyProhibited    -6
//#define RegistrationErrorApplicationKeyProhibited


// Maximum number of active count is exceed, please contact to the dji for help.
#define RegisterErrorActivationExceed    -7
//#define RegistrationError--??

// The app key is apply for other platform.
#define RegisterErrorAppKeyPlatformError -8

// The app key is not exist. please check your app key is correct.
#define RegisterErrorAppKeyNotExist      -9

// The app key is no permission.
#define RegisterErrorAppKeyNoPermission  -10

// Server error, please contact to the dji for help.
#define RegisterErrorServerParseFailure  -11

// Server error, please contact to the dji for help.
#define RegisterErrorServerWriteError    -12

// Server error, please contact to the dji for help.
#define RegisterErrorServerDataAbnormal  -13

// The meta data is damaged, please connect to the internet and retry.
#define RegisterErrorInvalidMetaData     -14

// The input app key is empty.
#define RegisterErrorEmptyAppKey         -15

// Unknown error
#define RegisterErrorUnknown             -1000

@protocol DJIAppManagerDelegate <NSObject>

~~~~~~

@required
/**
 *  This method is a callback method after the application attempts to register.
 *
 *  @param errorCode Associated with the error codes written above.
 */
-(void) appManagerDidRegisterWithError:(int)errorCode;

@end

@interface DJIAppManager : NSObject

/**
 *  Regist app. User should call once while the app first used and should connect to the internet at the first time registration.
 *
 *  @param appKey   App key, apply from dji's developer website.
 *  @param delegate Regist result callback
 */
+(void) registerApp:(NSString*)appKey withDelegate:(id<DJIAppManagerDelegate>)delegate;

/**
 *  Get error descryption with error code.
 *
 *  @param errorCode Error code return from regist callback
 *
 *  @return The error descryption
 */
+(NSString*) getErrorDescryption:(int)errorCode;

/**
 *  Get DJI SDK framework version
 *
 *  @return Version of framework.
 */
+(NSString*) getFrameworkVersion;

@end
