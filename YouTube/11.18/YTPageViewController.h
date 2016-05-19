/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTMultiSizeViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <YouTube/YTPageViewDelegate.h>

@class YTPageView, NSHashTable, NSArray, UIViewController, NSString;

@interface YTPageViewController : YTMultiSizeViewController <UIScrollViewDelegate, YTPageViewDelegate> {

	YTPageView* _scrollView;
	NSHashTable* _observers;
	char _animateToActiveViewController;
	char _activeViewControllerNeedsLayout;
	int _pageAnimationCounter;
	float _pageAnimationPagePositionStart;
	CGRect _lastViewFrame;
	NSArray* _viewControllers;
	UIViewController* _activeViewController;

}

@property (nonatomic,copy) NSArray * viewControllers;                              //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;              //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,readonly) float currentPagePosition; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)currentPagePosition;
-(void)pageViewWillChangeFrame:(CGRect)arg1 ;
-(void)processPendingActiveViewController;
-(void)pruneViewControllers;
-(char)shouldLoadPageAtIndex:(int)arg1 ;
-(CGRect)frameForIndex:(unsigned)arg1 ;
-(void)resetViewControllers;
-(float)pagePositionAtOffset:(CGPoint)arg1 ;
-(void)didEndScrolling;
-(void)setAnimateToActiveViewController:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)loadView;
-(void)removeObserver:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(int)currentPageIndex;
-(UIViewController *)activeViewController;
-(void)setActiveViewController:(UIViewController *)arg1 ;
-(void)removeAllObservers;
@end

