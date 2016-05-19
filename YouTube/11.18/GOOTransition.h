/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <YouTube/GOOTransition.h>
@class NSArray;


@protocol GOOTransition <UIViewControllerAnimatedTransitioning>
@property (nonatomic,readonly) unsigned supportedTransitionComponents; 
@property (assign,nonatomic) int navigationOperation; 
@property (nonatomic,retain) id transitionContext; 
@property (nonatomic,readonly) NSArray * interactivePushTransitionGestures; 
@property (nonatomic,readonly) NSArray * interactivePopTransitionGestures; 
@required
-(id)initWithTransitionComponents:(unsigned)arg1 navigationOperation:(int)arg2;
-(unsigned)supportedTransitionComponents;
-(int)navigationOperation;
-(void)setNavigationOperation:(int)arg1;
-(NSArray *)interactivePushTransitionGestures;
-(NSArray *)interactivePopTransitionGestures;
-(void)setTransitionContext:(id)arg1;
-(id)transitionContext;

@end


@protocol UIViewControllerInteractiveTransitioning, UIViewControllerContextTransitioning;
@class NSArray, UIView, NSDictionary, GOONavigationController, UIViewController, GOONavigationStyle, GOONavigationHeaderView, NSString;

@interface GOOTransition : UIPercentDrivenInteractiveTransition <GOOTransition> {

	UIView* _sourceWrapperView;
	UIView* _destinationWrapperView;
	NSDictionary* _transitioningViewStatesMap;
	char _useWrapperViews;
	char _shouldReparentTransitioningViewsOnCompletion;
	char _usePercentDrivenInteractiveTransition;
	unsigned _supportedTransitionComponents;
	id _transitionContext;
	int _navigationOperation;
	id<UIViewControllerInteractiveTransitioning> _associatedInteractiveTransition;
	id<UIViewControllerContextTransitioning> _context;
	GOONavigationController* _navigationController;
	UIViewController* _sourceViewController;
	UIViewController* _destinationViewController;
	GOONavigationStyle* _sourceStyle;
	GOONavigationStyle* _destinationStyle;
	UIView* _containerView;
	UIView* _sourceView;
	UIView* _destinationView;
	GOONavigationHeaderView* _sourceHeaderView;
	GOONavigationHeaderView* _destinationHeaderView;
	UIView* _sourceWrapperHeaderView;
	UIView* _destinationWrapperHeaderView;
	NSArray* _transitioningViewStates;

}

@property (assign,nonatomic) char useWrapperViews;                                                                      //@synthesize useWrapperViews=_useWrapperViews - In the implementation block
@property (nonatomic,readonly) char isPop; 
@property (nonatomic,readonly) char isPush; 
@property (nonatomic,readonly) char isPresenting; 
@property (nonatomic,readonly) char isDismissing; 
@property (assign,nonatomic) char shouldReparentTransitioningViewsOnCompletion;                                         //@synthesize shouldReparentTransitioningViewsOnCompletion=_shouldReparentTransitioningViewsOnCompletion - In the implementation block
@property (assign,nonatomic) char usePercentDrivenInteractiveTransition;                                                //@synthesize usePercentDrivenInteractiveTransition=_usePercentDrivenInteractiveTransition - In the implementation block
@property (nonatomic,retain) id<UIViewControllerInteractiveTransitioning> associatedInteractiveTransition;              //@synthesize associatedInteractiveTransition=_associatedInteractiveTransition - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) GOONavigationController * navigationController;                                          //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * sourceViewController;                                                 //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * destinationViewController;                                            //@synthesize destinationViewController=_destinationViewController - In the implementation block
@property (nonatomic,readonly) GOONavigationStyle * sourceStyle;                                                        //@synthesize sourceStyle=_sourceStyle - In the implementation block
@property (nonatomic,readonly) GOONavigationStyle * destinationStyle;                                                   //@synthesize destinationStyle=_destinationStyle - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                                                                     //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,readonly) UIView * destinationView;                                                                //@synthesize destinationView=_destinationView - In the implementation block
@property (nonatomic,readonly) GOONavigationHeaderView * sourceHeaderView;                                              //@synthesize sourceHeaderView=_sourceHeaderView - In the implementation block
@property (nonatomic,readonly) GOONavigationHeaderView * destinationHeaderView;                                         //@synthesize destinationHeaderView=_destinationHeaderView - In the implementation block
@property (nonatomic,readonly) UIView * sourceWrapperView;                                                              //@synthesize sourceWrapperView=_sourceWrapperView - In the implementation block
@property (nonatomic,readonly) UIView * destinationWrapperView;                                                         //@synthesize destinationWrapperView=_destinationWrapperView - In the implementation block
@property (nonatomic,readonly) UIView * sourceWrapperHeaderView;                                                        //@synthesize sourceWrapperHeaderView=_sourceWrapperHeaderView - In the implementation block
@property (nonatomic,readonly) UIView * destinationWrapperHeaderView;                                                   //@synthesize destinationWrapperHeaderView=_destinationWrapperHeaderView - In the implementation block
@property (nonatomic,readonly) NSArray * transitioningViewStates;                                                       //@synthesize transitioningViewStates=_transitioningViewStates - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned supportedTransitionComponents;                                                  //@synthesize supportedTransitionComponents=_supportedTransitionComponents - In the implementation block
@property (assign,nonatomic) int navigationOperation;                                                                   //@synthesize navigationOperation=_navigationOperation - In the implementation block
@property (nonatomic,retain) id transitionContext;                                                                      //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSArray * interactivePushTransitionGestures; 
@property (nonatomic,readonly) NSArray * interactivePopTransitionGestures; 
-(char)isDismissing;
-(char)isPush;
-(void)setConveniencePropertiesFromContext:(id)arg1 ;
-(void)internalPrepareTransition;
-(void)performTransition;
-(void)performTransitioningViewsTransition;
-(void)notifyTransitioningViewsPerformTransition;
-(id<UIViewControllerInteractiveTransitioning>)associatedInteractiveTransition;
-(void)transitionDidComplete:(char)arg1 ;
-(char)isHeaderTransition;
-(void)layoutDestinationHeaderView;
-(void)reparentOrRemoveIncomingTransitioningViews;
-(void)notifyDidRemoveTransitioningViews;
-(void)notifyDidAddTransitioningViews;
-(void)notifyTransitioningViewsTransitionDidComplete:(char)arg1 ;
-(void)notifyTransitioningViewControllersDidEnd;
-(void)clearConvenienceProperties;
-(void)layoutDestinationViews;
-(void)addDestinationSubviews;
-(char)useWrapperViews;
-(void)wrapTransitionViews;
-(void)unwrapTransitionViews;
-(void)removeSourceSubviews;
-(void)removeDestinationSubviews;
-(id)filterViewKeys:(id)arg1 ;
-(void)layoutTransitioningViews;
-(char)shouldReparentTransitioningViewsWithState:(id)arg1 ;
-(void)prepareTransition;
-(char)isViewTransition;
-(void)layoutDestinationView;
-(CGRect)destinationViewFinalFrame;
-(CGRect)destinationHeaderFrontFinalBounds;
-(void)transitioningView:(id)arg1 performTransitionWithState:(id)arg2 containerCenter:(CGPoint)arg3 containerBounds:(CGRect)arg4 ;
-(id)wrapperViewWithView:(id)arg1 ;
-(void)wrapperView:(id)arg1 unwrapView:(id)arg2 ;
-(char)shouldReparentTransitioningViewsOnCompletion;
-(char)shouldFilterTransitioningViewKey:(id)arg1 ;
-(id)navigationControllerFromViewController:(id)arg1 ;
-(void)notifyTransitioningViewControllersWillBegin;
-(void)loadTransitioningViewStates;
-(void)reparentOutgoingTransitioningViews;
-(void)prepareTransitioningViews;
-(void)notifyTransitioningViewsPrepareTransition;
-(void)notifyWillAddTransitioningViews;
-(void)notifyWillRemoveTransitioningViews;
-(id)transitioningObjects;
-(id)initWithTransitionComponents:(unsigned)arg1 navigationOperation:(int)arg2 ;
-(unsigned)supportedTransitionComponents;
-(int)navigationOperation;
-(void)setNavigationOperation:(int)arg1 ;
-(NSArray *)interactivePushTransitionGestures;
-(NSArray *)interactivePopTransitionGestures;
-(char)isPop;
-(id)transitioningViewStateForKey:(id)arg1 ;
-(void)setUseWrapperViews:(char)arg1 ;
-(void)setShouldReparentTransitioningViewsOnCompletion:(char)arg1 ;
-(char)usePercentDrivenInteractiveTransition;
-(void)setUsePercentDrivenInteractiveTransition:(char)arg1 ;
-(void)setAssociatedInteractiveTransition:(id<UIViewControllerInteractiveTransitioning>)arg1 ;
-(GOONavigationStyle *)sourceStyle;
-(GOONavigationStyle *)destinationStyle;
-(UIView *)destinationView;
-(GOONavigationHeaderView *)sourceHeaderView;
-(GOONavigationHeaderView *)destinationHeaderView;
-(UIView *)sourceWrapperView;
-(UIView *)destinationWrapperView;
-(UIView *)sourceWrapperHeaderView;
-(UIView *)destinationWrapperHeaderView;
-(NSArray *)transitioningViewStates;
-(id)init;
-(UIView *)containerView;
-(void)setTransitionContext:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id)transitionContext;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(float)percentComplete;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(float)arg1 ;
-(float)duration;
-(id<UIViewControllerContextTransitioning>)context;
-(GOONavigationController *)navigationController;
-(UIView *)sourceView;
-(UIViewController *)sourceViewController;
-(int)completionCurve;
-(float)completionSpeed;
-(UIViewController *)destinationViewController;
-(char)isPresenting;
@end

