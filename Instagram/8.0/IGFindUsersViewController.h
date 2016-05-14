/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFindUsersViewDelegate.h>

@class IGFindUsersView, IGFeedStatusView, IGFindUsersViewDataSource, IGPullToRefreshViewManager, NSString;

@interface IGFindUsersViewController : IGViewController <IGPullToRefreshProtocol, IGFeedStatusViewDelegate, IGFindUsersViewDelegate> {

	char _loading;
	IGFindUsersView* _usersView;
	IGFeedStatusView* _feedStatusView;
	IGFindUsersViewDataSource* _findUsersViewDataSource;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;

}

@property (nonatomic,retain) IGFindUsersView * usersView;                                        //@synthesize usersView=_usersView - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                                  //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,retain) IGFindUsersViewDataSource * findUsersViewDataSource;                //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                      //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(IGFeedStatusView *)feedStatusView;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)feedStatusView:(id)arg1 didChangeComputedHeight:(float)arg2 ;
-(float)visibleContentHeight;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(char)allowEmptyStateAndEmptyFeedLoadingIndicator;
-(void)authorizeAndFetchUsers;
-(IGFindUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewDataSource:(IGFindUsersViewDataSource *)arg1 ;
-(void)didAuthorizeWithDataRequest:(id)arg1 ;
-(void)findUsersView:(id)arg1 didTapOnUser:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)updateNavigationRightBarButtonItem;
-(id)newFindUsersView;
-(id)newFindUsersViewDataSource;
-(void)findUsersView:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)findUsersView:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)findUsersView:(id)arg1 scrollViewDidEndDragging:(id)arg2 ;
-(void)findUsersView:(id)arg1 scrollViewDidEndScrolling:(id)arg2 ;
-(void)findUsersView:(id)arg1 didTapOnItemWithMediaID:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)findUsersView:(id)arg1 didFailWithError:(id)arg2 ;
-(IGFindUsersView *)usersView;
-(void)fetchUsers;
-(void)showErrorLoadMessageIfPossible:(id)arg1 ;
-(void)setUsersView:(IGFindUsersView *)arg1 ;
-(void)onCloseTapped:(id)arg1 ;
-(void)findUsersView:(id)arg1 didLoadUsers:(id)arg2 ;
-(void)didFailToAuthorizeWithReason:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

