/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MDXDeviceInfoMatcherUtil;

@interface MDXDevicesWhitelisting : NSObject {

	NSArray* _features;
	MDXDeviceInfoMatcherUtil* _matcherUtil;

}
+(id)defaultFeatures:(id)arg1 ;
+(void)addDeviceToArray:(id)arg1 connectionType:(int)arg2 manufacturer:(id)arg3 modelName:(id)arg4 deviceVersion:(id)arg5 ;
-(id)getFeatureControl:(int)arg1 ;
-(char)checkThatDevice:(id)arg1 matchesAnyMatcher:(id)arg2 ;
-(char)isFeatureEnabled:(int)arg1 device:(id)arg2 ;
-(id)initWithConfig:(id)arg1 ;
@end

