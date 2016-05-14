/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGMainFeedUploadCellContentViewDelegate.h>
#import <Instagram/IGFeedFollowPeopleCellDelegate.h>
#import <Instagram/IGMegaphonePresenterDelegate.h>
#import <Instagram/FBAnimationPerformanceTrackerDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGExploreSearchControllerDelegate.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGSearchOriginControllerProtocol.h>

@protocol IGMegaphonePresenterProtocol;
@class NSArray, IGFeedPhotoPromptView, IGFeedFollowPeopleCell, UIView, IGMainFeedMegaphoneProvider, IGDogfooderAlertBarPresenter, IGSearchViewController, FBAnimationPerformanceTracker, NSString;

@interface IGMainFeedViewController : IGFeedViewController_DEPRECATED <IGMainFeedUploadCellContentViewDelegate, IGFeedFollowPeopleCellDelegate, IGMegaphonePresenterDelegate, FBAnimationPerformanceTrackerDelegate, IGFeedNetworkSourceDelegate, IGExploreSearchControllerDelegate, IGAnalyticsModule, IGSearchOriginControllerProtocol> {

	char _hasFakedPullToRefresh;
	char _findFriendsFooterViewShowing;
	char _isFirstFeedLoad;
	char _showSearchOnViewDidAppear;
	NSArray* _uploadCellViews;
	IGFeedPhotoPromptView* _findFriendsFooterView;
	IGFeedFollowPeopleCell* _feedFollowPeopleCell;
	UIView* _megaphoneView;
	IGMainFeedMegaphoneProvider* _megaphoneProvider;
	IGDogfooderAlertBarPresenter* _dogfooderAlertBarPresenter;
	id<IGMegaphonePresenterProtocol> _megaphonePresenter;
	IGSearchViewController* _searchController;
	FBAnimationPerformanceTracker* _apTracker;

}

@property (nonatomic,retain) NSArray * uploadCellViews;                                                //@synthesize uploadCellViews=_uploadCellViews - In the implementation block
@property (assign,nonatomic) char hasFakedPullToRefresh;                                               //@synthesize hasFakedPullToRefresh=_hasFakedPullToRefresh - In the implementation block
@property (nonatomic,retain) IGFeedPhotoPromptView * findFriendsFooterView;                            //@synthesize findFriendsFooterView=_findFriendsFooterView - In the implementation block
@property (assign,nonatomic) char findFriendsFooterViewShowing;                                        //@synthesize findFriendsFooterViewShowing=_findFriendsFooterViewShowing - In the implementation block
@property (nonatomic,retain) IGFeedFollowPeopleCell * feedFollowPeopleCell;                            //@synthesize feedFollowPeopleCell=_feedFollowPeopleCell - In the implementation block
@property (assign,nonatomic) char isFirstFeedLoad;                                                     //@synthesize isFirstFeedLoad=_isFirstFeedLoad - In the implementation block
@property (nonatomic,retain) UIView * megaphoneView;                                                   //@synthesize megaphoneView=_megaphoneView - In the implementation block
@property (nonatomic,readonly) IGMainFeedMegaphoneProvider * megaphoneProvider;                        //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,readonly) IGDogfooderAlertBarPresenter * dogfooderAlertBarPresenter;              //@synthesize dogfooderAlertBarPresenter=_dogfooderAlertBarPresenter - In the implementation block
@property (nonatomic,retain) id<IGMegaphonePresenterProtocol> megaphonePresenter;                      //@synthesize megaphonePresenter=_megaphonePresenter - In the implementation block
@property (assign,nonatomic) char showSearchOnViewDidAppear;                                           //@synthesize showSearchOnViewDidAppear=_showSearchOnViewDidAppear - In the implementation block
@property (nonatomic,retain) IGSearchViewController * searchController;                                //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) FBAnimationPerformanceTracker * apTracker;                                //@synthesize apTracker=_apTracker - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)reportDurationInMS:(int)arg1 smallDropEvent:(double)arg2 largeDropEvent:(double)arg3 ;
-(void)reportStackTrace:(id)arg1 withSlide:(id)arg2 frameTime:(int)arg3 ;
-(void)setMegaphoneView:(UIView *)arg1 ;
-(UIView *)megaphoneView;
-(char)hasFakedPullToRefresh;
-(void)setHasFakedPullToRefresh:(char)arg1 ;
-(void)navigationControllerWillShowSearch;
-(void)showSearchController;
-(void)handleLoadedContentDidChange;
-(void)searchControllerSearchBarTapped:(id)arg1 ;
-(void)searchControllerCancelButtonTapped:(id)arg1 ;
-(void)searchController:(id)arg1 switchedToViewController:(id)arg2 ;
-(void)searchControllerPeopleIconTapped:(id)arg1 ;
-(void)searchControllerDirectIconTapped:(id)arg1 ;
-(void)resetSearchControllerIfNeeded;
-(void)prepareForPopToRootTransition;
-(FBAnimationPerformanceTracker *)apTracker;
-(void)setApTracker:(FBAnimationPerformanceTracker *)arg1 ;
-(void)onFeedItemHidden:(id)arg1 ;
-(void)feedFollowPeopleCellDidDismissUnit:(id)arg1 ;
-(void)feedFollowPeopleCellDidChangeHeight:(id)arg1 ;
-(void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2 ;
-(void)feedFollowPeopleCellDidTapBanner:(id)arg1 ;
-(void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1 ;
-(IGDogfooderAlertBarPresenter *)dogfooderAlertBarPresenter;
-(IGMainFeedMegaphoneProvider *)megaphoneProvider;
-(char)canHostInlineGallery:(char)arg1 ;
-(void)megaphonePresenterDidDismiss:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 pushViewController:(id)arg2 ;
-(void)megaphonePresenterPopViewController:(id)arg1 ;
-(void)megaphonePresenter:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)megaphonePresenter:(id)arg1 handleURL:(id)arg2 ;
-(void)megaphonePresenterNeedsMegaphoneResize:(id)arg1 ;
-(void)onFeedItemShareStarted:(id)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onFeedItemFailedToUpload:(id)arg1 ;
-(void)uploadCellWantsDeletion:(id)arg1 ;
-(void)updateFeedAfterReloadingforFetchAction:(int)arg1 ;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)handleDidEndScrolling;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(id)bugReportDescription;
-(void)setIsFirstFeedLoad:(char)arg1 ;
-(void)rebuildUploadsHeader;
-(NSArray *)uploadCellViews;
-(void)setUploadCellViews:(NSArray *)arg1 ;
-(void)hideWithTombstoneForFeedItem:(id)arg1 ;
-(void)hideFeedItemLeavingScreen:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(void)updateCurrentMegaphone;
-(void)showFindFriendsViewIfNecessary;
-(void)logFeedLoadedOnce;
-(void)resetFollowAccountList;
-(IGFeedPhotoPromptView *)findFriendsFooterView;
-(void)friendRequestDetected:(id)arg1 ;
-(void)setFindFriendsFooterViewShowing:(char)arg1 ;
-(char)findFriendsFooterViewShowing;
-(char)isFirstFeedLoad;
-(void)setFindFriendsFooterView:(IGFeedPhotoPromptView *)arg1 ;
-(char)showSearchOnViewDidAppear;
-(void)setShowSearchOnViewDidAppear:(char)arg1 ;
-(void)loadFollowAccountListFromResponse:(id)arg1 ;
-(IGFeedFollowPeopleCell *)feedFollowPeopleCell;
-(void)setFeedFollowPeopleCell:(IGFeedFollowPeopleCell *)arg1 ;
-(void)setMegaphoneView:(id)arg1 animated:(char)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 dogfooderAlertBarPresenter:(id)arg2 ;
-(void)findFriendsButtonTapped;
-(id<IGMegaphonePresenterProtocol>)megaphonePresenter;
-(void)setMegaphonePresenter:(id<IGMegaphonePresenterProtocol>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGSearchViewController *)searchController;
-(void)setSearchController:(IGSearchViewController *)arg1 ;
@end

