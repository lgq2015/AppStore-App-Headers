/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UILabel;

@interface IGPublicThreadInboxCell : UICollectionViewCell {

	IGProfilePictureImageView* _profileView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profileView;              //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)createTitleLabel:(CGRect)arg1 ;
-(void)updateTitleLabelFrame;
-(IGProfilePictureImageView *)profileView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
@end

