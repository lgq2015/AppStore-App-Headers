/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIViewControllerContextTransitioning.h>

@class UIViewController, UIView, NSString;

@interface GOOTransitionContext : NSObject <UIViewControllerContextTransitioning> {

	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	UIView* _containerView;
	/*^block*/id _animationCompletionBlock;

}

@property (nonatomic,copy) id animationCompletionBlock;              //@synthesize animationCompletionBlock=_animationCompletionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 ;
-(id)animationCompletionBlock;
-(void)setAnimationCompletionBlock:(id)arg1 ;
-(id)init;
-(id)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(char)isInteractive;
-(char)transitionWasCancelled;
-(void)completeTransition:(char)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(float)arg1 ;
-(int)presentationStyle;
-(id)transitionCoordinator;
-(char)isAnimated;
-(CGAffineTransform)targetTransform;
@end

