/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGBadStateTracker : NSObject {

	char _tracking;
	char _backgroundedWhileTracking;

}

@property (assign) char tracking;                               //@synthesize tracking=_tracking - In the implementation block
@property (assign) char backgroundedWhileTracking;              //@synthesize backgroundedWhileTracking=_backgroundedWhileTracking - In the implementation block
+(void)initialize;
+(id)sharedTracker;
-(void)appBecameActive;
-(void)appBackgrounded;
-(char)backgroundedWhileTracking;
-(void)setBackgroundedWhileTracking:(char)arg1 ;
-(void)beginTracking;
-(void)dealloc;
-(id)init;
-(void)setTracking:(char)arg1 ;
-(void)endTracking;
-(char)tracking;
@end

