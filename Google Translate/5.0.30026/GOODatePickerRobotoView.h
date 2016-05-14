/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIPickerView.h>
#import <Translate/GOODatePicking.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSDateFormatter, UIFont, NSString, NSDate, UIDatePicker, NSCalendar, NSLocale, NSTimeZone, UIControl;

@interface GOODatePickerRobotoView : UIPickerView <GOODatePicking, UIPickerViewDataSource, UIPickerViewDelegate> {

	NSDateFormatter* _dateFormatter;
	UIFont* _pickerFont;
	char _has24HourClock;
	int _selectedRows[4];
	NSString* _todayString;
	NSDate* _roundedToday;
	int _monthIndex;
	int _dayIndex;
	UIDatePicker* _datePicker;
	int _style;
	NSCalendar* _calendar;
	NSDate* _date;
	int _datePickerMode;
	NSLocale* _locale;
	NSDate* _maximumDate;
	NSDate* _minimumDate;
	int _minuteInterval;
	NSTimeZone* _timeZone;
	UIControl* _control;

}

@property (assign,nonatomic,__weak) UIControl * control;              //@synthesize control=_control - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSCalendar * calendar;                     //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) int datePickerMode;                      //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSDate * maximumDate;                    //@synthesize maximumDate=_maximumDate - In the implementation block
@property (nonatomic,retain) NSDate * minimumDate;                    //@synthesize minimumDate=_minimumDate - In the implementation block
@property (assign,nonatomic) int minuteInterval;                      //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                   //@synthesize timeZone=_timeZone - In the implementation block
-(void)resetSelectedRows;
-(void)calculateDateOrdering;
-(void)reloadCalendar;
-(void)updatePickerViewStateAnimated:(char)arg1 ;
-(int)numberOfRowsForModeTimeInComponent:(int)arg1 ;
-(int)numberOfRowsForModeDateAndTimeInComponent:(int)arg1 ;
-(float)widthForComponent:(int)arg1 ;
-(int)textAlignmentForComponent:(int)arg1 ;
-(char)isHourComponent:(int)arg1 ;
-(void)updateAMPMStateForRow:(int)arg1 inHourComponent:(int)arg2 ;
-(int)componentIndexForMonth;
-(int)componentIndexForDay;
-(int)numberOfDaysInCurrentMonth;
-(int)componentIndexForYear;
-(char)isValidDateRange;
-(id)titleForRow:(int)arg1 forModeTimeInComponent:(int)arg2 ;
-(int)numberOfRowsForModeDateInComponent:(int)arg1 ;
-(id)titleForRow:(int)arg1 forModeDateInComponent:(int)arg2 ;
-(id)titleForRow:(int)arg1 forModeDateAndTimeInComponent:(int)arg2 ;
-(id)monthNameAtIndex:(int)arg1 ;
-(id)dateStringForIndex:(int)arg1 ;
-(void)loadTodayString;
-(void)loadRoundedToday;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)selectRow:(int)arg1 inComponent:(int)arg2 animated:(char)arg3 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setDatePickerMode:(int)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setMinuteInterval:(int)arg1 ;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(int)datePickerMode;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(int)minuteInterval;
-(void)setDate:(id)arg1 animated:(char)arg2 ;
-(NSLocale *)locale;
-(id)titleForRow:(int)arg1 inComponent:(int)arg2 ;
-(UIControl *)control;
-(void)setControl:(UIControl *)arg1 ;
@end

