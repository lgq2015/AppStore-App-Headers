/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, GIDASServiceFactory;

@interface GIDASScreenCache : NSObject {

	NSMutableDictionary* _cache;
	GIDASServiceFactory* _serviceFactory;

}

@property (nonatomic,retain) GIDASServiceFactory * serviceFactory;              //@synthesize serviceFactory=_serviceFactory - In the implementation block
+(id)sharedInstance;
-(void)prefetchScreensForViewedScreen:(int)arg1 authorization:(id)arg2 ;
-(void)setScreen:(id)arg1 authorization:(id)arg2 ;
-(id)supportedNativeActions;
-(id)supportedIcons;
-(id)getScreenWithScreenID:(int)arg1 authorization:(id)arg2 ;
-(void)fetchScreenWithScreenID:(int)arg1 authorization:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)markUnstableScreensStaleWithAuthorization:(id)arg1 ;
-(GIDASServiceFactory *)serviceFactory;
-(void)setServiceFactory:(GIDASServiceFactory *)arg1 ;
-(id)init;
-(void)clear;
-(id)requestContext;
@end

