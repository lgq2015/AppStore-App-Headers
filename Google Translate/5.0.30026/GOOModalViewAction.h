/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Translate/Translate-Structs.h>
@class NSString, UIView, UIImage;

@interface GOOModalViewAction : NSObject {

	NSString* _automationIdentifier;
	UIView* _horizontalDivider;
	UIImage* _iconImage;
	/*^block*/id _block;
	int _style;
	NSString* _title;
	unsigned long long _traits;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy) NSString * automationIdentifier;              //@synthesize automationIdentifier=_automationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long traits;                  //@synthesize traits=_traits - In the implementation block
@property (nonatomic,retain) UIView * horizontalDivider;                 //@synthesize horizontalDivider=_horizontalDivider - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                        //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                        //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) id block;                                     //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) int style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
-(NSString *)automationIdentifier;
-(void)setAutomationIdentifier:(NSString *)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(unsigned long long)traits;
-(void)setHorizontalDivider:(UIView *)arg1 ;
-(UIView *)horizontalDivider;
-(UIImage *)iconImage;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setTraits:(unsigned long long)arg1 ;
@end

