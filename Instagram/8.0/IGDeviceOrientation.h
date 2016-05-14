/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGMotionManager, NSOperationQueue;

@interface IGDeviceOrientation : NSObject {

	int _orientationObservers;
	int _pauseCount;
	IGMotionManager* _motionManager;
	NSOperationQueue* _queue;
	int _orientation;

}

@property (nonatomic,readonly) int orientation;                                                                                             //@synthesize orientation=_orientation - In the implementation block
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) char generatesDeviceOrientationNotifications; 
+(id)currentDevice;
-(void)pauseGeneratingDeviceOrientationNotifications;
-(void)resumeGeneratingDeviceOrientationNotifications;
-(void)dealloc;
-(id)init;
-(char)isGeneratingDeviceOrientationNotifications;
-(int)orientation;
-(void)reset;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(void)startMotionUpdates;
-(void)stopMotionUpdates;
@end

