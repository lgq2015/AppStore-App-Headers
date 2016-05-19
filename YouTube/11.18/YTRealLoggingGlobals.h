/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTLoggingGlobals.h>

@protocol YTDataServices, YTLoggingGlobalsConfig, YTNetGlobals;
@class YTDelayedEventWorker, YTInteractionLoggingController, GIMMe, NSString;

@interface YTRealLoggingGlobals : NSObject <YTLoggingGlobals> {

	YTDelayedEventWorker* _eventLoggingWorker;
	YTDelayedEventWorker* _interactionLoggingWorker;
	YTInteractionLoggingController* _interactionLoggingController;
	id<YTDataServices> _dataServices;
	id<YTLoggingGlobalsConfig> _config;
	id<YTNetGlobals> _netGlobals;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventLoggingController;
-(GIMMe *)gimme;
-(id)interactionLoggingController;
-(id)workers;
-(void)setGimme:(GIMMe *)arg1 ;
-(id)interactionLoggingWorker;
-(id)eventLoggingWorker;
-(id)eventLoggingService;
-(id)init;
@end

