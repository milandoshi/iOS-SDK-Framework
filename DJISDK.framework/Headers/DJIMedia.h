/*
 *  DJI iOS Mobile SDK Framework
 *  DJIMedia.h
 *
 *  Copyright (c) 2015, DJI.
 *  All rights reserved.
 *
 */

#import <Foundation/Foundation.h>
#include <time.h>

@class UIImage;
/**
 *  Numerous media types
 */
typedef NS_ENUM(NSUInteger, MediaType){
    /**
     *  Unknown
     */
    MediaTypeUnknown,
    /**
     *  JPG
     */
    MediaTypeJPG, //TODO: Is this .jpg or .jpeg?
    /**
     *  MP4
     */
    MediaTypeMP4,
    /**
     *  MOV
     */
    MediaTypeMOV,
    /**
     *  M4V
     */
    MediaTypeM4V,
    /**
     *  DNG
     */
    MediaTypeDNG,
};

typedef void (^AsyncOperationHandler)(NSError* error);
typedef void (^AsyncFetchHandler)(NSData* data, BOOL* stop, NSError* error);

@class DJIMediaContext;

@interface DJIMedia : NSObject
{
    DJIMediaContext* _mediaContext;
}

@property(nonatomic, readonly) DJIMediaContext* mediaContext;

/**
 *  Name of the media file
 */
@property(nonatomic, readonly) NSString* fileName;

/**
 *  Size of the media file
 */
@property(nonatomic, readonly) long long fileSize;

/**
 *  Time when the media file was created //TODO: What's the format?
 */
@property(nonatomic, readonly) NSString* createTime;
//TODO PROPERTY NAME CHANGE: timeCreated

/**
 *  If the media file is a video, this property stores the duration of the video in seconds.
 */
@property(nonatomic, readonly) float durationSeconds;
//TODO PROPERTY NAME CHANGE: durationInSeconds

/**
 *  Type of the media file
 */
@property(nonatomic, readonly) MediaType mediaType;

/**
 *  //TODO: What is the URL?
 */
@property(nonatomic, readonly) NSString* mediaURL;

~~~~~~

/**
 *  Thumbnail of this media. if nil user should call once - fetchThumbnail: to fetch the thumbnail data
 */
@property(nonatomic, readonly) UIImage* thumbnail;

-(id) initWithMediaURL:(NSString*)url;

/**
 *  Fetch this media's thumbnail from remote album.
 *
 *  @param completion if there is no error, property "thumbnail" will be set
 */
-(void) fetchThumbnail:(AsyncOperationHandler)completion;

/**
 *  Fetch media data from remote album.
 *
 *  @param handler Data callback will call when received data frome remote or some error occured
 */
-(void) fetchMediaData:(AsyncFetchHandler)handler;

@end

