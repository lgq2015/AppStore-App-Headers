/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGFollowAllButton, UILabel;

@interface IGFollowAllUsersView : UIView {

	IGFollowAllButton* _followAllButton;
	unsigned _userCount;
	float _horizontalPadding;
	UILabel* _countLabel;

}

@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) IGFollowAllButton * followAllButton;              //@synthesize followAllButton=_followAllButton - In the implementation block
@property (assign,nonatomic) unsigned userCount;                               //@synthesize userCount=_userCount - In the implementation block
@property (assign,nonatomic) float horizontalPadding;                          //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
+(float)preferredHeight;
-(UILabel *)countLabel;
-(void)setUserCount:(unsigned)arg1 ;
-(IGFollowAllButton *)followAllButton;
-(unsigned)userCount;
-(void)setFollowAllButton:(IGFollowAllButton *)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHorizontalPadding:(float)arg1 ;
-(float)horizontalPadding;
@end

