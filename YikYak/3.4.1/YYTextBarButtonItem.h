/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/YYBarButtonItem.h>

@class YYButton, NSString;

@interface YYTextBarButtonItem : YYBarButtonItem {

	YYButton* _button;

}

@property (nonatomic,copy) NSString * buttonText; 
@property (assign,nonatomic) int contentHorizontalAlignment; 
@property (nonatomic,retain) YYButton * button;                           //@synthesize button=_button - In the implementation block
-(YYButton *)button;
-(void)initialize;
-(void)setContentHorizontalAlignment:(int)arg1 ;
-(int)contentHorizontalAlignment;
-(void)setButton:(YYButton *)arg1 ;
-(id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

