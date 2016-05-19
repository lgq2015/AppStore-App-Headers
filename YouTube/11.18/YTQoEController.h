/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBasePingController.h>
#import <YouTube/MLBandwidthUsageObserver.h>
#import <YouTube/MLQoEMeasurementProviderObserver.h>
#import <YouTube/YTReachabilityObserver.h>
#import <YouTube/YTSpeedyGPingDelegate.h>

@protocol OS_dispatch_queue, YTPingControllerConfig, MLQoEMeasurementProvider, YTVisitorDataProvider;
@class NSObject, NSTimer, NSString, MLQoEError, GTMURLBuilder, YTITrackingUrl, NSDictionary, YTReachabilityController, YTQoEControllerState;

@interface YTQoEController : YTBasePingController <MLBandwidthUsageObserver, MLQoEMeasurementProviderObserver, YTReachabilityObserver, YTSpeedyGPingDelegate> {

	int _lifecycleState;
	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _playingStateTimer;
	NSString* _lastStateCode;
	id<YTPingControllerConfig> _config;
	long long _otherBandwidthBytes;
	double _otherBandwidthTime;
	NSTimer* _otherBandwidthTimer;
	MLQoEError* _fatalError;
	id<MLQoEMeasurementProvider> _QoEMeasurementProvider;
	id<YTVisitorDataProvider> _visitorDataProvider;
	GTMURLBuilder* _URLBuilder;
	YTITrackingUrl* _trackingURL;
	NSDictionary* _arguments;
	YTReachabilityController* _reachabilityController;
	YTQoEControllerState* _state;
	NSString* _connectionStatus;
	NSString* _visibilityStatus;
	NSString* _audioDestination;
	NSString* _videoDestination;
	NSString* _playerType;

}

@property (retain) MLQoEError * fatalError;                                                    //@synthesize fatalError=_fatalError - In the implementation block
@property (nonatomic,retain) id<MLQoEMeasurementProvider> QoEMeasurementProvider;              //@synthesize QoEMeasurementProvider=_QoEMeasurementProvider - In the implementation block
@property (nonatomic,retain) id<YTVisitorDataProvider> visitorDataProvider;                    //@synthesize visitorDataProvider=_visitorDataProvider - In the implementation block
@property (nonatomic,retain) GTMURLBuilder * URLBuilder;                                       //@synthesize URLBuilder=_URLBuilder - In the implementation block
@property (nonatomic,retain) YTITrackingUrl * trackingURL;                                     //@synthesize trackingURL=_trackingURL - In the implementation block
@property (nonatomic,retain) NSDictionary * arguments;                                         //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain) YTReachabilityController * reachabilityController;                //@synthesize reachabilityController=_reachabilityController - In the implementation block
@property (nonatomic,retain) YTQoEControllerState * state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * connectionStatus;                                        //@synthesize connectionStatus=_connectionStatus - In the implementation block
@property (nonatomic,copy) NSString * visibilityStatus;                                        //@synthesize visibilityStatus=_visibilityStatus - In the implementation block
@property (nonatomic,copy) NSString * audioDestination;                                        //@synthesize audioDestination=_audioDestination - In the implementation block
@property (nonatomic,copy) NSString * videoDestination;                                        //@synthesize videoDestination=_videoDestination - In the implementation block
@property (nonatomic,copy) NSString * playerType;                                              //@synthesize playerType=_playerType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)QoEErrorCodeFromPlaybackErrorCode:(int)arg1 ;
+(id)cleanXtags:(id)arg1 ;
+(id)valueForFormatSelectionReason:(int)arg1 ;
+(id)stateCodeForPlayerState:(int)arg1 ;
+(char)validateAdFormat:(id)arg1 ;
-(YTReachabilityController *)reachabilityController;
-(void)batteryStateDidChange;
-(void)reachabilityDidChange;
-(void)setReachabilityController:(YTReachabilityController *)arg1 ;
-(id)initWithConfig:(id)arg1 pingStore:(id)arg2 pingService:(id)arg3 systemNotifications:(id)arg4 ;
-(id)initWithConfig:(id)arg1 pingStore:(id)arg2 visitorDataProvider:(id)arg3 mediaServices:(id)arg4 ;
-(NSString *)videoDestination;
-(NSString *)audioDestination;
-(MLQoEError *)fatalError;
-(void)playerStatusDidChange:(id)arg1 ;
-(void)appWillBeSuspended;
-(void)recordQoEErrorCode:(id)arg1 currentMediaTime:(double)arg2 ;
-(void)recordPlaybackError:(id)arg1 currentMediaTime:(double)arg2 ;
-(void)startWithTrackingURL:(id)arg1 state:(id)arg2 playerStatus:(id)arg3 ;
-(id<YTVisitorDataProvider>)visitorDataProvider;
-(void)setVisitorDataProvider:(id<YTVisitorDataProvider>)arg1 ;
-(void)setQoEMeasurementProvider:(id<MLQoEMeasurementProvider>)arg1 ;
-(void)recordFormatSelectionQoEMeasurement:(id)arg1 ;
-(void)recordBandwidthQoEMeasurement:(id)arg1 ;
-(void)recordDroppedFramesQoEMeasurement:(id)arg1 ;
-(void)recordErrorQoEMeasurement:(id)arg1 ;
-(void)recordPlayerStateQoEMeasurement:(id)arg1 ;
-(void)recordBufferReadaheadQoEMeasurement:(id)arg1 ;
-(id<MLQoEMeasurementProvider>)QoEMeasurementProvider;
-(void)setPlayerType:(NSString *)arg1 ;
-(void)startOtherBandwidthTimer;
-(void)setTrackingURL:(YTITrackingUrl *)arg1 ;
-(void)resetURLBuilder;
-(void)appendParameterValue:(id)arg1 forArgument:(id)arg2 ;
-(void)updateConnectionStatus:(id)arg1 ;
-(void)updatePlayerStatus:(id)arg1 ;
-(void)sendPingIfNecessaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)internalShutdown;
-(id)stopWithFinal:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)stopPlayingStateTimer;
-(double)currentWallTime;
-(void)appendStateChangeParameter:(id)arg1 wallTime:(double)arg2 ;
-(double)wallTimeForMeasurement:(id)arg1 ;
-(void)setFatalError:(MLQoEError *)arg1 ;
-(void)recordErrorQoEMeasurementSynchronous:(id)arg1 ;
-(void)updateVideoFormatSelectionParameters;
-(void)startPlayingStateTimer;
-(void)startBatteryMonitoring;
-(void)stopOtherBandwidthTimer;
-(void)onPlayingStateTimerFire;
-(void)onOtherBandwidthTimerFire;
-(void)appendOtherBandwidthParameter;
-(void)setConnectionStatus:(NSString *)arg1 ;
-(NSString *)visibilityStatus;
-(void)setVisibilityStatus:(NSString *)arg1 ;
-(void)setAudioDestination:(NSString *)arg1 ;
-(void)clearArgumentsAndSendPingWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(char)hasParametersToSend;
-(void)observeBandwidthUsageWithBytes:(long long)arg1 elapsedTime:(double)arg2 ;
-(void)sendQoEAlertPing;
-(void)updateVisibilityStatus:(id)arg1 ;
-(void)firePlayingStateTimer;
-(void)fireOtherBandwidthTimer;
-(GTMURLBuilder *)URLBuilder;
-(void)setURLBuilder:(GTMURLBuilder *)arg1 ;
-(YTITrackingUrl *)trackingURL;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(YTQoEControllerState *)state;
-(void)setState:(YTQoEControllerState *)arg1 ;
-(void)flush;
-(id)suspend;
-(void)stop;
-(NSString *)connectionStatus;
-(void)setVideoDestination:(NSString *)arg1 ;
-(NSDictionary *)arguments;
-(NSString *)playerType;
@end

