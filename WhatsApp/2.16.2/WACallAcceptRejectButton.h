/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView;

@interface WACallAcceptRejectButton : UIButton {

	UILabel* _bottomLabel;
	UIImageView* _circleView;
	unsigned _buttonState;

}

@property (assign,nonatomic) unsigned buttonState;              //@synthesize buttonState=_buttonState - In the implementation block
+(id)button;
-(void)setButtonState:(unsigned)arg1 ;
-(void)setButtonState:(unsigned)arg1 animated:(char)arg2 ;
-(unsigned)buttonState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(id)accessibilityValue;
@end

