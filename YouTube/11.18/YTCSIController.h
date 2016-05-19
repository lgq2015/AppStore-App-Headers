/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTSystemNotificationsObserver.h>
#import <YouTube/YTTimingResponderEventProcessorDelegate.h>

@protocol CSITimeSource, YTReachabilityProtocol;
@class NSMutableDictionary, CSIConfiguration, GTMHTTPFetcherService, NSTimer, YTSystemNotifications, NSString;

@interface YTCSIController : NSObject <YTSystemNotificationsObserver, YTTimingResponderEventProcessorDelegate> {

	NSMutableDictionary* _beacons;
	CSIConfiguration* _csiConfiguration;
	id<CSITimeSource> _csiTimeSource;
	id<YTReachabilityProtocol> _reachabilityController;
	GTMHTTPFetcherService* _fetcherService;
	NSTimer* _reportingTimer;
	float _staleTime;
	YTSystemNotifications* _systemNotifications;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCSIAction:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 fetcherService:(id)arg2 reachabilityController:(id)arg3 systemNotifications:(id)arg4 staleTime:(double)arg5 globalConfig:(id)arg6 ;
-(void)setTimeSource:(id)arg1 ;
-(void)reportingTimerDidTick;
-(id)getBeaconWithName:(id)arg1 ;
-(void)mapCSIAction:(id)arg1 toBeacon:(id)arg2 ;
-(void)clearBeacon:(id)arg1 ;
-(void)stopTimer;
-(void)dealloc;
-(void)applicationWillResignActive:(id)arg1 ;
@end

