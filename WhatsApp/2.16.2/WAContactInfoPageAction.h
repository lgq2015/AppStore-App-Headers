/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface WAContactInfoPageAction : NSObject {

	char _enabled;
	char _destructive;
	NSString* _title;
	SEL _selector;
	id _userInfo;
	UIColor* _textColor;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) SEL selector;                     //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) char enabled;                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char destructive;                 //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) id userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
+(id)actionWithTitle:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithTitle:(id)arg1 selector:(SEL)arg2 ;
-(char)enabled;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(NSString *)title;
-(void)setUserInfo:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)userInfo;
-(void)setTextColor:(UIColor *)arg1 ;
-(SEL)selector;
-(UIColor *)textColor;
-(void)setDestructive:(char)arg1 ;
-(char)destructive;
@end

