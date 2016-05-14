/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UINavigationControllerDelegate, WAPercentDrivenInteractiveTransitioning, OS_dispatch_group, UIViewControllerAnimatedTransitioning;
@class UIScreenEdgePanGestureRecognizer, NSObject, NSString;

@interface WANavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	id<UINavigationControllerDelegate> _originalDelegate;
	int _lastAnimationControllerOperation;
	UIScreenEdgePanGestureRecognizer* _customPopGestureRecognizer;
	id<WAPercentDrivenInteractiveTransitioning> _interactionController;
	NSObject*<OS_dispatch_group> _interactiveTransitionDispatchGroup;
	char _interactiveTransitionInProgress;
	char _customInteractivePopInProgress;
	id<UIViewControllerAnimatedTransitioning> _transitionController;

}

@property (nonatomic,readonly) id<UIViewControllerAnimatedTransitioning> transitionController;              //@synthesize transitionController=_transitionController - In the implementation block
@property (nonatomic,readonly) char customInteractivePopInProgress;                                         //@synthesize customInteractivePopInProgress=_customInteractivePopInProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInteractionController;
+(char)useNavigationBarWithBlur;
+(Class)toolbarClass;
+(void)initialize;
-(void)popToMainViewControllerAnimated:(char)arg1 ;
-(void)handlePopAnimationScreenEdgePanGestureRecognizer:(id)arg1 ;
-(char)beginCustomInteractivePopWithGestureRecognizer:(id)arg1 performBeforePop:(/*^block*/id)arg2 ;
-(char)shouldBeginCustomInteractivePopAnimationWithGestureRecognizer:(id)arg1 ;
-(void)handleInteractiveTransitionGesture:(id)arg1 ;
-(void)didCompleteCustomInteractiveTransition;
-(void)didCancelCustomInteractiveTransition;
-(void)performBlockAfterAnimationBegins:(/*^block*/id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 canUseCustomTransition:(char)arg3 ;
-(id)interactiveScreenEdgePopTransition;
-(void)prepareForInteractivePushWithGestureRecognizer:(id)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)transitionController;
-(char)customInteractivePopInProgress;
-(id)init;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)popViewControllerAnimated:(char)arg1 ;
-(char)shouldAutorotate;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
@end

