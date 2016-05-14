/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WABasicCameraViewController.h>
#import <WhatsApp/WACameraControllerDelegate.h>
#import <WhatsApp/WACameraButtonViewDelegate.h>
#import <WhatsApp/WACameraRollStripViewDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_group, WACameraViewControllerDelegate;
@class WACameraFocusBoxView, NSMutableArray, NSObject, WACameraFlashSelector, UIImageView, WACameraZoomSlider, UIPinchGestureRecognizer, MPVolumeView, WACameraRollStripView, UISwipeGestureRecognizer, WAMediaPickerAsset, NSTimer, WACameraRecordingTimeView, UIView, UIImage, UIButton, WACameraButtonView, WACameraWellView, UILabel, NSString;

@interface WACameraViewController : WABasicCameraViewController <WACameraControllerDelegate, WACameraButtonViewDelegate, WACameraRollStripViewDelegate, WAImageToImageTransitioning, UIGestureRecognizerDelegate> {

	WACameraFocusBoxView* _focusBoxView;
	float _bottomBarHeight;
	NSMutableArray* _mediaItems;
	NSObject*<OS_dispatch_group> _processingDispatchGroup;
	WACameraFlashSelector* _flashSelector;
	UIImageView* _flashBadgeView;
	int _suppressFlashBadgeViewCounter;
	WACameraZoomSlider* _zoomSlider;
	UIPinchGestureRecognizer* _zoomPinchGesture;
	float _zoomFactorBeforePinching;
	int _lastBackCameraFlashMode;
	int _lastFrontCameraFlashMode;
	NSMutableArray* _faceViews;
	char _initialResetFocusBoxShown;
	char _statusBarShouldReallyBeHidden;
	MPVolumeView* _hiddenVolumeView;
	float _originalVolumeLevel;
	int _suppressVolumeTriggerCounter;
	WACameraRollStripView* _cameraRollPicker;
	UISwipeGestureRecognizer* _cameraRollSwipeUpGesture;
	UISwipeGestureRecognizer* _cameraRollSwipeDownGesture;
	int _initialDeviceOrientation;
	WAMediaPickerAsset* _selectedMediaPickerAsset;
	NSTimer* _recordingTimer;
	WACameraRecordingTimeView* _recordingTimeView;
	UIView* _releaseToCancelOverlayView;
	char _needsCheckAudioPermission;
	char _includesCameraRollPicker;
	id<WACameraViewControllerDelegate> _delegate;
	unsigned _initialWellCount;
	unsigned _maximumWellCount;
	UIImage* _initialWellPreviewImage;
	UIButton* _changeCameraButton;
	UIView* _topBarView;
	UIView* _bottomBarView;
	UIView* _bottomBarMainView;
	WACameraButtonView* _cameraButtonView;
	UIButton* _doneButton;
	WACameraWellView* _wellView;
	UILabel* _recordingHintLabel;

}

@property (assign,nonatomic,__weak) id<WACameraViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned initialWellCount;                                                      //@synthesize initialWellCount=_initialWellCount - In the implementation block
@property (assign,nonatomic) unsigned maximumWellCount;                                                      //@synthesize maximumWellCount=_maximumWellCount - In the implementation block
@property (nonatomic,retain) UIImage * initialWellPreviewImage;                                              //@synthesize initialWellPreviewImage=_initialWellPreviewImage - In the implementation block
@property (assign,nonatomic) char includesCameraRollPicker;                                                  //@synthesize includesCameraRollPicker=_includesCameraRollPicker - In the implementation block
@property (assign,nonatomic,__weak) UIButton * changeCameraButton;                                           //@synthesize changeCameraButton=_changeCameraButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * topBarView;                                                     //@synthesize topBarView=_topBarView - In the implementation block
@property (nonatomic,retain) UIView * bottomBarView;                                                         //@synthesize bottomBarView=_bottomBarView - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomBarMainView;                                              //@synthesize bottomBarMainView=_bottomBarMainView - In the implementation block
@property (assign,nonatomic,__weak) WACameraButtonView * cameraButtonView;                                   //@synthesize cameraButtonView=_cameraButtonView - In the implementation block
@property (assign,nonatomic,__weak) UIButton * doneButton;                                                   //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) WACameraWellView * wellView;                                             //@synthesize wellView=_wellView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * recordingHintLabel;                                            //@synthesize recordingHintLabel=_recordingHintLabel - In the implementation block
@property (assign,getter=isReleaseToCancelHintHidden,nonatomic) char releaseToCancelHintHidden; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)useBackCamera;
-(void)wa_applicationDidEnterBackground;
-(void)didCreateCameraController;
-(void)handleTapToFocus:(id)arg1 ;
-(void)cameraControllerSessionDidBeginRunning:(id)arg1 ;
-(char)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)setInitialWellCount:(unsigned)arg1 ;
-(void)setMaximumWellCount:(unsigned)arg1 ;
-(void)setIncludesCameraRollPicker:(char)arg1 ;
-(void)cameraButtonViewDidChangeCancelsOnRelease:(id)arg1 ;
-(void)cameraButtonViewDidReceiveTap:(id)arg1 ;
-(void)cameraButtonViewDidReceiveTouch:(id)arg1 ;
-(void)cameraButtonViewDidBeginLongPress:(id)arg1 ;
-(void)cameraButtonViewDidCancelLongPress:(id)arg1 ;
-(void)cameraButtonViewDidEndLongPress:(id)arg1 ;
-(void)handleAudioRouteChangeNotification:(id)arg1 ;
-(void)applicationDidDismissCallWindow:(id)arg1 ;
-(UIView *)topBarView;
-(UILabel *)recordingHintLabel;
-(UIView *)bottomBarMainView;
-(UIView *)bottomBarView;
-(UIButton *)changeCameraButton;
-(WACameraButtonView *)cameraButtonView;
-(void)updateTotalMediaCount;
-(void)flashModeChanged:(id)arg1 ;
-(void)zoomSliderChanged:(id)arg1 ;
-(void)pinchGestureChanged:(id)arg1 ;
-(WACameraWellView *)wellView;
-(unsigned)initialWellCount;
-(unsigned)maximumWellCount;
-(UIImage *)initialWellPreviewImage;
-(void)wellTapped:(id)arg1 ;
-(char)includesCameraRollPicker;
-(void)updateRecordingHintLabel;
-(void)handleCameraRollSwipeUp:(id)arg1 ;
-(void)handleCameraRollSwipeDown:(id)arg1 ;
-(void)setUpHiddenVolumeView;
-(void)removeHiddenVolumeView;
-(void)setInitialWellPreviewImage:(UIImage *)arg1 ;
-(void)takeStillPhotoWithRepeat:(char)arg1 ;
-(void)doneTakingPhotos;
-(void)updateWithCurrentDeviceOrientationForCapture;
-(void)captureImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearAllFaces;
-(void)showResetFocusBox;
-(void)updateFlashInterfaceForCurrentCameraSettingsWithAnimation:(char)arg1 ;
-(void)updateFlashBadge;
-(char)startVideoRecording;
-(void)willStartVideoRecording;
-(void)stopVideoRecording;
-(void)cancelVideoRecording;
-(void)setReleaseToCancelHintHidden:(char)arg1 ;
-(void)recordingTimerDidFire:(id)arg1 ;
-(void)videoRecordingDidFailWithError:(id)arg1 ;
-(void)didStopVideoRecording;
-(void)videoRecordingDidFinishRecordingToFile:(id)arg1 ;
-(void)videoRecordingDidCancel;
-(void)deviceOrientationDidChangeWithAnimation:(char)arg1 ;
-(void)showFocusBoxOfWidth:(float)arg1 atPoint:(CGPoint)arg2 ;
-(void)volumeDidChange:(id)arg1 ;
-(void)attemptToStartVideoRecording;
-(void)updateCameraButtonAccessibilityValue;
-(void)updateZoomInterfaceForCurrentCameraSettings;
-(void)cameraControllerSessionDidStopRunning:(id)arg1 ;
-(void)cameraControllerDidResetPointOfInterest:(id)arg1 ;
-(void)cameraControllerDidChangePreviewImageSize:(id)arg1 ;
-(void)cameraControllerDidUpdateFaceObjects:(id)arg1 ;
-(void)updateFaces;
-(void)cameraControllerDidChangeFlashActiveState:(id)arg1 ;
-(void)cameraRollStripView:(id)arg1 didSelectMediaPickerAsset:(id)arg2 ;
-(void)cameraRollStripViewDidChangePresentationState:(id)arg1 ;
-(void)changeCamera:(id)arg1 ;
-(char)isReleaseToCancelHintHidden;
-(void)setChangeCameraButton:(UIButton *)arg1 ;
-(void)setTopBarView:(UIView *)arg1 ;
-(void)setBottomBarView:(UIView *)arg1 ;
-(void)setBottomBarMainView:(UIView *)arg1 ;
-(void)setCameraButtonView:(WACameraButtonView *)arg1 ;
-(void)setWellView:(WACameraWellView *)arg1 ;
-(void)setRecordingHintLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<WACameraViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<WACameraViewControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)accessibilityPerformEscape;
-(char)accessibilityPerformMagicTap;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)done:(id)arg1 ;
-(void)setAudioVolume:(float)arg1 ;
@end

