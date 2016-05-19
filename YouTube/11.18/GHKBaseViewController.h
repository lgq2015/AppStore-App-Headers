/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/QTMCollectionViewController.h>
#import <YouTube/QTMCollectionViewModelDelegate.h>
#import <YouTube/GHKWebViewControllerDelegate.h>

@class QTMActivityIndicator, UIBarButtonItem, GHKActionManager, GHKAutocompleteFetcher, GHKCache, GHKConfig, GHKConfigurationsFetcher, GHKConnectivity, GHKSupportContentService, GHKEscalationOptionsFetcher, GHKFlags, GHKMetricsReporter, GHKRecommendationsFetcher, GHKSessionDataManager, GHKUserStates, GOOResources, GHKUIUtils, NSString;

@interface GHKBaseViewController : QTMCollectionViewController <QTMCollectionViewModelDelegate, GHKWebViewControllerDelegate> {

	QTMActivityIndicator* _activityIndicator;
	UIBarButtonItem* _restoreRightButtonItem;
	char _openingHelpContent;
	char _isCurrentUIPortrait;
	char _isActive;
	GHKActionManager* _actionManager;
	GHKAutocompleteFetcher* _autocompleteFetcher;
	GHKCache* _cache;
	GHKConfig* _config;
	GHKConfigurationsFetcher* _configurationsFetcher;
	GHKConnectivity* _connectivity;
	GHKSupportContentService* _contentService;
	GHKEscalationOptionsFetcher* _escalationsFetcher;
	GHKFlags* _flags;
	GHKMetricsReporter* _metricsReporter;
	GHKRecommendationsFetcher* _recommendationsFetcher;
	GHKSessionDataManager* _sessionDataManager;
	GHKUserStates* _userStates;
	GOOResources* _resources;
	GHKUIUtils* _utils;

}

@property (nonatomic,retain) GHKActionManager * actionManager;                                //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,retain) GHKAutocompleteFetcher * autocompleteFetcher;                    //@synthesize autocompleteFetcher=_autocompleteFetcher - In the implementation block
@property (nonatomic,retain) GHKCache * cache;                                                //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) GHKConfig * config;                                              //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) GHKConfigurationsFetcher * configurationsFetcher;                //@synthesize configurationsFetcher=_configurationsFetcher - In the implementation block
@property (nonatomic,retain) GHKConnectivity * connectivity;                                  //@synthesize connectivity=_connectivity - In the implementation block
@property (nonatomic,retain) GHKSupportContentService * contentService;                       //@synthesize contentService=_contentService - In the implementation block
@property (nonatomic,retain) GHKEscalationOptionsFetcher * escalationsFetcher;                //@synthesize escalationsFetcher=_escalationsFetcher - In the implementation block
@property (nonatomic,retain) GHKFlags * flags;                                                //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) GHKMetricsReporter * metricsReporter;                            //@synthesize metricsReporter=_metricsReporter - In the implementation block
@property (nonatomic,retain) GHKRecommendationsFetcher * recommendationsFetcher;              //@synthesize recommendationsFetcher=_recommendationsFetcher - In the implementation block
@property (nonatomic,retain) GHKSessionDataManager * sessionDataManager;                      //@synthesize sessionDataManager=_sessionDataManager - In the implementation block
@property (nonatomic,retain) GHKUserStates * userStates;                                      //@synthesize userStates=_userStates - In the implementation block
@property (nonatomic,retain) GOOResources * resources;                                        //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GHKUIUtils * utils;                                              //@synthesize utils=_utils - In the implementation block
@property (assign,nonatomic) char isActive;                                                   //@synthesize isActive=_isActive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectionRequires;
-(GHKSessionDataManager *)sessionDataManager;
-(GHKMetricsReporter *)metricsReporter;
-(void)setMetricsReporter:(GHKMetricsReporter *)arg1 ;
-(void)setSessionDataManager:(GHKSessionDataManager *)arg1 ;
-(GHKUserStates *)userStates;
-(void)setUserStates:(GHKUserStates *)arg1 ;
-(void)setUtils:(GHKUIUtils *)arg1 ;
-(void)deviceOrientationChanged:(id)arg1 ;
-(GHKSupportContentService *)contentService;
-(void)handleWebViewLinkClicked:(id)arg1 oldURL:(id)arg2 ;
-(void)webViewDeepLinkNavigateToURL:(id)arg1 oldURL:(id)arg2 ;
-(GHKAutocompleteFetcher *)autocompleteFetcher;
-(void)setAutocompleteFetcher:(GHKAutocompleteFetcher *)arg1 ;
-(void)setConfigurationsFetcher:(GHKConfigurationsFetcher *)arg1 ;
-(void)setContentService:(GHKSupportContentService *)arg1 ;
-(void)setEscalationsFetcher:(GHKEscalationOptionsFetcher *)arg1 ;
-(void)setRecommendationsFetcher:(GHKRecommendationsFetcher *)arg1 ;
-(void)addActivityIndicatorToMainView;
-(void)executeCustomAction:(id)arg1 ;
-(void)executeUrlNavigationAction:(id)arg1 ;
-(void)showHelpUnit:(id)arg1 cacheStorageType:(int)arg2 ;
-(void)showHelpContent:(id)arg1 titleOverride:(id)arg2 cacheStorageType:(int)arg3 userState:(unsigned)arg4 ;
-(void)pushHeaderWrappedViewController:(id)arg1 ;
-(void)removeActivityIndicator;
-(void)restoreRightButtonItemFromHeaderActivityIndicator;
-(void)removeRightButtonItemForHeaderActivityIndicator;
-(void)addActivityIndicatorToHeader;
-(void)prefetchRenderedContent:(id)arg1 cacheStorageType:(int)arg2 ;
-(GHKRecommendationsFetcher *)recommendationsFetcher;
-(GHKConfigurationsFetcher *)configurationsFetcher;
-(GHKEscalationOptionsFetcher *)escalationsFetcher;
-(GHKUIUtils *)utils;
-(GHKActionManager *)actionManager;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(char)isActive;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setIsActive:(char)arg1 ;
-(GHKCache *)cache;
-(void)setCache:(GHKCache *)arg1 ;
-(GHKConfig *)config;
-(void)setConfig:(GHKConfig *)arg1 ;
-(void)setConnectivity:(GHKConnectivity *)arg1 ;
-(GHKConnectivity *)connectivity;
-(GOOResources *)resources;
-(void)setResources:(GOOResources *)arg1 ;
-(void)setFlags:(GHKFlags *)arg1 ;
-(GHKFlags *)flags;
-(void)setActionManager:(GHKActionManager *)arg1 ;
@end

