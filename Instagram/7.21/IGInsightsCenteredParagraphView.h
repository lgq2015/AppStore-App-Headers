/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, NSURL;

@interface IGInsightsCenteredParagraphView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _urlbutton;
	NSURL* _url;
	CGRect _frame;

}

@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * urlbutton;                 //@synthesize urlbutton=_urlbutton - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CGRect frame;                         //@synthesize frame=_frame - In the implementation block
-(void)onWebsiteExternalLinkTapped:(id)arg1 ;
-(UIButton *)urlbutton;
-(id)initWithFrame:(CGRect)arg1 paragraphUnit:(id)arg2 ;
-(void)layoutSubviews;
-(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSURL *)url;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
@end

