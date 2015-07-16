//
//  DJIAppManager.h
//  DJISDK Framework
//
//  Copyright (c) 2015 DJI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DJISDK/DJIFoundation.h>

/**
 * Below are the error codes that will help you identify what occurrs when an application is registered. 
 */
#define RegisterSuccess                   0  //RegistrationSuccessful
#define RegisterErrorConnectInternet     -1  //RegistrationErrorCouldNotConnectToInternet
#define RegisterErrorInvalidAppKey       -2  //RegistrationErrorInvalidAppKey
#define RegisterErrorGetMetaDataTimeout  -3  //RegistrationError--??
#define RegisterErrorDeviceNotMatch      -4  //RegistrationError--??
#define RegisterErrorBundleIdNotMatch    -5  //RegistrationErrorBundleIdDoesNotMatch
#define RegisterErrorAppKeyProhibited    -6  //RegistrationErrorAppKeyIsProhibted -- how is this different from invalid app key
#define RegisterErrorActivationExceed    -7  //RegistrationError--??
#define RegisterErrorAppKeyPlatformError -8  //RegistrationError--??
#define RegisterErrorAppKeyNotExist      -9  //RegistrationErrorAppKeyDoesNotExist
#define RegisterErrorAppKeyNoPermission  -10 //RegistrationErrorAppKeyDoesNotHavePermission
#define RegisterErrorServerParseFailure  -11 //RegistrationError--??
#define RegisterErrorServerWriteError    -12 //RegistrationError--??
#define RegisterErrorServerDataAbnormal  -13 //RegistrationError--??
#define RegisterErrorInvalidMetaData     -14 //RegistrationError--??

#define RegisterErrorUnknown             -1000 //RegistrationErrorUnknown

@protocol DJIAppManagerDelegate <NSObject>

/**
 *  Register result
 */
-(void) appManagerDidRegisterWithError:(int)errorCode;

@end

@interface DJIAppManager : NSObject

/**
 *  Register app from server. User should call once while app started and should connect to the internet at the first time registration.
 *
 *  @param appKey   App key
 *  @param delegate Register result callback
 */
+(void) registerApp:(NSString*)appKey withDelegate:(id<DJIAppManagerDelegate>)delegate;

/**
 *  Get register error descryption
 *
 *  @param errorCode Error code from regist app
 *
 *  @return Error descryption
 */
+(NSString*) getErrorDescryption:(int)errorCode;

/**
 *  Get DJI SDK framework version
 *
 *  @return Version
 */
+(NSString*) getFrameworkVersion;

@end
