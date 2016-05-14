/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface IGBannerView : UIButton {

	UIImageView* _disclosureIndicator;
	UILabel* _textLabel;
	UILabel* _disclosureLabel;
	int _bannerIndicatorType;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _disclosureLabelInsets;

}

@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLabel;                       //@synthesize disclosureLabel=_disclosureLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureIndicator;               //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (assign,nonatomic) int bannerIndicatorType;                         //@synthesize bannerIndicatorType=_bannerIndicatorType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                      //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets disclosureLabelInsets;              //@synthesize disclosureLabelInsets=_disclosureLabelInsets - In the implementation block
-(UILabel *)disclosureLabel;
-(void)setBannerIndicatorType:(int)arg1 ;
-(UIImageView *)disclosureIndicator;
-(UIEdgeInsets)disclosureLabelInsets;
-(id)initWithFrame:(CGRect)arg1 bannerIndicatorType:(int)arg2 ;
-(void)setDisclosureLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setDisclosureIndicator:(UIImageView *)arg1 ;
-(void)setDisclosureLabel:(UILabel *)arg1 ;
-(int)bannerIndicatorType;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

