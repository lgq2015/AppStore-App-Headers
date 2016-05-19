/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIButton.h>

@class YTImageView, YTFormattedStringLabel;

@interface YTAudioTracksCategoryCellThumbnailButton : UIButton {

	YTImageView* _thumbnailImageView;
	YTFormattedStringLabel* _genreLabel;

}

@property (nonatomic,retain) YTImageView * thumbnailImageView;                 //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) YTFormattedStringLabel * genreLabel;              //@synthesize genreLabel=_genreLabel - In the implementation block
-(YTFormattedStringLabel *)genreLabel;
-(void)setGenreLabel:(YTFormattedStringLabel *)arg1 ;
-(void)setThumbnailImageView:(YTImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(YTImageView *)thumbnailImageView;
@end

