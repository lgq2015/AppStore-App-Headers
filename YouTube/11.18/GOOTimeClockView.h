/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@protocol GOOTimeClockViewDelegate;
@class NSArray, UILabel, UIView, NSCalendar, NSDate, GOODatePickerColorPalette;

@interface GOOTimeClockView : UIView {

	NSArray* _numberLabels;
	UILabel* _selectedLabel;
	UIView* _armContainerView;
	UIView* _centerView;
	UIView* _selectionView;
	UIView* _armView;
	NSCalendar* _calendar;
	float _lastAngle;
	NSDate* _selectedDate;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	GOODatePickerColorPalette* _colorPalette;
	int _selectionStyle;
	id<GOOTimeClockViewDelegate> _delegate;

}

@property (nonatomic,retain) NSDate * selectedDate;                                     //@synthesize selectedDate=_selectedDate - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                                      //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                                      //@synthesize maximumDate=_maximumDate - In the implementation block
@property (nonatomic,retain) GOODatePickerColorPalette * colorPalette;                  //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) int selectionStyle;                                        //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic,__weak) id<GOOTimeClockViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didPan:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 ;
-(void)didTapView:(id)arg1 ;
-(void)updateForCurrentSelectionStyle;
-(void)updateForCurrentColorPalatte;
-(void)setSelectedDate:(id)arg1 animated:(char)arg2 ;
-(void)updateForCurrentSelectedDateAnimated:(char)arg1 ;
-(void)updateDateForLocation:(CGPoint)arg1 ;
-(void)handlePanEnd:(id)arg1 ;
-(void)handlePanChanged:(id)arg1 ;
-(float)angleForLocation:(CGPoint)arg1 ;
-(int)tickIndexForAngle:(float)arg1 ;
-(id)labelForTickIndex:(unsigned)arg1 ;
-(void)updateSelectedLabel;
-(void)setArmTransformWithAngle:(float)arg1 ;
-(id)labelTextForIndex:(int)arg1 ;
-(int)numberOfIntervals;
-(void)setSelectedDate:(NSDate *)arg1 ;
-(NSDate *)selectedDate;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GOOTimeClockViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<GOOTimeClockViewDelegate>)delegate;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(GOODatePickerColorPalette *)colorPalette;
-(void)setColorPalette:(GOODatePickerColorPalette *)arg1 ;
@end

