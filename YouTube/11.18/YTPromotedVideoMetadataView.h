/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>
#import <YouTube/YTReusableView.h>

@class YTImageView, YTFormattedStringLabel, YTBadge, NSString;

@interface YTPromotedVideoMetadataView : UIView <YTReusableView> {

	YTImageView* _channelThumbnailView;
	YTFormattedStringLabel* _titleLabel;
	YTFormattedStringLabel* _bylineLabel;
	YTFormattedStringLabel* _detailsLabel;
	YTBadge* _adBadge;

}

@property (nonatomic,readonly) YTImageView * channelThumbnailView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setByline:(id)arg1 ;
-(void)setDetailsText:(id)arg1 ;
-(YTImageView *)channelThumbnailView;
-(void)sizeLabelsWithWidth:(float)arg1 ;
-(void)updateVisibility_regular;
-(void)updateVisibility_compact;
-(void)sizeLabelsWithWidth_regular:(float)arg1 ;
-(void)sizeLabelsWithWidth_compact:(float)arg1 ;
-(void)sizeViews:(id)arg1 withWidth:(float)arg2 ;
-(void)layoutSubviews_regular;
-(void)layoutSubviews_compact;
-(void)setChannelThumbnail:(id)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setTitleColor:(id)arg1 ;
-(void)updateVisibility;
@end

