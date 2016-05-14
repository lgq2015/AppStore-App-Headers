/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGTokenView.h>

@class UILabel, UIView;

@interface IGUsernameTokenView : IGTokenView {

	UILabel* _usernameLabel;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UILabel * usernameLabel;              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(UILabel *)usernameLabel;
-(id)initWithToken:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIView *)backgroundView;
@end

