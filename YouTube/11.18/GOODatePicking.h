/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSCalendar, NSDate, NSLocale, NSTimeZone;


@protocol GOODatePicking <NSObject>
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) int datePickerMode; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (assign,nonatomic) int minuteInterval; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@required
-(void)setTimeZone:(id)arg1;
-(NSDate *)date;
-(void)setDate:(id)arg1;
-(void)setLocale:(id)arg1;
-(void)setDatePickerMode:(int)arg1;
-(void)setCalendar:(id)arg1;
-(void)setMinuteInterval:(int)arg1;
-(void)setMinimumDate:(id)arg1;
-(void)setMaximumDate:(id)arg1;
-(int)datePickerMode;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(int)minuteInterval;
-(void)setDate:(id)arg1 animated:(char)arg2;
-(NSLocale *)locale;

@end

