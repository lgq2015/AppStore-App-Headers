/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGTapButton.h>

@class NSString;

@interface IGChevronTitleButton : IGTapButton {

	char _isOpen;

}

@property (assign,nonatomic) char isOpen;                   //@synthesize isOpen=_isOpen - In the implementation block
@property (nonatomic,retain) NSString * title; 
+(id)button;
-(void)setIsOpen:(char)arg1 animated:(char)arg2 ;
-(void)setIsOpen:(char)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)isOpen;
@end

