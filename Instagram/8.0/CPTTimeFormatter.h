/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Foundation/NSNumberFormatter.h>

@class NSDateFormatter, NSDate;

@interface CPTTimeFormatter : NSNumberFormatter {

	NSDateFormatter* dateFormatter;
	NSDate* referenceDate;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter; 
@property (nonatomic,copy) NSDate * referenceDate; 
-(id)initWithDateFormatter:(id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

