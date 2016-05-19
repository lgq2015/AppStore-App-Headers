/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIViewController.h>
#import <YouTube/GOOPickerViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol GOOPickerView, GOODatePickerViewControllerDelegate;
@class UIView, NSCalendar, NSDate, GOODatePickerTransitionController, GOODatePickerShadowView, GOODatePickerColorPalette, NSString;

@interface GOODatePickerViewController : UIViewController <GOOPickerViewDelegate, UIViewControllerTransitioningDelegate> {

	UIView*<GOOPickerView> _pickerView;
	NSCalendar* _calendar;
	NSDate* _initialDate;
	GOODatePickerTransitionController* _transitionController;
	GOODatePickerShadowView* _shadowView;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	int _colorStyle;
	GOODatePickerColorPalette* _colorPalette;
	id<GOODatePickerViewControllerDelegate> _delegate;
	int _mode;

}

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * minimumDate;                                                 //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                                                 //@synthesize maximumDate=_maximumDate - In the implementation block
@property (assign,nonatomic) int colorStyle;                                                       //@synthesize colorStyle=_colorStyle - In the implementation block
@property (nonatomic,retain) GOODatePickerColorPalette * colorPalette;                             //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic,__weak) id<GOODatePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                                             //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)colorStyle;
-(char)isPopoverStyle;
-(int)styleForInterfaceOrientation:(int)arg1 ;
-(void)updateSelectableRange;
-(void)pickerViewDidTapCancel:(id)arg1 ;
-(void)pickerViewDidTapDone:(id)arg1 ;
-(void)setColorStyle:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GOODatePickerViewControllerDelegate>)arg1 ;
-(id<GOODatePickerViewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(NSDate *)date;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(id)initWithCalendar:(id)arg1 ;
-(GOODatePickerColorPalette *)colorPalette;
-(void)setColorPalette:(GOODatePickerColorPalette *)arg1 ;
@end

