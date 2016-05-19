/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <YouTube/YTBloomTransitionDelegate.h>
#import <YouTube/YTResponseViewController.h>

@protocol YTServices, YTDataServices, YTResponder;
@class YTIChannelListSubMenuRenderer, YTChannelListSubMenuView, NSMutableArray, YTBloomTransition, UIViewController, GIMMe, NSString;

@interface YTChannelListSubMenuViewController : UIViewController <UIScrollViewDelegate, YTBloomTransitionDelegate, YTResponseViewController> {

	YTIChannelListSubMenuRenderer* _model;
	id<YTServices> _services;
	id<YTDataServices> _dataServices;
	YTChannelListSubMenuView* _channelListSubMenuView;
	NSMutableArray* _thumbnailControllers;
	NSMutableArray* _avatarControllers;
	YTBloomTransition* _transition;
	UIViewController* _topViewController;
	char _scrolling;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)loadWithModel:(id)arg1 ;
-(void)bloomTransitionDidCompleteAnimation;
-(id)channelListSubMenuView;
-(void)showHintsForVisibleAvatars;
-(id)channelListSubMenuAvatarViewWithModel:(id)arg1 ;
-(void)didTapChannelsTarget;
-(float)scrollPercentWithScrollView:(id)arg1 ;
-(void)beginTransitionToChannelsTarget;
-(char)scrollToModelMatchingBlock:(/*^block*/id)arg1 animated:(char)arg2 ;
-(void)willMakeRequest:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)topViewController;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)resetThumbnails;
@end

