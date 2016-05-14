/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumSubscriptionTrayNetworkSourceDelegate.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGMegaphoneItemControllerDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFeedScrollViewListener.h>
#import <Instagram/IGScrollingHeaderDelegate.h>
#import <Instagram/IGBugReportingProtocol.h>

@protocol IGFeedItemConfigurationType, IGFeedConfigurationType, IGFeedMegaphoneProvider;
@class IGListCollectionView, IGFeedNetworkSource, NSString, IGListAdapter, IGUser, IGFeedVideoCellManager, IGCollectionViewVisibility, IGFeedHeartAnimator, IGFeedStatusView, IGPullToRefreshViewManager, IGDogfooderAlertBarPresenter, IGMediaUploadManager, IGFindFriendsItemController, IGListAdapterScrollingContext, IGFeedPreviewingHandler, IGFeedItemLogger, IGListAdapterPerfLogger, IGFeedViewControllerScrollPerfLogger, IGFeedScrollViewAnnouncer, IGFeedFocusCoordinator, IGFeedViewControllerTracker, IGFollowAccountListModel, IGAlbumSubscriptionTrayNetworkSource, IGAlbumSubscriptionTrayModel, IGAlbumItemFullscreenControllerPresenter, IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo;

@interface IGFeedViewController2 : IGViewController <IGAlbumSubscriptionTrayNetworkSourceDelegate, IGAnalyticsRaindropProtocol, IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGMegaphoneItemControllerDelegate, IGPullToRefreshProtocol, IGFeedStatusViewDelegate, IGFeedScrollViewListener, IGScrollingHeaderDelegate, IGBugReportingProtocol> {

	char _hasScrolledToFocusedItem;
	IGListCollectionView* _collectionView;
	IGFeedNetworkSource* _feedNetworkSource;
	id<IGFeedItemConfigurationType> _itemConfiguration;
	id<IGFeedConfigurationType> _configuration;
	NSString* _feedAnalyticsModule;
	IGListAdapter* _listAdapter;
	IGUser* _currentUser;
	IGFeedVideoCellManager* _videoCellManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedHeartAnimator* _heartAnimator;
	IGFeedStatusView* _feedStatusView;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	id<IGFeedMegaphoneProvider> _megaphoneProvider;
	IGDogfooderAlertBarPresenter* _dogfooderAlertBarPresenter;
	IGMediaUploadManager* _uploadManager;
	IGFindFriendsItemController* _findFriendsItemController;
	IGListAdapterScrollingContext* _scrollingContext;
	IGFeedPreviewingHandler* _previewingHandler;
	IGFeedItemLogger* _feedItemLogger;
	IGListAdapterPerfLogger* _adapterPerfLogger;
	IGFeedViewControllerScrollPerfLogger* _scrollPerfLogger;
	IGFeedScrollViewAnnouncer* _feedScrollAnnouncer;
	IGFeedFocusCoordinator* _focusCoordinator;
	IGFeedViewControllerTracker* _impressionTracker;
	IGFollowAccountListModel* _followAccountListModel;
	IGAlbumSubscriptionTrayNetworkSource* _albumNetworkSource;
	IGAlbumSubscriptionTrayModel* _albumModel;
	IGAlbumItemFullscreenControllerPresenter* _albumItemFullscreenControllerPresenter;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;                                                                  //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                                         //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                                                    //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;                                        //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                                          //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                                            //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;                                            //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,readonly) id<IGFeedMegaphoneProvider> megaphoneProvider;                                                //@synthesize megaphoneProvider=_megaphoneProvider - In the implementation block
@property (nonatomic,readonly) IGDogfooderAlertBarPresenter * dogfooderAlertBarPresenter;                                    //@synthesize dogfooderAlertBarPresenter=_dogfooderAlertBarPresenter - In the implementation block
@property (nonatomic,readonly) IGMediaUploadManager * uploadManager;                                                         //@synthesize uploadManager=_uploadManager - In the implementation block
@property (nonatomic,readonly) IGFindFriendsItemController * findFriendsItemController;                                      //@synthesize findFriendsItemController=_findFriendsItemController - In the implementation block
@property (nonatomic,readonly) IGListAdapterScrollingContext * scrollingContext;                                             //@synthesize scrollingContext=_scrollingContext - In the implementation block
@property (nonatomic,readonly) IGFeedPreviewingHandler * previewingHandler;                                                  //@synthesize previewingHandler=_previewingHandler - In the implementation block
@property (nonatomic,readonly) IGFeedItemLogger * feedItemLogger;                                                            //@synthesize feedItemLogger=_feedItemLogger - In the implementation block
@property (nonatomic,readonly) IGListAdapterPerfLogger * adapterPerfLogger;                                                  //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerScrollPerfLogger * scrollPerfLogger;                                      //@synthesize scrollPerfLogger=_scrollPerfLogger - In the implementation block
@property (nonatomic,readonly) IGFeedScrollViewAnnouncer * feedScrollAnnouncer;                                              //@synthesize feedScrollAnnouncer=_feedScrollAnnouncer - In the implementation block
@property (nonatomic,readonly) IGFeedFocusCoordinator * focusCoordinator;                                                    //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char hasScrolledToFocusedItem;                                                                  //@synthesize hasScrolledToFocusedItem=_hasScrolledToFocusedItem - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerTracker * impressionTracker;                                              //@synthesize impressionTracker=_impressionTracker - In the implementation block
@property (nonatomic,retain) IGFollowAccountListModel * followAccountListModel;                                              //@synthesize followAccountListModel=_followAccountListModel - In the implementation block
@property (nonatomic,readonly) IGAlbumSubscriptionTrayNetworkSource * albumNetworkSource;                                    //@synthesize albumNetworkSource=_albumNetworkSource - In the implementation block
@property (nonatomic,retain) IGAlbumSubscriptionTrayModel * albumModel;                                                      //@synthesize albumModel=_albumModel - In the implementation block
@property (nonatomic,retain) IGAlbumItemFullscreenControllerPresenter * albumItemFullscreenControllerPresenter;              //@synthesize albumItemFullscreenControllerPresenter=_albumItemFullscreenControllerPresenter - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                                                      //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> itemConfiguration;                                            //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> configuration;                                                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * feedAnalyticsModule;                                                                   //@synthesize feedAnalyticsModule=_feedAnalyticsModule - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)showErrorMessage:(id)arg1 ;
-(IGAlbumSubscriptionTrayModel *)albumModel;
-(void)setAlbumModel:(IGAlbumSubscriptionTrayModel *)arg1 ;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(IGAlbumItemFullscreenControllerPresenter *)albumItemFullscreenControllerPresenter;
-(void)setAlbumItemFullscreenControllerPresenter:(IGAlbumItemFullscreenControllerPresenter *)arg1 ;
-(IGFeedNetworkSource *)feedNetworkSource;
-(void)albumNetworkSource:(id)arg1 didReceiveModel:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 itemConfiguration:(id)arg2 configuration:(id)arg3 currentUser:(id)arg4 focusCoordinator:(id)arg5 megaphoneProvider:(id)arg6 uploadManager:(id)arg7 dogfooderAlertBarPresenter:(id)arg8 scrollPerfLogger:(id)arg9 ;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(void)setupCollectionViewAndAdapter;
-(IGListAdapter *)listAdapter;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(void)fetchNextPage;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(IGFeedViewControllerScrollPerfLogger *)scrollPerfLogger;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGFeedStatusView *)feedStatusView;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(IGFollowAccountListModel *)followAccountListModel;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(IGFeedHeartAnimator *)heartAnimator;
-(IGListAdapterScrollingContext *)scrollingContext;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)scrollViewWillScrollNearBottom:(id)arg1 ;
-(IGDogfooderAlertBarPresenter *)dogfooderAlertBarPresenter;
-(IGFeedPreviewingHandler *)previewingHandler;
-(void)onApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)prepareFeedNetworkSourceForPreloading;
-(void)refreshDataIfNotFullyLoaded;
-(void)showFakePullToRefresh;
-(void)disableImpressionTrackers;
-(void)layoutCollectionView;
-(void)scrollToFocusedItem;
-(IGFeedScrollViewAnnouncer *)feedScrollAnnouncer;
-(void)onRefreshButton:(id)arg1 ;
-(IGAlbumSubscriptionTrayNetworkSource *)albumNetworkSource;
-(void)updateFullViewImpressionTracker;
-(void)updateImpressionTrackers;
-(void)updatePageCells;
-(IGFeedViewControllerTracker *)impressionTracker;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(char)hasScrolledToFocusedItem;
-(void)setHasScrolledToFocusedItem:(char)arg1 ;
-(IGMediaUploadManager *)uploadManager;
-(id<IGFeedMegaphoneProvider>)megaphoneProvider;
-(char)shouldAddFindFriendsItemController;
-(IGFindFriendsItemController *)findFriendsItemController;
-(IGFeedItemLogger *)feedItemLogger;
-(void)updateFeedStateAnimated:(char)arg1 ;
-(void)setFollowAccountListModel:(IGFollowAccountListModel *)arg1 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(void)didDismissMegaphoneItemController:(id)arg1 ;
-(void)didChangeHeaderAdjustmentAmount:(float)arg1 ;
-(id)bugReportDescription;
-(NSString *)feedAnalyticsModule;
-(void)setFeedAnalyticsModule:(NSString *)arg1 ;
-(IGListAdapterPerfLogger *)adapterPerfLogger;
-(void)updateRefreshButton;
-(void)updateTitle;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id<IGFeedConfigurationType>)configuration;
-(id)refreshButton;
-(IGUser *)currentUser;
-(void)refresh;
@end

