/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationNextButton, UIButton, IGRetroRegistrationTextField, IGCoreTextView, UIImageView, UILabel;

@interface IGRetroRegistrationAddEmailScrollView : UIScrollView {

	IGRetroRegistrationNextButton* _nextButton;
	UIButton* _switchToPhoneRegiButton;
	IGRetroRegistrationTextField* _emailField;
	IGCoreTextView* _termView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIButton * switchToPhoneRegiButton;                      //@synthesize switchToPhoneRegiButton=_switchToPhoneRegiButton - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * emailField;               //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                               //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UIButton *)switchToPhoneRegiButton;
-(void)setSwitchToPhoneRegiButton:(UIButton *)arg1 ;
-(void)setEmailField:(IGRetroRegistrationTextField *)arg1 ;
-(IGRetroRegistrationTextField *)emailField;
-(IGCoreTextView *)termView;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

