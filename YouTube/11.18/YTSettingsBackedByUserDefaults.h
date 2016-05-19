/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDate, NSDictionary, NSString;


@protocol YTSettingsBackedByUserDefaults <NSObject>
@property (assign,nonatomic) char alwaysShowFirstSignIn; 
@property (assign,nonatomic) char browseDebug; 
@property (assign,nonatomic) char disableMDXDeviceDiscovery; 
@property (assign,nonatomic) char doNotCount; 
@property (assign,nonatomic) char enableCastSDKLogging; 
@property (assign,nonatomic) char enableMDXAutoplay; 
@property (assign,nonatomic) char enableMDXFiji; 
@property (assign,nonatomic) char enableMDXMemento; 
@property (assign,nonatomic) char enablePivotBar; 
@property (assign,nonatomic) char forceEnableInlineControls; 
@property (assign,nonatomic) char forceEnableInlinePlayback; 
@property (assign,nonatomic) char forceEnableTabloid; 
@property (assign,nonatomic) char fullscreenPlaybackOnExternalScreenEnabled; 
@property (assign,nonatomic) char logAdRequests; 
@property (assign,nonatomic) char openLinksWithChrome; 
@property (assign,nonatomic) char searchHistoryPaused; 
@property (assign,nonatomic) char streamHDOnWiFiOnly; 
@property (assign,nonatomic) char useMDXDevServer; 
@property (assign,nonatomic) char watchHistoryPaused; 
@property (nonatomic,copy) NSArray * customExperimentIDs; 
@property (nonatomic,retain) NSDate * promotedItemLastClosedTime; 
@property (nonatomic,copy) NSDictionary * retentionTrackingParameters; 
@property (assign,nonatomic) int forcedPromoIDRequests; 
@property (nonatomic,copy) NSString * captionLanguageCode; 
@property (nonatomic,copy) NSString * contentRegion; 
@property (nonatomic,copy) NSString * forcedPromoID; 
@property (nonatomic,copy) NSString * innerTubez; 
@property (nonatomic,copy) NSString * vixSnapshot; 
@property (assign,nonatomic) int backgroundability; 
@property (assign,nonatomic) int safeSearch; 
@property (assign,nonatomic) int uploadQuality; 
@property (assign,nonatomic) unsigned suggestionsDroppingType; 
@property (assign,nonatomic) int autonavSettingsState; 
@property (assign,nonatomic) int vixServiceToOverride; 
@property (assign,getter=isFPSStatusBarEnabled,nonatomic) char FPSStatusBarEnabled; 
@property (assign,getter=isNerdStatsEnabled,nonatomic) char nerdStatsEnabled; 
@property (assign,getter=isQoELogRecorderEnabled,nonatomic) char QoELogRecorderEnabled; 
@property (assign,getter=isWelcomeDismissed,nonatomic) char welcomeDismissed; 
@property (nonatomic,copy) NSString * flexGenServerURL; 
@property (nonatomic,copy) NSString * vixUsername; 
@property (assign,getter=areHintsDisabled,nonatomic) char hintsDisabled; 
@property (assign,getter=hasBackgroundOnboardingHintShown,nonatomic) char backgroundOnboardingHintShown; 
@property (assign,getter=isExoPlayerEnabled,nonatomic) char exoPlayerEnabled; 
@property (assign,getter=isForceNavEndpointClick,nonatomic) char forceNavEndpointClick; 
@property (assign,getter=isForcedInnerTubeUploads,nonatomic) char forcedInnerTubeUploads; 
@property (assign,getter=isOfflineConfirmRemoveDisabled,nonatomic) char offlineConfirmRemoveDisabled; 
@property (assign,getter=isPublicCommentLikeConfirmed,nonatomic) char publicCommentLikeConfirmed; 
@property (assign,getter=isQuickActionsEnabled,nonatomic) char quickActionsEnabled; 
@property (assign,getter=isUploadDatabaseWiped,nonatomic) char uploadDatabaseWiped; 
@property (assign,getter=isWebPEnabled,nonatomic) char webPEnabled; 
@property (assign,getter=networkTypeOverride,nonatomic) int networkTypeOverride; 
@required
-(char)openLinksWithChrome;
-(char)isQuickActionsEnabled;
-(char)searchHistoryPaused;
-(char)useMDXDevServer;
-(char)enableMDXFiji;
-(char)disableMDXDeviceDiscovery;
-(char)enableCastSDKLogging;
-(char)enableMDXAutoplay;
-(char)enableMDXMemento;
-(int)backgroundability;
-(void)setBackgroundability:(int)arg1;
-(char)fullscreenPlaybackOnExternalScreenEnabled;
-(void)setFullscreenPlaybackOnExternalScreenEnabled:(char)arg1;
-(char)hasBackgroundOnboardingHintShown;
-(void)setBackgroundOnboardingHintShown:(char)arg1;
-(int)autonavSettingsState;
-(void)setAutonavSettingsState:(int)arg1;
-(char)isNerdStatsEnabled;
-(NSString *)captionLanguageCode;
-(void)setCaptionLanguageCode:(id)arg1;
-(char)browseDebug;
-(char)hasNetworkTypeOverride;
-(int)networkTypeOverride;
-(char)logAdRequests;
-(NSString *)contentRegion;
-(NSString *)vixUsername;
-(NSString *)vixSnapshot;
-(int)vixServiceToOverride;
-(NSString *)innerTubez;
-(char)doNotCount;
-(NSDictionary *)retentionTrackingParameters;
-(void)setRetentionTrackingParameters:(id)arg1;
-(char)isWebPEnabled;
-(char)isPublicCommentLikeConfirmed;
-(void)setPublicCommentLikeConfirmed:(char)arg1;
-(int)uploadQuality;
-(void)setUploadQuality:(int)arg1;
-(char)isForcedInnerTubeUploads;
-(void)setForcedInnerTubeUploads:(char)arg1;
-(char)isUploadDatabaseWiped;
-(void)setUploadDatabaseWiped:(char)arg1;
-(int)safeSearch;
-(void)setSafeSearch:(int)arg1;
-(void)setContentRegion:(id)arg1;
-(void)setLogAdRequests:(char)arg1;
-(void)setAlwaysShowFirstSignIn:(char)arg1;
-(char)isWelcomeDismissed;
-(void)setWelcomeDismissed:(char)arg1;
-(char)isOfflineConfirmRemoveDisabled;
-(void)setOfflineConfirmRemoveDisabled:(char)arg1;
-(void)setOpenLinksWithChrome:(char)arg1;
-(char)streamHDOnWiFiOnly;
-(void)setStreamHDOnWiFiOnly:(char)arg1;
-(char)watchHistoryPaused;
-(void)setWatchHistoryPaused:(char)arg1;
-(void)setSearchHistoryPaused:(char)arg1;
-(char)areHintsDisabled;
-(void)setHintsDisabled:(char)arg1;
-(NSDate *)promotedItemLastClosedTime;
-(void)setPromotedItemLastClosedTime:(id)arg1;
-(void)setDisableMDXDeviceDiscovery:(char)arg1;
-(void)setUseMDXDevServer:(char)arg1;
-(void)setEnableMDXFiji:(char)arg1;
-(void)setEnableMDXAutoplay:(char)arg1;
-(void)setEnableMDXMemento:(char)arg1;
-(void)setEnableCastSDKLogging:(char)arg1;
-(void)setWebPEnabled:(char)arg1;
-(void)setQuickActionsEnabled:(char)arg1;
-(void)setForceEnableInlinePlayback:(char)arg1;
-(void)setForceEnableInlineControls:(char)arg1;
-(void)setSuggestionsDroppingType:(unsigned)arg1;
-(void)setForceEnableTabloid:(char)arg1;
-(void)setNetworkTypeOverride:(int)arg1;
-(void)clearNetworkTypeOverride;
-(void)setCustomExperimentIDs:(id)arg1;
-(void)setForcedPromoID:(id)arg1;
-(void)setForcedPromoIDRequests:(int)arg1;
-(void)setInnerTubez:(id)arg1;
-(void)setVixUsername:(id)arg1;
-(void)setVixSnapshot:(id)arg1;
-(void)setVixServiceToOverride:(int)arg1;
-(void)setExoPlayerEnabled:(char)arg1;
-(void)setBrowseDebug:(char)arg1;
-(void)setFPSStatusBarEnabled:(char)arg1;
-(NSString *)flexGenServerURL;
-(char)enablePivotBar;
-(void)setEnablePivotBar:(char)arg1;
-(void)setQoELogRecorderEnabled:(char)arg1;
-(void)setNerdStatsEnabled:(char)arg1;
-(char)isExoPlayerEnabled;
-(char)forceEnableTabloid;
-(char)forceEnableInlinePlayback;
-(char)forceEnableInlineControls;
-(char)isQoELogRecorderEnabled;
-(unsigned)suggestionsDroppingType;
-(NSArray *)customExperimentIDs;
-(NSString *)forcedPromoID;
-(int)forcedPromoIDRequests;
-(void)setDoNotCount:(char)arg1;
-(char)alwaysShowFirstSignIn;
-(char)isFPSStatusBarEnabled;
-(void)setFlexGenServerURL:(id)arg1;
-(char)isForceNavEndpointClick;
-(void)setForceNavEndpointClick:(char)arg1;

@end

