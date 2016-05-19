/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class YTIThumbnailDetails, UILabel, YTPaddingLabel, UITapGestureRecognizer, YTVideoThumbnailView;

@interface YTAdNonSkipView : UIView {

	YTIThumbnailDetails* _thumbnail;
	UILabel* _portraitLabel;
	YTPaddingLabel* _landscapeTitle;
	YTPaddingLabel* _landscapeLabel;
	UITapGestureRecognizer* _tapRecognizer;
	int _inlinePlaybackLayout;
	YTVideoThumbnailView* _thumbnailView;

}

@property (nonatomic,readonly) YTVideoThumbnailView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(void)setInlinePlaybackLayout:(int)arg1 ;
-(void)showPortraitAdMessageAnimated;
-(void)setContentVideoTitle:(id)arg1 ;
-(void)showAdMessageAnimatedWithRecognizer:(id)arg1 ;
-(void)hidePortraitAdMessage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityLabel;
-(YTVideoThumbnailView *)thumbnailView;
-(char)isAccessibilityElement;
@end

