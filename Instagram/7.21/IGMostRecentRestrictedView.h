/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UILabel, UIButton;

@interface IGMostRecentRestrictedView : UIView {

	CALayer* _separatorLayer;
	UILabel* _messageLabel;
	UIButton* _learnButton;

}

@property (nonatomic,readonly) CALayer * separatorLayer;              //@synthesize separatorLayer=_separatorLayer - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * learnButton;                //@synthesize learnButton=_learnButton - In the implementation block
-(CALayer *)separatorLayer;
-(UIButton *)learnButton;
-(id)initWithFeedName:(id)arg1 ;
-(void)addLearnMoreTarget:(id)arg1 action:(SEL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)messageLabel;
@end

