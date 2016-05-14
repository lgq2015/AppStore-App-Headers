/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView, UIWindow;

@interface GOOModalWindowViewController : UIViewController {

	NSMutableArray* _modalStack;
	UIView* _dimmingBackgroundView;
	UIWindow* _displacedWindow;
	CGRect _previousBounds;

}

@property (nonatomic,retain) NSMutableArray * modalStack;                   //@synthesize modalStack=_modalStack - In the implementation block
@property (nonatomic,readonly) UIView * dimmingBackgroundView;              //@synthesize dimmingBackgroundView=_dimmingBackgroundView - In the implementation block
@property (nonatomic,retain) UIWindow * displacedWindow;                    //@synthesize displacedWindow=_displacedWindow - In the implementation block
@property (assign,nonatomic) CGRect previousBounds;                         //@synthesize previousBounds=_previousBounds - In the implementation block
-(void)presentModal:(id)arg1 ;
-(void)dismissModal:(id)arg1 withAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)topModal;
-(void)updateStatusBar;
-(void)updateModal:(id)arg1 withFrame:(CGRect)arg2 ;
-(CGRect)dimmingBackgroundViewFrame;
-(NSMutableArray *)modalStack;
-(CGRect)previousBounds;
-(void)setPreviousBounds:(CGRect)arg1 ;
-(id)displacedTopViewController;
-(id)targetViewControllerForInterfaceOrientationQuery:(char)arg1 ;
-(id)displacedFullscreenViewController;
-(UIWindow *)displacedWindow;
-(id)displacedRootViewController;
-(void)setModalStack:(NSMutableArray *)arg1 ;
-(UIView *)dimmingBackgroundView;
-(void)setDisplacedWindow:(UIWindow *)arg1 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(int)preferredInterfaceOrientationForPresentation;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
@end

