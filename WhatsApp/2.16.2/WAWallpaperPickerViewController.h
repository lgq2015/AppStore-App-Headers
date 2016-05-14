/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAWallpaperImageViewDelegate.h>

@class UIScrollView, NSArray, UIImageView, UIView, NSString;

@interface WAWallpaperPickerViewController : WAViewController <WAWallpaperImageViewDelegate> {

	UIScrollView* _scrollView;
	NSArray* _imageViews;
	UIImageView* _beforeRotationSnapshotImageView;
	UIImageView* _afterRotationSnapshotImageView;
	UIView* _whiteBackgroundView;
	CGPoint _contentOffsetAtStartOfRotation;
	char _disableImageRelayout;
	int _pickerMode;

}

@property (assign,nonatomic) int pickerMode;                        //@synthesize pickerMode=_pickerMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userDidSelectWallpaperImageView:(id)arg1 ;
-(void)loadAllImages;
-(void)loadAllColors;
-(void)layoutAllPreviews;
-(void)selectImage:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)snapshot;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(int)pickerMode;
-(void)setPickerMode:(int)arg1 ;
@end

