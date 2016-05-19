/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTMultiSizeViewController.h>
#import <YouTube/YTContentViewDelegate.h>
#import <YouTube/YTContentViewControllerProtocol.h>
#import <YouTube/YTMDXScreenContentControllerDelegate.h>
#import <YouTube/YTController.h>
#import <YouTube/YTOfflineVideoControllerObserver.h>

@protocol YTServices, YTDataServices, YTOfflineServices, YTPlayerServices, YTShareServices, MDXServices, YTResponder, YTContentViewControllerDelegate;
@class YTLogoutObserver, YTMDXScreenContentController, MDXWatchViewController, YTContentView, YTWatchViewController, GIMMe, NSString;

@interface YTContentViewController : YTMultiSizeViewController <YTContentViewDelegate, YTContentViewControllerProtocol, YTMDXScreenContentControllerDelegate, YTController, YTOfflineVideoControllerObserver> {

	id<YTServices> _services;
	id<YTDataServices> _dataServices;
	id<YTOfflineServices> _offlineServices;
	id<YTPlayerServices> _playerServices;
	id<YTShareServices> _shareServices;
	id<MDXServices> _MDXServices;
	YTLogoutObserver* _logoutObserver;
	YTMDXScreenContentController* _MDXScreenContentController;
	MDXWatchViewController* _MDXWatchViewController;
	char _isAnimatingWatchViewLayout;
	int _MDXWatchViewLayout;
	YTContentView* _contentView;
	YTWatchViewController* _watchViewController;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;
	id<YTContentViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                             //@synthesize gimme=_gimme - In the implementation block
@property (nonatomic,readonly) YTWatchViewController * watchViewController;                    //@synthesize watchViewController=_watchViewController - In the implementation block
@property (nonatomic,readonly) YTContentView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<YTContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                         //@synthesize parentResponder=_parentResponder - In the implementation block
-(void)handleRemoteControlEvent:(int)arg1 ;
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2 ;
-(void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2 ;
-(void)loadWithModel:(id)arg1 ;
-(void)MDXScreenSessionDidChange:(id)arg1 ;
-(void)screenDidLoadWithTransition:(id)arg1 expansionState:(int)arg2 ;
-(void)onLogout;
-(char)prefersStatusBarHidden_regular;
-(char)prefersStatusBarHidden_compact;
-(id)createWatchViewController;
-(void)expandWatchFromPlayerReferenceContainer:(id)arg1 withAnimation:(char)arg2 ;
-(char)isFullyExpanded;
-(char)isAtLeastHalfExpanded;
-(char)shouldControlStatusBarStyle;
-(void)collapseWatchWithCompletion:(/*^block*/id)arg1 ;
-(void)hideWatch;
-(void)willTransitionFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(void)showWatchWithTransition:(id)arg1 ;
-(void)fetchAndShowWatchWithOfflineModel:(id)arg1 ;
-(void)loadWithModel:(id)arg1 metadata:(id)arg2 ;
-(void)didStartAnimatingFromLayout:(int)arg1 toLayout:(int)arg2 ;
-(void)didAnimateFromLayout:(int)arg1 toLayout:(int)arg2 ;
-(void)watchViewDidPanWithOrigin:(CGPoint)arg1 expansionCoefficient:(float)arg2 ;
-(void)didStartPanning;
-(void)didEndPanning;
-(YTWatchViewController *)watchViewController;
-(void)didStartAnimatingMDXWatchViewFromLayout:(int)arg1 toLayout:(int)arg2 ;
-(void)willAnimateTransitionFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(void)setDelegate:(id<YTContentViewControllerDelegate>)arg1 ;
-(id<YTContentViewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(YTContentView *)contentView;
-(void)viewDidLoad;
@end

