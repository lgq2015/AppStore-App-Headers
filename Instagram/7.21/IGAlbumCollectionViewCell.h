/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGAlbumPlayerView, IGProfilePictureImageView, UILabel, NSString;

@interface IGAlbumCollectionViewCell : UICollectionViewCell {

	IGAlbumPlayerView* _playerView;
	IGProfilePictureImageView* _profileImageView;
	UILabel* _dateLabel;
	UILabel* _titleLabel;
	UILabel* _contributorsLabel;

}

@property (nonatomic,retain) IGAlbumPlayerView * playerView;                              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * contributorsString; 
@property (nonatomic,retain) UILabel * dateLabel;                                         //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * contributorsLabel;                                 //@synthesize contributorsLabel=_contributorsLabel - In the implementation block
-(NSString *)contributorsString;
-(UILabel *)contributorsLabel;
-(void)setContributorsLabel:(UILabel *)arg1 ;
-(void)setContributorsString:(NSString *)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(void)setPlayerView:(IGAlbumPlayerView *)arg1 ;
-(IGAlbumPlayerView *)playerView;
-(void)setDateLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)dateLabel;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
@end

