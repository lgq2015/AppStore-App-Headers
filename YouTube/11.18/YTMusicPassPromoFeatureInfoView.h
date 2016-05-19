/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <YouTube/YTMusicPassPromoCellContentView.h>
#import <YouTube/YTThumbnailMapping.h>

@class YTFormattedStringLabel, YTImageView, NSMutableArray, UIImageView, YTIMusicPassFeatureInfoRenderer, NSString;

@interface YTMusicPassPromoFeatureInfoView : UIView <YTMusicPassPromoCellContentView, YTThumbnailMapping> {

	YTFormattedStringLabel* _headerLabel;
	YTFormattedStringLabel* _subHeaderLabel;
	YTFormattedStringLabel* _descriptionLabel;
	YTImageView* _imageView;
	NSMutableArray* _detailBullets;
	NSMutableArray* _detailLabels;
	NSMutableArray* _extendedDescriptionLabels;
	UIImageView* _bottomSeparator;
	YTIMusicPassFeatureInfoRenderer* _renderer;

}

@property (nonatomic,retain) YTIMusicPassFeatureInfoRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char showsBottomSeparator; 
+(float)preferredHeightForRenderer:(id)arg1 width:(float)arg2 ;
+(float)imageWidth;
-(id)thumbnailMappings;
-(id)subscribeSwitchMappings;
-(id)newDetailBullet;
-(id)newDetailLabelWithFormattedString:(id)arg1 ;
-(id)newExtendedDescriptionLabelWithFormattedString:(id)arg1 ;
-(void)setRenderer:(YTIMusicPassFeatureInfoRenderer *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setShowsBottomSeparator:(char)arg1 ;
-(char)showsBottomSeparator;
-(YTIMusicPassFeatureInfoRenderer *)renderer;
@end

