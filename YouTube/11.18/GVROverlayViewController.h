/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <YouTube/GVROverlayViewDelegate.h>
#import <YouTube/GVRTransitionViewDelegate.h>

@protocol GVROverlayViewControllerDelegate;
@class UIView, GVROverlayView, GVRTransitionView, GVROrientationHelper, GVRIdleManagementHelper, NSString;

@interface GVROverlayViewController : UIViewController <GVROverlayViewDelegate, GVRTransitionViewDelegate> {

	char _vrModeEnabled;
	char _vrModeLocked;
	char _vrViewHidden;
	char _hidesTransitionView;
	char _isApplicationInactive;
	char _adjustsScreenBrightness;
	char _didChangeDeviceOrientation;
	UIView* _glView;
	id<GVROverlayViewControllerDelegate> _delegate;
	GVROverlayView* _overlayView;
	GVRTransitionView* _transitionView;
	GVROrientationHelper* _orientationHelper;
	float _overlayViewRotationAngle;
	GVRIdleManagementHelper* _idleHelper;
	float _initialScreenBrightness;
	double _transitionBeginTime;

}

@property (assign,nonatomic,__weak) UIView * glView;                                            //@synthesize glView=_glView - In the implementation block
@property (assign,nonatomic,__weak) id<GVROverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GVROverlayView * overlayView;                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) GVRTransitionView * transitionView;                                //@synthesize transitionView=_transitionView - In the implementation block
@property (nonatomic,retain) GVROrientationHelper * orientationHelper;                          //@synthesize orientationHelper=_orientationHelper - In the implementation block
@property (assign,nonatomic) char vrModeEnabled;                                                //@synthesize vrModeEnabled=_vrModeEnabled - In the implementation block
@property (assign,nonatomic) char vrModeLocked;                                                 //@synthesize vrModeLocked=_vrModeLocked - In the implementation block
@property (assign,nonatomic) char vrViewHidden;                                                 //@synthesize vrViewHidden=_vrViewHidden - In the implementation block
@property (assign,nonatomic) char hidesTransitionView;                                          //@synthesize hidesTransitionView=_hidesTransitionView - In the implementation block
@property (assign,nonatomic) float overlayViewRotationAngle;                                    //@synthesize overlayViewRotationAngle=_overlayViewRotationAngle - In the implementation block
@property (assign,nonatomic) char isApplicationInactive;                                        //@synthesize isApplicationInactive=_isApplicationInactive - In the implementation block
@property (assign,nonatomic) char adjustsScreenBrightness;                                      //@synthesize adjustsScreenBrightness=_adjustsScreenBrightness - In the implementation block
@property (assign,nonatomic) char didChangeDeviceOrientation;                                   //@synthesize didChangeDeviceOrientation=_didChangeDeviceOrientation - In the implementation block
@property (nonatomic,retain) GVRIdleManagementHelper * idleHelper;                              //@synthesize idleHelper=_idleHelper - In the implementation block
@property (assign,nonatomic) float initialScreenBrightness;                                     //@synthesize initialScreenBrightness=_initialScreenBrightness - In the implementation block
@property (assign,nonatomic) double transitionBeginTime;                                        //@synthesize transitionBeginTime=_transitionBeginTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapBackButton;
-(void)setHidesTransitionView:(char)arg1 ;
-(void)setVrModeEnabled:(char)arg1 ;
-(char)vrModeEnabled;
-(UIView *)glView;
-(void)setGlView:(UIView *)arg1 ;
-(char)hidesTransitionView;
-(void)pauseRenderer:(char)arg1 ;
-(void)didTapCardboardButton;
-(void)didTapSwitchViewerButton;
-(void)showSettingsDialog;
-(void)didChangeScreenBrightness:(id)arg1 ;
-(void)rotateOverlayViewAnimated:(char)arg1 ;
-(void)setTransitionBeginTime:(double)arg1 ;
-(void)updateOverlayViewControls;
-(double)transitionBeginTime;
-(void)setVrModeLocked:(char)arg1 ;
-(GVROrientationHelper *)orientationHelper;
-(void)setTransitionView:(GVRTransitionView *)arg1 ;
-(void)setOrientationHelper:(GVROrientationHelper *)arg1 ;
-(char)vrModeLocked;
-(char)vrViewHidden;
-(void)setVrViewHidden:(char)arg1 ;
-(float)overlayViewRotationAngle;
-(void)setOverlayViewRotationAngle:(float)arg1 ;
-(char)isApplicationInactive;
-(void)setIsApplicationInactive:(char)arg1 ;
-(char)adjustsScreenBrightness;
-(void)setAdjustsScreenBrightness:(char)arg1 ;
-(char)didChangeDeviceOrientation;
-(void)setDidChangeDeviceOrientation:(char)arg1 ;
-(GVRIdleManagementHelper *)idleHelper;
-(void)setIdleHelper:(GVRIdleManagementHelper *)arg1 ;
-(float)initialScreenBrightness;
-(void)setInitialScreenBrightness:(float)arg1 ;
-(void)setDelegate:(id<GVROverlayViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GVROverlayViewControllerDelegate>)delegate;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(GVRTransitionView *)transitionView;
-(void)setOverlayView:(GVROverlayView *)arg1 ;
-(GVROverlayView *)overlayView;
@end

