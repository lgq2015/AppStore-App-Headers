/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSArray, NSString, NSCalendar, NSDateFormatter, UIFont, NSDate;

@interface WABirthdayDatePicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {

	int _currentMonth;
	int _currentYear;
	NSRange _monthRange;
	NSRange _dayRange;
	NSRange _dayRangeForCurrentMonth;
	NSArray* _monthNames;
	int _maximumYear;
	NSString* _emptyYear;
	NSCalendar* _calendar;
	NSDateFormatter* _dayFormatter;
	NSDateFormatter* _yearFormatter;
	int _dayComponent;
	int _monthComponent;
	int _yearComponent;
	float _maxDayWidth;
	float _maxMonthWidth;
	float _maxYearWidth;
	float _maxContentWidth;
	UIFont* _font;
	/*^block*/id _handler;
	NSDate* _date;

}

@property (nonatomic,copy) id handler;                              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transformDateToComponents;
-(int)monthNumberForRow:(int)arg1 ;
-(void)calculateDayRangeForCurrentMonthAndYear;
-(void)validateDaySelection;
-(void)transformComponentsToDate;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

