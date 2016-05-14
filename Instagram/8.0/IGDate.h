/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface IGDate : NSObject <NSCoding> {

	NSDate* _date;
	long long _microseconds;

}

@property (nonatomic,readonly) long long microseconds;                    //@synthesize microseconds=_microseconds - In the implementation block
@property (nonatomic,readonly) double timeIntervalSince1970; 
@property (nonatomic,readonly) NSDate * date;                             //@synthesize date=_date - In the implementation block
+(id)date;
-(id)initWithMicroseconds:(long long)arg1 ;
-(long long)microseconds;
-(id)initWithDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(double)timeIntervalSince1970;
-(id)initWithTimeInterval:(double)arg1 ;
@end

