/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IGSurveyAnswer : NSObject <NSCoding> {

	NSString* _title;
	NSString* _color;
	NSString* _value;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * color;              //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
@end

