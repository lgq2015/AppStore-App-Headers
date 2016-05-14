/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString;

@interface FBSDKViewImpressionTracker : NSObject {

	NSMutableSet* _trackedImpressions;
	NSString* _eventName;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)impressionTrackerWithEventName:(id)arg1 ;
-(id)initWithEventName:(id)arg1 ;
-(void)logImpressionWithIdentifier:(id)arg1 parameters:(id)arg2 ;
-(void)dealloc;
-(NSString *)eventName;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

