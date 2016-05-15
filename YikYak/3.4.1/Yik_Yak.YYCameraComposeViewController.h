/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <UIKit/UIViewController.h>
#import <Yik Yak/Yik_Yak.YYComposeViewDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class _TtC7Yik_Yak13CameraManager, CMMotionManager, UIImagePickerController, UIView, UIImageView, UIImage, _TtC7Yik_Yak17YYSendYakResponse, NSString, UIButton, NSLayoutConstraint, _TtC7Yik_Yak13YYComposeView, DACircularProgressView, UILabel, _TtC7Yik_Yak18CameraComposeModel, _TtC7Yik_Yak18YYComposeViewModel, UIProgressView;

@interface Yik_Yak.YYCameraComposeViewController : UIViewController <Yik_Yak.YYComposeViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, NSURLSessionTaskDelegate> {

	 cameraManager;
	 motionManager;
	 imagePickerController;
	 orientationLast;
	 previewViewContainer;
	 previewImageView;
	 capturedImage;
	 flashOn;
	 focusView;
	 currentZoomLevel;
	 sendYakResponse;
	 yakText;
	 completion;
	 cameraView;
	 blackBGView;
	 flashView;
	 captureButton;
	 checkButton;
	 reshootButton;
	 cancelButton;
	 flashButton;
	 saveButton;
	 rollButton;
	 topShutterView;
	 bottomShutterView;
	 topShutterConstraint;
	 bottomShutterConstraint;
	 yakComposeView;
	 yakComposeViewBottomConstraint;
	 uploadCircularProgressView;
	 uploadLabel;
	 delegate;
	 cameraComposeModel.storage;
	 cameraComposeYakViewModel.storage;
	 uploadProgressView.storage;

}

@property (retain,nonatomic) _TtC7Yik_Yak13CameraManager * cameraManager; 
@property (retain,nonatomic) CMMotionManager * motionManager; 
@property (readonly,nonatomic) UIImagePickerController * imagePickerController; 
@property (retain,nonatomic) UIView * previewViewContainer; 
@property (retain,nonatomic) UIImageView * previewImageView; 
@property (retain,nonatomic) UIImage * capturedImage; 
@property (assign,nonatomic) char flashOn; 
@property (readonly,nonatomic) UIView * focusView; 
@property (assign,nonatomic) float currentZoomLevel; 
@property (retain,nonatomic) _TtC7Yik_Yak17YYSendYakResponse * sendYakResponse; 
@property (copy,nonatomic) NSString * yakText; 
@property (copy,nonatomic) id completion; 
@property (assign,__weak,nonatomic) UIView * cameraView; 
@property (assign,__weak,nonatomic) UIView * blackBGView; 
@property (assign,__weak,nonatomic) UIView * flashView; 
@property (assign,__weak,nonatomic) UIButton * captureButton; 
@property (assign,__weak,nonatomic) UIButton * checkButton; 
@property (assign,__weak,nonatomic) UIButton * reshootButton; 
@property (assign,__weak,nonatomic) UIButton * cancelButton; 
@property (assign,__weak,nonatomic) UIButton * flashButton; 
@property (assign,__weak,nonatomic) UIButton * saveButton; 
@property (assign,__weak,nonatomic) UIButton * rollButton; 
@property (assign,__weak,nonatomic) UIView * topShutterView; 
@property (assign,__weak,nonatomic) UIView * bottomShutterView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * topShutterConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * bottomShutterConstraint; 
@property (assign,__weak,nonatomic) _TtC7Yik_Yak13YYComposeView * yakComposeView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * yakComposeViewBottomConstraint; 
@property (assign,__weak,nonatomic) DACircularProgressView * uploadCircularProgressView; 
@property (assign,__weak,nonatomic) UILabel * uploadLabel; 
@property (retain,nonatomic) id<_TtP7Yik_Yak37YYCameraComposeViewControllerDelegate_> delegate; 
@property (retain,nonatomic) _TtC7Yik_Yak18CameraComposeModel * cameraComposeModel; 
@property (retain,nonatomic) _TtC7Yik_Yak18YYComposeViewModel * cameraComposeYakViewModel; 
@property (retain,nonatomic) UIProgressView * uploadProgressView; 
-(void)composeViewShowHandleCreation:(id)arg1 ;
-(char)composeViewShouldBeginComposing:(id)arg1 ;
-(void)composeViewWillOpen:(id)arg1 ;
-(void)composeViewDidOpen:(id)arg1 ;
-(void)composeViewWillClose:(id)arg1 ;
-(void)composeViewDidClose:(id)arg1 ;
-(void)composeView:(id)arg1 isEditingChanged:(char)arg2 ;
-(void)composeView:(id)arg1 textChanged:(id)arg2 ;
-(void)composeView:(id)arg1 sendYak:(id)arg2 useNickname:(char)arg3 ;
-(void)composeViewCameraButtonPressed:(id)arg1 ;
-(_TtC7Yik_Yak18CameraComposeModel *)cameraComposeModel;
-(_TtC7Yik_Yak17YYSendYakResponse *)sendYakResponse;
-(void)showCamera;
-(void)saveButtonPressed:(id)arg1 ;
-(NSString *)yakText;
-(void)setYakText:(NSString *)arg1 ;
-(char)yakIsNotEmpty;
-(_TtC7Yik_Yak13CameraManager *)cameraManager;
-(void)setCameraManager:(_TtC7Yik_Yak13CameraManager *)arg1 ;
-(UIView *)previewViewContainer;
-(void)setPreviewViewContainer:(UIView *)arg1 ;
-(void)setPreviewImageView:(UIImageView *)arg1 ;
-(UIImage *)capturedImage;
-(void)setCapturedImage:(UIImage *)arg1 ;
-(char)flashOn;
-(void)setCurrentZoomLevel:(float)arg1 ;
-(void)setSendYakResponse:(_TtC7Yik_Yak17YYSendYakResponse *)arg1 ;
-(UIView *)blackBGView;
-(void)setBlackBGView:(UIView *)arg1 ;
-(UIView *)flashView;
-(void)setFlashView:(UIView *)arg1 ;
-(UIButton *)captureButton;
-(void)setCaptureButton:(UIButton *)arg1 ;
-(UIButton *)checkButton;
-(void)setCheckButton:(UIButton *)arg1 ;
-(UIButton *)reshootButton;
-(void)setReshootButton:(UIButton *)arg1 ;
-(UIButton *)rollButton;
-(void)setRollButton:(UIButton *)arg1 ;
-(UIView *)topShutterView;
-(void)setTopShutterView:(UIView *)arg1 ;
-(UIView *)bottomShutterView;
-(void)setBottomShutterView:(UIView *)arg1 ;
-(NSLayoutConstraint *)topShutterConstraint;
-(void)setTopShutterConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomShutterConstraint;
-(void)setBottomShutterConstraint:(NSLayoutConstraint *)arg1 ;
-(_TtC7Yik_Yak13YYComposeView *)yakComposeView;
-(void)setYakComposeView:(_TtC7Yik_Yak13YYComposeView *)arg1 ;
-(NSLayoutConstraint *)yakComposeViewBottomConstraint;
-(void)setYakComposeViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(DACircularProgressView *)uploadCircularProgressView;
-(void)setUploadCircularProgressView:(DACircularProgressView *)arg1 ;
-(UILabel *)uploadLabel;
-(void)setUploadLabel:(UILabel *)arg1 ;
-(void)captureButtonPressed:(id)arg1 ;
-(void)checkButtonPressed:(id)arg1 ;
-(void)flashButtonPressed:(id)arg1 ;
-(void)reshootButtonPressed:(id)arg1 ;
-(void)rollButtonPressed:(id)arg1 ;
-(void)setupYakCompose;
-(void)setupProgressView;
-(void)setupInitialCameraUI;
-(void)showPreviewfromCameraRoll:(char)arg1 ;
-(void)previewPhoto:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)flashScreen;
-(void)toggleFlash;
-(void)focusAtPoint:(CGPoint)arg1 ;
-(void)cameraSubjectAreaDidChange:(id)arg1 ;
-(void)handleCameraTap:(id)arg1 ;
-(void)handlePreviewTap:(id)arg1 ;
-(void)handleOrientationChange:(int)arg1 ;
-(void)determineDeviceOrientationFromAcceleration:(SCD_Struct_Yi12)arg1 ;
-(void)processAndUploadImage:(id)arg1 ;
-(void)uploadImage:(id)arg1 ;
-(void)showUploadFailedAlertForImage:(id)arg1 ;
-(void)sendYak;
-(char)yakIsAcceptableLength;
-(char)checkIfAllowedToSendYak;
-(void)moveKeyboard:(id)arg1 keyboardWasHidden:(char)arg2 ;
-(void)showCameraRollPreview;
-(char)hasCustomComposerHintText;
-(id)customComposerHintText;
-(void)animateShutterOpen;
-(void)delay:(double)arg1 closure:(/*^block*/id)arg2 ;
-(void)setCameraComposeModel:(_TtC7Yik_Yak18CameraComposeModel *)arg1 ;
-(_TtC7Yik_Yak18YYComposeViewModel *)cameraComposeYakViewModel;
-(void)setCameraComposeYakViewModel:(_TtC7Yik_Yak18YYComposeViewModel *)arg1 ;
-(UIProgressView *)uploadProgressView;
-(void)setUploadProgressView:(UIProgressView *)arg1 ;
-(void)setFlashOn:(char)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TtP7Yik_Yak37YYCameraComposeViewControllerDelegate_>)arg1 ;
-(id<_TtP7Yik_Yak37YYCameraComposeViewControllerDelegate_>)delegate;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)handlePinch:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(UIImagePickerController *)imagePickerController;
-(UIView *)cameraView;
-(void)setCameraView:(UIView *)arg1 ;
-(void)setFlashButton:(UIButton *)arg1 ;
-(UIButton *)flashButton;
-(UIButton *)saveButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
-(UIImageView *)previewImageView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(float)currentZoomLevel;
-(UIView *)focusView;
@end

