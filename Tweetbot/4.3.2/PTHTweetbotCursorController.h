/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, PTHTweetbotCursor, NSMutableArray, UIView, PTHSearchBar, PTHTweetbotViewControllerStateView, PTHTweetbotRefreshView, PTHTweetbotCursorLoadingOlderView, PTHTweetbotCursorGapCell, PTHTweetbotCursorUnreadItemsView, NSArray, UIControl, NSLayoutConstraint, NSDate, NSString;

@interface PTHTweetbotCursorController : PTHViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	PTHTweetbotCursor* _tweetbotCursor;
	NSMutableArray* _items;
	UIView* _searchBarContainer;
	PTHSearchBar* _searchBar;
	PTHTweetbotViewControllerStateView* _stateView;
	PTHTweetbotRefreshView* _refreshView;
	PTHTweetbotCursorLoadingOlderView* _loadingOlderView;
	PTHTweetbotCursorGapCell* _gapCell;
	char _unreadItemsShowing;
	PTHTweetbotCursorUnreadItemsView* _unreadItemsView;
	NSMutableArray* _transitionBlocks;
	char _transitioning;
	/*^block*/id _endScrollingBlock;
	/*^block*/id _endTrackingBlock;
	char _loadingOlder;
	char _loadingGap;
	char _hasPositioned;
	char _hasPlayedRefreshPull;
	char _manuallyRefreshing;
	char _isSearching;
	NSArray* _searchableItems;
	UIControl* _searchOverlayView;
	NSMutableArray* _searchCleanupItems;
	SCD_Struct_PT3 _searchCleanupPosition;
	long long _searchCleanupSelectedTID;
	UIView* _searchCleanupSeparator;
	NSArray* _searchBarConstraints;
	NSLayoutConstraint* _searchBarTopConstraint;
	NSMutableArray* _freezeArray;
	unsigned _freezeCount;
	NSDate* _freezeDate;
	unsigned _emergencyThawCheckCount;
	SCD_Struct_PT3 _disappearedDisplayPosition;
	char _loadNewerOnAppear;
	char _changingFontHack;
	NSMutableArray* _keyCommands;
	char _didActuallyDisappear;
	char _disableRefresh;
	char _showLoadingFooter;
	char _manuallyScrolling;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long fullyVisibleTID; 
@property (assign,nonatomic) long long selectedTID; 
@property (nonatomic,readonly) SCD_Struct_PT3 displayPosition; 
@property (nonatomic,readonly) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) PTHTweetbotCursor * tweetbotCursor;                             //@synthesize tweetbotCursor=_tweetbotCursor - In the implementation block
@property (nonatomic,readonly) char canUpdate; 
@property (assign,nonatomic) char disableRefresh;                                            //@synthesize disableRefresh=_disableRefresh - In the implementation block
@property (assign,nonatomic) char showLoadingFooter;                                         //@synthesize showLoadingFooter=_showLoadingFooter - In the implementation block
@property (assign,getter=isManuallyScrolling,nonatomic) char manuallyScrolling;              //@synthesize manuallyScrolling=_manuallyScrolling - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,__weak,readonly) NSString * reuseIdentifier; 
@property (nonatomic,__weak,readonly) NSString * searchTitle; 
@property (nonatomic,__weak,readonly) NSString * nothingFoundTitle; 
@property (nonatomic,readonly) char needsCustomSeparators; 
@property (nonatomic,readonly) char needsHeaderSeparator; 
@property (nonatomic,readonly) char needsFooterSeparator; 
+(void)showTableViewAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithTweetbotCursor:(id)arg1 ;
-(void)setTweetbotCursor:(PTHTweetbotCursor *)arg1 ;
-(NSString *)searchTitle;
-(NSString *)nothingFoundTitle;
-(void)pushFreezeUpdates:(id)arg1 ;
-(void)setShowLoadingFooter:(char)arg1 ;
-(long long)selectedTID;
-(void)_cancelSearch;
-(void)setSelectedTID:(long long)arg1 ;
-(void)setDisplayPosition:(SCD_Struct_PT3)arg1 actionName:(id)arg2 ;
-(void)popFreezeUpdates;
-(PTHTweetbotCursor *)tweetbotCursor;
-(void)_didBecomeActive;
-(void)scrollToSyncTID;
-(void)_streamingTransitioned;
-(void)updateUnreadItemsView:(char)arg1 ;
-(void)loadNewer;
-(void)loadNewerDidStart;
-(void)loadNewerDidStop;
-(void)updateScrollingTrackingStatus;
-(char)needsCustomSeparators;
-(char)needsFooterSeparator;
-(void)updateFromLoad;
-(char)needsHeaderSeparator;
-(void)_resetLastRead;
-(void)updateInsets;
-(void)runTransition:(/*^block*/id)arg1 ;
-(void)setContentPosition:(float)arg1 actionName:(id)arg2 ;
-(void)_runTransition:(/*^block*/id)arg1 ;
-(void)_nextTransition;
-(void)runIfNotTracking:(/*^block*/id)arg1 ;
-(void)_emergencyThawCheck;
-(void)loadNewerIfNeeded;
-(void)scrollPageUp;
-(void)scrollPageDown;
-(char)canUpdate;
-(id)viewForSourceObject:(id)arg1 ;
-(char)disableRefresh;
-(void)setDisableRefresh:(char)arg1 ;
-(char)showLoadingFooter;
-(char)isManuallyScrolling;
-(void)setManuallyScrolling:(char)arg1 ;
-(void)_runScrollingBlockIfNeeded;
-(void)_runTrackingBlockIfNeeded;
-(void)saveSyncPosition;
-(void)_scrollViewDidStop:(id)arg1 ;
-(void)setContentPosition:(float)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)fullyVisibleTID;
-(unsigned)rowForTID:(long long)arg1 ;
-(void)updateUnreadItemsViewPosition:(char)arg1 ;
-(void)_updateItems:(id)arg1 ;
-(void)loadOlder;
-(id)createItemsFromCursor;
-(void)didUpdate;
-(char)_updateStatusViewIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_updateGapIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_updateLastIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_addNonFirstItemIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_deleteItemIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_hideHeaderIfNeeded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadGap;
-(float)contentPositionForPosition:(SCD_Struct_PT3)arg1 ;
-(void)setDisplayPosition:(SCD_Struct_PT3)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fontSizeChanged;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)keyCommands;
-(UIEdgeInsets)contentInset;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(UITableView *)tableView;
-(NSString *)reuseIdentifier;
-(Class)cellClass;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)update;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(char)accessibilityScroll:(int)arg1 ;
-(void)scrollToTop;
-(void)willUpdate;
-(void)_loadHeaderView;
-(SCD_Struct_PT3)displayPosition;
-(float)contentPosition;
-(void)scrollToBottom;
-(id)itemAtIndexPath:(id)arg1 ;
@end

