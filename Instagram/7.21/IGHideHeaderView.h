/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, UILabel;

@interface IGHideHeaderView : UIView {

	char _showUser;
	IGProfilePictureImageView* _profilePic;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) char showUser;                                       //@synthesize showUser=_showUser - In the implementation block
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)setShowUser:(char)arg1 ;
-(char)showUser;
-(void)hideUser:(id)arg1 suggested:(char)arg2 ;
-(void)hideItemName:(id)arg1 suggested:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

