/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/YYObject.h>

@class NSString;

@interface Yik_Yak.YYNickNameResponse : YYObject {

	 code;
	 error;

}

@property (assign,nonatomic) long code; 
@property (copy,nonatomic) NSString * error; 
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(id)initWithString:(id)arg1 usingEncoding:(unsigned long)arg2 error:(id*)arg3 ;
-(NSString *)error;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(long)code;
-(void)setError:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setCode:(long)arg1 ;
@end

