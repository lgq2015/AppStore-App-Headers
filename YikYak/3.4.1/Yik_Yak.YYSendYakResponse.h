/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/YYObject.h>

@class NSString;

@interface Yik_Yak.YYSendYakResponse : YYObject {

	 result;
	 showPrompt;
	 title;
	 message;
	 buttonText;
	 action;
	 refreshFeed;
	 yakID;

}

@property (assign,nonatomic) unsigned result; 
@property (assign,nonatomic) char showPrompt; 
@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * message; 
@property (copy,nonatomic) NSString * buttonText; 
@property (copy,nonatomic) NSString * action; 
@property (copy,nonatomic) NSString * yakID; 
-(char)showPrompt;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(id)initWithString:(id)arg1 usingEncoding:(unsigned long)arg2 error:(id*)arg3 ;
-(void)setShowPrompt:(char)arg1 ;
-(NSString *)yakID;
-(void)setYakID:(NSString *)arg1 ;
-(id)initWithResult:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)action;
-(NSString *)title;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned)result;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setResult:(unsigned)arg1 ;
@end

