/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UINavigationControllerDelegate;
@class NSMutableArray, GOOTransitionController, GOONavigationStyle, NSString;

@interface GOONavigationController : UINavigationController <UINavigationControllerDelegate> {

	id<UINavigationControllerDelegate> _externalDelegate;
	NSMutableArray* _childControllers;
	NSMutableArray* _pushingChildControllers;
	NSMutableArray* _poppingChildControllers;
	char _transitioning;
	char _transitioningWillShowCalled;
	char _transitioningDidShowCalled;
	id _operationContext;
	char _animatorIsGOOTansition;
	char _processingTransitionQueue;
	NSMutableArray* _transitionQueue;
	/*^block*/id _deferedAncillaryLogic;
	char _shouldSpecialCaseGOOHeaderViewController;
	GOOTransitionController* _transitionController;
	GOONavigationStyle* _navigationStyle;

}

@property (nonatomic,retain) GOOTransitionController * transitionController;              //@synthesize transitionController=_transitionController - In the implementation block
@property (nonatomic,retain) GOONavigationStyle * navigationStyle;                        //@synthesize navigationStyle=_navigationStyle - In the implementation block
@property (assign,nonatomic) char shouldSpecialCaseGOOHeaderViewController;               //@synthesize shouldSpecialCaseGOOHeaderViewController=_shouldSpecialCaseGOOHeaderViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GOONavigationStyle *)navigationStyle;
-(id)initWithRootViewController:(id)arg1 navigationStyle:(id)arg2 ;
-(void)setNavigationStyle:(GOONavigationStyle *)arg1 ;
-(void)setShouldAdjustHeaderForScrollViewChanges:(char)arg1 ;
-(id)currentChildController;
-(void)executeDeferedAncillaryLogic;
-(char)shouldQueueTransition;
-(void)queueTransitionForSelector:(SEL)arg1 withObjectArg:(id)arg2 boolArg:(char)arg3 ;
-(char)shouldSpecialCaseGOOHeaderViewController;
-(void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 operation:(int)arg3 coordinator:(id)arg4 animated:(char)arg5 ;
-(void)queueTransitionForSelector:(SEL)arg1 withBoolArg:(char)arg2 ;
-(id)childControllerForViewController:(id)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 operationContext:(id)arg3 fromViewController:(id)arg4 toViewController:(id)arg5 ;
-(id)navigationController:(id)arg1 headerAnimationControllerForOperation:(int)arg2 operationContext:(id)arg3 fromViewController:(id)arg4 toViewController:(id)arg5 ;
-(void)queueTransitionForSelector:(SEL)arg1 withObjectArg:(id)arg2 boolArg:(char)arg3 objectArg:(id)arg4 ;
-(void)queueTransitionForSelector:(SEL)arg1 withBoolArg:(char)arg2 objectArg:(id)arg3 ;
-(void)invokeNextTransitionIfNeeded;
-(id)invocationForSelector:(SEL)arg1 ;
-(void)queueTransitionInvocation:(id)arg1 ;
-(void)setTransitionController:(GOOTransitionController *)arg1 ;
-(void)setNeedsNavigationStyleUpdate;
-(void)setNeedsPrimaryScrollViewUpdate;
-(void)setNeedsSecondaryScrollViewsUpdate;
-(void)setNeedsBannerViewUpdate;
-(void)pushViewController:(id)arg1 animated:(char)arg2 operationContext:(id)arg3 ;
-(id)popViewControllerAnimated:(char)arg1 operationContext:(id)arg2 ;
-(GOOTransitionController *)transitionController;
-(void)setShouldSpecialCaseGOOHeaderViewController:(char)arg1 ;
-(void)reparentHeaderForViewControllerIfNeeded:(id)arg1 ;
-(id)headerViewForViewController:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)navigationBar;
-(char)isNavigationBarHidden;
-(id)popViewControllerAnimated:(char)arg1 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(char)disablesAutomaticKeyboardDismissal;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)setViewControllers:(id)arg1 ;
-(void)setNavigationBarHidden:(char)arg1 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(char)accessibilityPerformEscape;
@end

