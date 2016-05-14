/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGDirectThreadAvatarView, UILabel, UIView;

@interface IGDirectShareCollectionViewCell : UICollectionViewCell {

	char _showWhiteOverlay;
	char _showBlueRing;
	IGDirectThreadAvatarView* _profileView;
	UILabel* _usernameLabel;
	UILabel* _detailLabel;
	UIView* _whiteOverlay;
	UIView* _blueRing;

}

@property (nonatomic,retain) IGDirectThreadAvatarView * profileView;              //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                             //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIView * whiteOverlay;                               //@synthesize whiteOverlay=_whiteOverlay - In the implementation block
@property (nonatomic,retain) UIView * blueRing;                                   //@synthesize blueRing=_blueRing - In the implementation block
@property (assign,nonatomic) char showWhiteOverlay;                               //@synthesize showWhiteOverlay=_showWhiteOverlay - In the implementation block
@property (assign,nonatomic) char showBlueRing;                                   //@synthesize showBlueRing=_showBlueRing - In the implementation block
+(float)contractedCellWidth;
+(float)cellHeight;
-(void)setShowWhiteOverlay:(char)arg1 ;
-(UIView *)whiteOverlay;
-(char)showWhiteOverlay;
-(void)setWhiteOverlay:(UIView *)arg1 ;
-(IGDirectThreadAvatarView *)profileView;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(UILabel *)usernameLabel;
-(char)showBlueRing;
-(void)setShowBlueRing:(char)arg1 ;
-(void)showWhiteOverlay:(char)arg1 withAnimation:(char)arg2 ;
-(void)setUsers:(id)arg1 shouldShowDetails:(char)arg2 ;
-(void)setProfileView:(IGDirectThreadAvatarView *)arg1 ;
-(UIView *)blueRing;
-(void)setBlueRing:(UIView *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDisplayText:(id)arg1 ;
@end

