/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseViewController.h>
#import <YouTube/YTNavigationControllerDelegate.h>
#import <YouTube/YTScreenGraftViewController.h>
#import <YouTube/YTGraftingViewController.h>

@protocol YTAdsPlayerServices, YTDataServices, YTOfflineServices, YTPlayerServices, MDXServices;
@class YTCollectionViewController, NSMutableDictionary, GOOAlertView, YTNotificationSettingsViewController, NSDictionary, NSString, YTINavigationEndpoint, GIMMe;

@interface YTSettingsViewController : YTBaseViewController <YTNavigationControllerDelegate, YTScreenGraftViewController, YTGraftingViewController> {

	YTCollectionViewController* _collectionViewController;
	NSMutableDictionary* _settingsSectionControllers;
	GOOAlertView* _deleteAllOfflineContentAlertView;
	YTNotificationSettingsViewController* _notificationSettingsViewController;
	id _lastOfflineCategoryEntry;
	char _hasOfflineContent;
	NSDictionary* _contentRegions;
	NSString* _settingsToken;
	char _openedSubmenu;
	char _shouldRefreshOnExit;
	id<YTAdsPlayerServices> _adsPlayerServices;
	id<YTDataServices> _dataServices;
	id<YTOfflineServices> _offlineServices;
	id<YTPlayerServices> _playerServices;
	id<MDXServices> _MDXServices;
	YTINavigationEndpoint* _navEndpoint;

}

@property (assign,nonatomic,__weak) GIMMe * gimme; 
@property (nonatomic,readonly) id<YTAdsPlayerServices> adsPlayerServices;              //@synthesize adsPlayerServices=_adsPlayerServices - In the implementation block
@property (nonatomic,readonly) id<YTServices> services; 
@property (nonatomic,readonly) id<YTDataServices> dataServices;                        //@synthesize dataServices=_dataServices - In the implementation block
@property (nonatomic,readonly) id<YTOfflineServices> offlineServices;                  //@synthesize offlineServices=_offlineServices - In the implementation block
@property (nonatomic,readonly) id<YTPlayerServices> playerServices;                    //@synthesize playerServices=_playerServices - In the implementation block
@property (nonatomic,readonly) id<MDXServices> MDXServices;                            //@synthesize MDXServices=_MDXServices - In the implementation block
@property (nonatomic,retain) YTINavigationEndpoint * navEndpoint;                      //@synthesize navEndpoint=_navEndpoint - In the implementation block
@property (assign,nonatomic) char shouldRefreshOnExit;                                 //@synthesize shouldRefreshOnExit=_shouldRefreshOnExit - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)termsOfServiceURL;
+(id)backgroundabilityOptions;
+(id)stringWithBackgroundability:(int)arg1 ;
+(unsigned)displayIndexFor:(int)arg1 ;
+(id)backgroundabilityStrings;
+(id)stringWithSafeSearch:(int)arg1 ;
+(id)stringWithBOOL:(char)arg1 ;
-(id<YTAdsPlayerServices>)adsPlayerServices;
-(id<MDXServices>)MDXServices;
-(void)userDidChange;
-(void)alertViewDidDisappear:(id)arg1 cancelAction:(char)arg2 ;
-(id<YTDataServices>)dataServices;
-(id<YTOfflineServices>)offlineServices;
-(id<YTPlayerServices>)playerServices;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(YTINavigationEndpoint *)navEndpoint;
-(/*^block*/id)clientDataBlock;
-(void)setTitle;
-(void)updateSectionForCategory:(unsigned)arg1 withEntry:(id)arg2 ;
-(void)setSectionControllers;
-(void)checkLocalStorageWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)makeGetSettingsRequest;
-(void)updateUnlimitedSectionWithEntry:(id)arg1 ;
-(void)updateMainSectionWithEntry:(id)arg1 ;
-(void)updateNotificationSectionWithEntry:(id)arg1 ;
-(void)createPrivacySection;
-(void)updateOfflineSectionWithEntry:(id)arg1 ;
-(void)createUploadSection;
-(void)createAboutSection;
-(void)maybeSendRefreshRequest;
-(/*^block*/id)getSettingsResponseBlock;
-(void)handleNotificationSettingsRenderer:(id)arg1 ;
-(unsigned)categoryFromCategoryId:(int)arg1 ;
-(char)showNotificationsMenu;
-(id)booleanRendererFromCollectionRenderer:(id)arg1 withClientSettingItem:(int)arg2 ;
-(id)stringForSafeSearch;
-(char)onSafeSearch;
-(id)availableContentRegions;
-(id)safetyModeSettingsItemWithEntry:(id)arg1 ;
-(char)opensLinksWithChrome;
-(char)onOpenLinksInChrome:(char)arg1 ;
-(char)onStreamHDOnWiFiOnly:(char)arg1 ;
-(char)onScreenPairing;
-(id)stringForContentRegion;
-(char)onContentRegion;
-(void)showWebViewWithURL:(id)arg1 ;
-(void)getHistoryPausedStatus;
-(char)onClearWatchHistory;
-(char)onPauseWatchHistory:(char)arg1 ;
-(char)onClearSearchHistory;
-(char)onPauseSearchHistory:(char)arg1 ;
-(id)rowToOpenURL:(id)arg1 withTitle:(id)arg2 ;
-(char)forcedOfflineMode;
-(id)stringForBackgroundability;
-(char)onBackgroundability;
-(char)onOfflineMode:(char)arg1 ;
-(char)onMaximumOfflineVideoQuality;
-(char)onOnlyDownloadOverWiFi:(char)arg1 ;
-(char)onDeleteAllOfflineContent;
-(void)showSendFeedbackPopup;
-(char)onSendCrashReports:(char)arg1 ;
-(char)onUploadQuality;
-(char)onOnlyUploadOverWiFi:(char)arg1 ;
-(void)setupInteractionLoggingHandlersAtResponder:(id)arg1 ;
-(void)setNavEndpoint:(YTINavigationEndpoint *)arg1 ;
-(char)shouldRefreshOnExit;
-(void)setShouldRefreshOnExit:(char)arg1 ;
-(void)setupWebViewController:(id)arg1 ;
-(void)enumerateSectionControllersWithBlock:(/*^block*/id)arg1 ;
-(void)showSettingsPickerWithNavTitle:(id)arg1 pickerSectionTitle:(id)arg2 items:(id)arg3 selectedItemIndex:(unsigned)arg4 selectBlock:(/*^block*/id)arg5 ;
-(id)supportedOfflineVideoQualities;
-(void)deleteAllOfflineContent;
-(void)navigationControllerWasDismissed;
-(id)initWithServices:(id)arg1 dataServices:(id)arg2 offlineServices:(id)arg3 playerServices:(id)arg4 MDXServices:(id)arg5 adsPlayerServices:(id)arg6 parentResponder:(id)arg7 ;
-(id)settingsSectionControllers;
-(void)showSettingsTextFieldWithNavTitle:(id)arg1 textTitle:(id)arg2 text:(id)arg3 textChangeBlock:(/*^block*/id)arg4 ;
-(void)pushViewController:(id)arg1 ;
-(void)dealloc;
-(id)settings;
-(void)loadView;
-(id)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)dismiss;
-(id)collectionViewController;
-(id<YTServices>)services;
-(void)showHelp;
@end

