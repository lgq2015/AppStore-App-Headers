/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTUserChangedObserver.h>
#import <YouTube/YTHintControllerDelegate.h>
#import <YouTube/YTServices.h>

@protocol YTResponder, YTNetGlobals, YTDataServices, YTInnerTubeGlobals, YTIdentityGlobals, YTOfflineServices, YTPlayerServices, MDXServices, YTUploadServices, YTConversationGlobals, YTAdsPlayerServices, YTShareServices, YTSpaceCastGlobals, YTPrefetchController, YTUserDefaultKeysProvider;
@class NSDate, YTURLHandler, YTSettings, NSMutableArray, YTCSIYouTubeActionsController, YTCSIController, YTTimingResponderEventProcessor, YTGoogleConversionPingService, YTHintViewController, YTActivityWaitViewController, YTFPSGELLogger, YTFPSMeter, YTFPSStatusBar, YTFeedbackStateController, YTVideoPreviewController, YTMDXObserver, YTScrollsToTopCoordinator, YTJumbleService, YTOfflineRefreshWorker, YTPlayerViewController, YTFABController, YTInnerTubeUIServiceMapper, YTSearchHistory, MLRealServices, YTBackgroundURLSessionNotifications, YTInlinePlaybackLayoutCoordinator, YTAppInlinePlaybackController, YTEntitlementRefreshController, YTOfflineVideoActionController, YTOfflinePlaylistActionController, YTOfflineUsagePathsController, YTStoreKitPurchaseController, GIMMe, NSString;

@interface YTLiveServices : NSObject <YTUserChangedObserver, YTHintControllerDelegate, YTServices> {

	YTURLHandler* _URLHandler;
	YTSettings* _settings;
	id<YTResponder> _parentResponder;
	id<YTNetGlobals> _netGlobals;
	id<YTDataServices> _dataServices;
	id<YTInnerTubeGlobals> _innerTubeGlobals;
	id<YTIdentityGlobals> _identityGlobals;
	id<YTOfflineServices> _offlineServices;
	id<YTPlayerServices> _playerServices;
	id<MDXServices> _MDXServices;
	id<YTUploadServices> _uploadServices;
	id<YTConversationGlobals> _conversationGlobals;
	id<YTAdsPlayerServices> _adsPlayerServices;
	id<YTShareServices> _shareServices;
	id<YTSpaceCastGlobals> _spaceCastGlobals;
	NSMutableArray* _apiaryServices;
	YTCSIYouTubeActionsController* _CSIActionsController;
	YTCSIController* _CSIController;
	YTTimingResponderEventProcessor* _timingResponderEventProcessor;
	YTGoogleConversionPingService* _googleConversionPingService;
	YTHintViewController* _hintViewController;
	YTActivityWaitViewController* _activityWaitController;
	YTFPSGELLogger* _FPSGELLogger;
	YTFPSMeter* _FPSMeter;
	YTFPSStatusBar* _FPSStatusBar;
	YTFeedbackStateController* _feedbackStateController;
	YTVideoPreviewController* _videoPreviewController;
	YTMDXObserver* _mdxObserver;
	id<YTPrefetchController> _prefetchController;
	YTScrollsToTopCoordinator* _scrollsToTopCoordinator;
	YTJumbleService* _jumbleService;
	YTOfflineRefreshWorker* _offlineRefreshWorker;
	YTPlayerViewController* _playerViewController;
	YTFABController* _FABController;
	YTInnerTubeUIServiceMapper* _innerTubeUIServiceMapper;
	YTSearchHistory* _searchHistory;
	id<YTUserDefaultKeysProvider> _userDefaultsKeysProvider;
	MLRealServices* _mediaServices;
	YTBackgroundURLSessionNotifications* _backgroundURLSessionNotifications;
	YTInlinePlaybackLayoutCoordinator* _inlinePlaybackLayoutCoordinator;
	YTAppInlinePlaybackController* _appInlinePlaybackController;
	YTEntitlementRefreshController* _entitlementRefreshController;
	YTOfflineVideoActionController* _offlineVideoActionController;
	YTOfflinePlaylistActionController* _offlinePlaylistActionController;
	YTOfflineUsagePathsController* _offlineUsagePathsProvider;
	YTStoreKitPurchaseController* _storeKitPurchaseController;
	NSDate* _applicationInitDate;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                      //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * applicationInitDate;              //@synthesize applicationInitDate=_applicationInitDate - In the implementation block
-(id)timingResponderEventProcessor;
-(id)CSIActionsController;
-(id)FABController;
-(GIMMe *)gimme;
-(id)googleConversionPingService;
-(id)hintController;
-(id)activityWaitController;
-(id)interstitialPromoController;
-(id)jumbleService;
-(id)personalizedSuggestionsController;
-(id)serviceEndpointController;
-(id)offlineVideoActionController;
-(id)offlinePlaylistActionController;
-(id)searchHistory;
-(id)URLHandler;
-(id)ssoService;
-(id)FPSGELLogger;
-(id)FPSMeter;
-(id)FPSStatusBar;
-(id)feedbackStateController;
-(id)videoPreviewController;
-(id)storeKitPurchaseController;
-(id)transactionQueueController;
-(id)identityController;
-(id)sharerClasses;
-(id)CSIController;
-(id)CSIFetcherService;
-(id)feedbackCoordinator;
-(id)backgroundURLSessionNotifications;
-(id)inlinePlaybackLayoutCoordinator;
-(id)appInlinePlaybackController;
-(id)pushNotificationController;
-(void)setLogApiaryRequests:(char)arg1 ;
-(void)setServerEnvironment:(int)arg1 ;
-(void)prepareForBackgroundFetch;
-(NSDate *)applicationInitDate;
-(void)setApplicationInitDate:(NSDate *)arg1 ;
-(id)reachabilityController;
-(id)systemNotifications;
-(id)identityProvider;
-(id)userAuthenticator;
-(id)scrollsToTopCoordinator;
-(id)innerTubeCellFactory;
-(id)innerTubeControllerFactory;
-(id)globalConfig;
-(id)innerTubeUIServiceMapper;
-(id)menuItemVisibilityController;
-(id)offlineAdFrequencyCapProvider;
-(id)offlineAdErrorProvider;
-(id)offlineAdProvider;
-(id)offlineTracklistCaptionProvider;
-(id)offlineModeProvider;
-(id)inlineSnapshotProvider;
-(id)offlineAdParser;
-(id)offlineVideoAdPlaylistProvider;
-(id)adPlaylistStorageController;
-(id)userDefaultKeysProvider;
-(id)storagePathsProvider;
-(id)browseResponseDecorator;
-(id)playerResponseDecorator;
-(id)watchNextResponseDecorator;
-(id)adMacroExpandersWithAd:(id)arg1 adBreak:(id)arg2 activeViewData:(id)arg3 adErrorType:(int)arg4 VASTErrorType:(int)arg5 internalError:(id)arg6 ;
-(id)adsPlaybackCoordinatorWithOverlayFactory:(id)arg1 delegate:(id)arg2 parentResponder:(id)arg3 ;
-(id)adVideoPlayerOverlayWithParentResponder:(id)arg1 overlayConfig:(id)arg2 ;
-(id)inlineAdVideoPlayerOverlayWithParentResponder:(id)arg1 overlayConfig:(id)arg2 ;
-(id)fadePlayerOverlayWithPlayerResponse:(id)arg1 parentResponder:(id)arg2 delegate:(id)arg3 ;
-(id)surveyPlayerOverlayWithParentResponder:(id)arg1 adTrackingController:(id)arg2 adsState:(id)arg3 ;
-(id)playbackRouteButtonController;
-(id)initialFormatConstraint;
-(id)acceleratedUIProvider;
-(void)userWillChange;
-(void)userDidChange;
-(void)setGimme:(GIMMe *)arg1 ;
-(id)spaceCastController;
-(id)entitlementRefreshController;
-(void)clearApiaryCaches;
-(void)configureApiaryService:(id)arg1 ;
-(char)isApplicationFullscreen;
-(id)playerViewController;
-(void)dealloc;
-(id)init;
-(id)settings;
-(void)didReceiveMemoryWarning;
-(void)start;
-(void)shutdown;
-(id)playbackCoordinator;
@end

