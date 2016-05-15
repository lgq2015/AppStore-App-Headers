/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <Yik Yak/YYViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Yik Yak/JTSYakViewDelegate.h>

@protocol JTSImageViewControllerDismissalDelegate, JTSImageViewControllerOptionsDelegate, JTSImageViewControllerInteractionsDelegate, JTSImageViewControllerAccessibilityDelegate, JTSImageViewControllerAnimationDelegate, JTSImageViewControllerYikYakDelegate;
@class JTSImageInfo, UIImage, UIViewController, YYYakMessage, UIView, UIImageView, UIScrollView, UITextView, UIProgressView, UIActivityIndicatorView, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIDynamicAnimator, UIAttachmentBehavior, NSURLSessionDataTask, NSTimer, JTSYakView, NSString;

@interface JTSImageViewController : YYViewController <UIScrollViewDelegate, UITextViewDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, JTSYakViewDelegate> {

	JTSImageInfo* _imageInfo;
	UIImage* _image;
	int _mode;
	int _backgroundOptions;
	id<JTSImageViewControllerDismissalDelegate> _dismissalDelegate;
	id<JTSImageViewControllerOptionsDelegate> _optionsDelegate;
	id<JTSImageViewControllerInteractionsDelegate> _interactionsDelegate;
	id<JTSImageViewControllerAccessibilityDelegate> _accessibilityDelegate;
	id<JTSImageViewControllerAnimationDelegate> _animationDelegate;
	id<JTSImageViewControllerYikYakDelegate> _yikYakDelegate;
	UIViewController* _previousViewController;
	int _yakSource;
	YYYakMessage* _yak;
	/*^block*/id _completionBlock;
	int _transition;
	int _lastUsedOrientation;
	UIView* _progressContainer;
	UIView* _outerContainerForScrollView;
	UIView* _snapshotView;
	UIView* _blurredSnapshotView;
	UIView* _blackBackdrop;
	UIImageView* _imageView;
	UIScrollView* _scrollView;
	UITextView* _textView;
	UIProgressView* _progressView;
	UIActivityIndicatorView* _spinner;
	UITapGestureRecognizer* _singleTapperPhoto;
	UITapGestureRecognizer* _doubleTapperPhoto;
	UITapGestureRecognizer* _singleTapperText;
	UILongPressGestureRecognizer* _longPresserPhoto;
	UIPanGestureRecognizer* _panRecognizer;
	UIDynamicAnimator* _animator;
	UIAttachmentBehavior* _attachmentBehavior;
	NSURLSessionDataTask* _imageDownloadDataTask;
	NSTimer* _downloadProgressTimer;
	JTSYakView* _yakView;
	CGPoint _imageDragStartingPoint;
	UIOffset _imageDragOffsetFromActualTranslation;
	UIOffset _imageDragOffsetFromImageCenter;
	struct {
		char isAnimatingAPresentationOrDismissal;
		char isDismissing;
		char isTransitioningFromInitialModalToInteractiveState;
		char viewHasAppeared;
		char isRotating;
		char isPresented;
		char rotationTransformIsDirty;
		char imageIsFlickingAwayForDismissal;
		char isDraggingImage;
		char scrollViewIsAnimatingAZoom;
		char imageIsBeingReadFromDisk;
		char isManuallyResizingTheScrollViewFrame;
		char imageDownloadFailed;
	}  _flags;
	CGAffineTransform _currentSnapshotRotationTransform;
	SCD_Struct_JT9 _startingInfo;

}

@property (nonatomic,retain) JTSImageInfo * imageInfo;                                                                  //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int mode;                                                                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int backgroundOptions;                                                                     //@synthesize backgroundOptions=_backgroundOptions - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerDismissalDelegate> dismissalDelegate;                      //@synthesize dismissalDelegate=_dismissalDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerOptionsDelegate> optionsDelegate;                          //@synthesize optionsDelegate=_optionsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerInteractionsDelegate> interactionsDelegate;                //@synthesize interactionsDelegate=_interactionsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerAnimationDelegate> animationDelegate;                      //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTSImageViewControllerYikYakDelegate> yikYakDelegate;                            //@synthesize yikYakDelegate=_yikYakDelegate - In the implementation block
@property (nonatomic,retain) UIViewController * previousViewController;                                                 //@synthesize previousViewController=_previousViewController - In the implementation block
@property (nonatomic,readonly) int yakSource;                                                                           //@synthesize yakSource=_yakSource - In the implementation block
@property (nonatomic,readonly) YYYakMessage * yak;                                                                      //@synthesize yak=_yak - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) int transition;                                                                            //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT10 startingInfo;                                                              //@synthesize startingInfo=_startingInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT11 flags;                                                                     //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int lastUsedOrientation;                                                                   //@synthesize lastUsedOrientation=_lastUsedOrientation - In the implementation block
@property (assign,nonatomic) CGAffineTransform currentSnapshotRotationTransform;                                        //@synthesize currentSnapshotRotationTransform=_currentSnapshotRotationTransform - In the implementation block
@property (nonatomic,retain) UIView * progressContainer;                                                                //@synthesize progressContainer=_progressContainer - In the implementation block
@property (nonatomic,retain) UIView * outerContainerForScrollView;                                                      //@synthesize outerContainerForScrollView=_outerContainerForScrollView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                                                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIView * blurredSnapshotView;                                                              //@synthesize blurredSnapshotView=_blurredSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * blackBackdrop;                                                                    //@synthesize blackBackdrop=_blackBackdrop - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                             //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                         //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTapperPhoto;                                                //@synthesize singleTapperPhoto=_singleTapperPhoto - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapperPhoto;                                                //@synthesize doubleTapperPhoto=_doubleTapperPhoto - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTapperText;                                                 //@synthesize singleTapperText=_singleTapperText - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPresserPhoto;                                           //@synthesize longPresserPhoto=_longPresserPhoto - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panRecognizer;                                                    //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * animator;                                                              //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) UIAttachmentBehavior * attachmentBehavior;                                                 //@synthesize attachmentBehavior=_attachmentBehavior - In the implementation block
@property (assign,nonatomic) CGPoint imageDragStartingPoint;                                                            //@synthesize imageDragStartingPoint=_imageDragStartingPoint - In the implementation block
@property (assign,nonatomic) UIOffset imageDragOffsetFromActualTranslation;                                             //@synthesize imageDragOffsetFromActualTranslation=_imageDragOffsetFromActualTranslation - In the implementation block
@property (assign,nonatomic) UIOffset imageDragOffsetFromImageCenter;                                                   //@synthesize imageDragOffsetFromImageCenter=_imageDragOffsetFromImageCenter - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * imageDownloadDataTask;                                              //@synthesize imageDownloadDataTask=_imageDownloadDataTask - In the implementation block
@property (nonatomic,retain) NSTimer * downloadProgressTimer;                                                           //@synthesize downloadProgressTimer=_downloadProgressTimer - In the implementation block
@property (nonatomic,retain) JTSYakView * yakView;                                                                      //@synthesize yakView=_yakView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)yakSource;
-(YYYakMessage *)yak;
-(void)reportYakToAPIForReason:(int)arg1 muteUser:(char)arg2 ;
-(void)confirmReportWithCompletion:(/*^block*/id)arg1 ;
-(void)showAlertForReportingWithCompletion:(/*^block*/id)arg1 ;
-(void)askToMuteWithCompletion:(/*^block*/id)arg1 ;
-(void)finishedReportingYak:(id)arg1 withUserBlocked:(char)arg2 ;
-(void)closeButtonPressed;
-(void)deleteButtonPressed;
-(void)reportButtonPressed;
-(void)commentLabelButtonPressed;
-(void)shareButtonPressed;
-(void)setupImageAndDownloadIfNecessary:(id)arg1 ;
-(void)setPreviousViewController:(UIViewController *)arg1 ;
-(void)showImageViewerByScalingDownFromOffscreenPositionWithViewController:(id)arg1 ;
-(void)showImageViewerByExpandingFromOriginalPositionFromViewController:(id)arg1 ;
-(void)showAltTextFromViewController:(id)arg1 ;
-(void)dismissByExpandingAltTextToOffscreenPosition;
-(void)hideYakView;
-(void)dismissByCleaningUpAfterImageWasFlickedOffscreen;
-(void)dismissByExpandingImageToOffscreenPosition;
-(void)dismissByCollapsingImageBackToOriginalPosition;
-(void)cancelProgressTimer;
-(void)viewDidLoadForImageMode;
-(void)viewDidLoadForAltTextMode;
-(void)updateLayoutsForCurrentOrientation;
-(int)lastUsedOrientation;
-(void)setLastUsedOrientation:(int)arg1 ;
-(JTSYakView *)yakView;
-(void)cancelCurrentImageDrag:(char)arg1 ;
-(void)updateDimmingViewForCurrentZoomScale:(char)arg1 ;
-(void)updateInterfaceWithImage:(id)arg1 ;
-(void)setImageDownloadDataTask:(NSURLSessionDataTask *)arg1 ;
-(void)setBlackBackdrop:(UIView *)arg1 ;
-(UIView *)blackBackdrop;
-(id)accessibilityHintZoomedOut;
-(void)setupImageModeGestureRecognizers;
-(void)setProgressContainer:(UIView *)arg1 ;
-(UIView *)progressContainer;
-(void)setupTextViewTapGestureRecognizer;
-(void)imageDoubleTapped:(id)arg1 ;
-(void)setDoubleTapperPhoto:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)doubleTapperPhoto;
-(void)setLongPresserPhoto:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPresserPhoto;
-(void)imageLongPressed:(id)arg1 ;
-(void)imageSingleTapped:(id)arg1 ;
-(void)setSingleTapperPhoto:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)singleTapperPhoto;
-(void)dismissingPanGestureRecognizerPanned:(id)arg1 ;
-(void)textViewSingleTapped:(id)arg1 ;
-(void)setSingleTapperText:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)singleTapperText;
-(id)snapshotFromParentmostViewController:(id)arg1 ;
-(int)backgroundOptions;
-(id)blurredSnapshotFromParentmostViewController:(id)arg1 ;
-(void)setBlurredSnapshotView:(UIView *)arg1 ;
-(UIView *)blurredSnapshotView;
-(void)updateScrollViewAndImageViewForCurrentMetrics;
-(void)showYakView;
-(void)addMotionEffectsToSnapshotView;
-(float)alphaForBackgroundDimmingOverlay;
-(CGRect)resizedFrameForAutorotatingImageView:(CGSize)arg1 ;
-(void)verticallyCenterTextInTextView;
-(CGAffineTransform)currentSnapshotRotationTransform;
-(void)removeMotionEffectsFromSnapshotView;
-(float)backgroundBlurRadius;
-(id)backgroundColorForImageView;
-(void)setCurrentSnapshotRotationTransform:(CGAffineTransform)arg1 ;
-(UIEdgeInsets)contentInsetForScrollView:(float)arg1 ;
-(id)accessibilityHintZoomedIn;
-(void)toggleYakView;
-(id<JTSImageViewControllerInteractionsDelegate>)interactionsDelegate;
-(void)startImageDragging:(CGPoint)arg1 translationOffset:(UIOffset)arg2 ;
-(CGPoint)imageDragStartingPoint;
-(UIOffset)imageDragOffsetFromActualTranslation;
-(UIAttachmentBehavior *)attachmentBehavior;
-(void)dismissImageWithFlick:(CGPoint)arg1 ;
-(void)setImageDragStartingPoint:(CGPoint)arg1 ;
-(void)setImageDragOffsetFromActualTranslation:(UIOffset)arg1 ;
-(void)setImageDragOffsetFromImageCenter:(UIOffset)arg1 ;
-(void)setAttachmentBehavior:(UIAttachmentBehavior *)arg1 ;
-(float)appropriateAngularResistanceForView:(id)arg1 ;
-(float)appropriateDensityForView:(id)arg1 ;
-(UIOffset)imageDragOffsetFromImageCenter;
-(char)imageViewIsOffscreen;
-(void)progressTimerFired:(id)arg1 ;
-(void)setDownloadProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)downloadProgressTimer;
-(NSURLSessionDataTask *)imageDownloadDataTask;
-(id)defaultAccessibilityHintForScrollView:(char)arg1 ;
-(void)deleteYak;
-(void)reportYak;
-(void)viewComments;
-(id<JTSImageViewControllerYikYakDelegate>)yikYakDelegate;
-(void)dismiss:(char)arg1 deletedOrFlagged:(char)arg2 ;
-(id)initWithImageInfo:(id)arg1 mode:(int)arg2 backgroundStyle:(int)arg3 ;
-(id)initWithYak:(id)arg1 yakSource:(int)arg2 imageInfo:(id)arg3 mode:(int)arg4 backgroundStyle:(int)arg5 ;
-(void)showFromViewController:(id)arg1 transition:(int)arg2 ;
-(void)showFromViewController:(id)arg1 transition:(int)arg2 withCompletion:(/*^block*/id)arg3 ;
-(CGPoint)targetDismissalPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(id)defaultAccessibilityLabelForScrollView;
-(void)setImageInfo:(JTSImageInfo *)arg1 ;
-(void)setBackgroundOptions:(int)arg1 ;
-(void)setOptionsDelegate:(id<JTSImageViewControllerOptionsDelegate>)arg1 ;
-(void)setInteractionsDelegate:(id<JTSImageViewControllerInteractionsDelegate>)arg1 ;
-(void)setYikYakDelegate:(id<JTSImageViewControllerYikYakDelegate>)arg1 ;
-(SCD_Struct_JT10)startingInfo;
-(void)setStartingInfo:(SCD_Struct_JT10)arg1 ;
-(UIView *)outerContainerForScrollView;
-(void)setOuterContainerForScrollView:(UIView *)arg1 ;
-(void)setYakView:(JTSYakView *)arg1 ;
-(void)setAccessibilityDelegate:(id<JTSImageViewControllerAccessibilityDelegate>)arg1 ;
-(void)deviceOrientationDidChange:(id)arg1 ;
-(id<JTSImageViewControllerOptionsDelegate>)optionsDelegate;
-(void)startProgressTimer;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIViewController *)previousViewController;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(UIView *)snapshotView;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(int)screen;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(UIImage *)image;
-(void)setAnimationDelegate:(id<JTSImageViewControllerAnimationDelegate>)arg1 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(int)modalTransitionStyle;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(UIImageView *)imageView;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)copy:(id)arg1 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)dismiss:(char)arg1 ;
-(UITextView *)textView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(UIDynamicAnimator *)animator;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UIPanGestureRecognizer *)panRecognizer;
-(void)setPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(JTSImageInfo *)imageInfo;
-(void)setDismissalDelegate:(id<JTSImageViewControllerDismissalDelegate>)arg1 ;
-(id<JTSImageViewControllerDismissalDelegate>)dismissalDelegate;
-(void)setFlags:(SCD_Struct_JT11)arg1 ;
-(SCD_Struct_JT11)flags;
-(id<JTSImageViewControllerAnimationDelegate>)animationDelegate;
-(id<JTSImageViewControllerAccessibilityDelegate>)accessibilityDelegate;
@end

