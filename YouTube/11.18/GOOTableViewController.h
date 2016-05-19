/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIViewController.h>
#import <YouTube/NISnapshotRotationDelegate.h>
#import <YouTube/NIMutableTableViewModelDelegate.h>
#import <YouTube/GOONavigationDependency.h>
#import <YouTube/GOOUINavigationDependency.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <YouTube/GOOTableViewDismissDelegate.h>
#import <YouTube/GOOScrollViewKeyboardManagerDelegate.h>

@class UIScrollView, GOOUINavigationController, UIView, NISnapshotRotation, GOOTableView, NITableViewModel, GOOTableCellStyle, GOOTableViewAnimations, NSString;

@interface GOOTableViewController : UIViewController <NISnapshotRotationDelegate, NIMutableTableViewModelDelegate, GOONavigationDependency, GOOUINavigationDependency, UITableViewDataSource, UITableViewDelegate, GOOTableViewDismissDelegate, GOOScrollViewKeyboardManagerDelegate> {

	int _tableViewStyle;
	NISnapshotRotation* _snapshotRotation;
	char _isViewVisible;
	char _clearsSelectionOnViewWillAppear;
	char _scrollViewUpdatesHeaderShadow;
	char _respondsToKeyboardEvents;
	GOOTableView* _tableView;
	NITableViewModel* _model;
	float _headerShadowOffset;
	GOOTableCellStyle* _cellStyle;
	GOOTableViewAnimations* _tableViewAnimations;
	int _statusBarStyle;

}

@property (nonatomic,retain) GOOTableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NITableViewModel * model;                                          //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char clearsSelectionOnViewWillAppear;                              //@synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear - In the implementation block
@property (assign,nonatomic) char usesDarkTheme; 
@property (assign,nonatomic) char scrollViewUpdatesHeaderShadow;                                //@synthesize scrollViewUpdatesHeaderShadow=_scrollViewUpdatesHeaderShadow - In the implementation block
@property (assign,nonatomic) float headerShadowOffset;                                          //@synthesize headerShadowOffset=_headerShadowOffset - In the implementation block
@property (nonatomic,retain) GOOTableCellStyle * cellStyle;                                     //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,retain) GOOTableViewAnimations * tableViewAnimations;                      //@synthesize tableViewAnimations=_tableViewAnimations - In the implementation block
@property (assign,nonatomic) char respondsToKeyboardEvents;                                     //@synthesize respondsToKeyboardEvents=_respondsToKeyboardEvents - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                                //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * navigationPrimaryScrollView; 
@property (nonatomic,retain) GOOUINavigationController * goo_navigationController; 
@property (nonatomic,retain) UIView * headerView; 
-(UIScrollView *)navigationPrimaryScrollView;
-(char)tableView:(id)arg1 canSwipeToDismissAtSection:(int)arg2 ;
-(void)tableView:(id)arg1 willBeginSwipeToDismissAtSection:(int)arg2 ;
-(void)tableView:(id)arg1 didEndSwipeToDismissAtSection:(int)arg2 ;
-(void)tableView:(id)arg1 didCancelSwipeToDismissAtSection:(int)arg2 ;
-(void)loadTableView;
-(void)setNavigationBarBottomShadowHidden:(char)arg1 animated:(char)arg2 ;
-(id)tableViewModel:(id)arg1 cellForTableView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4 ;
-(id)containerViewForSnapshotRotation:(id)arg1 ;
-(id)rotatingViewForSnapshotRotation:(id)arg1 ;
-(UIEdgeInsets)fixedInsetsForSnapshotRotation:(id)arg1 ;
-(void)setRespondsToKeyboardEvents:(char)arg1 ;
-(char)scrollViewUpdatesHeaderShadow;
-(void)setScrollViewUpdatesHeaderShadow:(char)arg1 ;
-(float)headerShadowOffset;
-(void)setHeaderShadowOffset:(float)arg1 ;
-(GOOTableViewAnimations *)tableViewAnimations;
-(void)setTableViewAnimations:(GOOTableViewAnimations *)arg1 ;
-(char)respondsToKeyboardEvents;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(void)setStatusBarStyle:(int)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(GOOTableView *)tableView;
-(void)setTableView:(GOOTableView *)arg1 ;
-(NITableViewModel *)model;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(char)arg1 ;
-(char)clearsSelectionOnViewWillAppear;
-(void)setModel:(NITableViewModel *)arg1 ;
-(char)usesDarkTheme;
-(void)setUsesDarkTheme:(char)arg1 ;
-(GOOTableCellStyle *)cellStyle;
-(void)setCellStyle:(GOOTableCellStyle *)arg1 ;
@end

