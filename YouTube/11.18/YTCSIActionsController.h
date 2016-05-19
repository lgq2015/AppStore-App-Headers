/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTSystemNotificationsObserver.h>

@protocol CSITimeSource;
@class NSMutableSet, YTSystemNotifications, GTMHTTPFetcherService, NSString, NSTimer, CSIConfiguration;

@interface YTCSIActionsController : NSObject <YTSystemNotificationsObserver> {

	NSMutableSet* _actions;
	YTSystemNotifications* _systemNotifications;
	GTMHTTPFetcherService* _fetcherService;
	NSString* _serviceName;
	NSTimer* _reportingTimer;
	double _staleTime;
	id<CSITimeSource> _timeSource;
	CSIConfiguration* _config;

}

@property (nonatomic,readonly) NSMutableSet * actions; 
@property (nonatomic,retain) id<CSITimeSource> timeSource; 
@property (nonatomic,readonly) CSIConfiguration * config;               //@synthesize config=_config - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appWillResignActive:(id)arg1 ;
-(id)initWithSystemNotifications:(id)arg1 fetcherService:(id)arg2 serviceName:(id)arg3 samplingRate:(float)arg4 staleTime:(double)arg5 globalConfig:(id)arg6 ;
-(id<CSITimeSource>)timeSource;
-(void)unregisterAction:(id)arg1 ;
-(id)fetcherService;
-(void)registerAction:(id)arg1 ;
-(void)setTimeSource:(id<CSITimeSource>)arg1 ;
-(void)timerDidTick;
-(id)serviceName;
-(void)stopTimer;
-(void)dealloc;
-(NSMutableSet *)actions;
-(void)flush;
-(CSIConfiguration *)config;
@end

