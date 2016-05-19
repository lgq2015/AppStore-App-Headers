/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, YTPlayerView, UIView;

@interface YTWatchView : UIView {

	UIImageView* _playerBorderImageView;
	UIImageView* _playerShadowImageView;
	UIImageView* _wideLayoutVerticalBorder;
	int _layout;
	float _expansionCoefficient;
	YTPlayerView* _playerView;
	UIView* _watchNextView;
	UIView* _guardView;
	UIView* _descriptionDetailsView;

}

@property (assign,nonatomic) int layout;                                   //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) float expansionCoefficient;                   //@synthesize expansionCoefficient=_expansionCoefficient - In the implementation block
@property (nonatomic,retain) YTPlayerView * playerView;                    //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UIView * watchNextView;                       //@synthesize watchNextView=_watchNextView - In the implementation block
@property (nonatomic,readonly) UIView * guardView;                         //@synthesize guardView=_guardView - In the implementation block
@property (nonatomic,retain) UIView * descriptionDetailsView;              //@synthesize descriptionDetailsView=_descriptionDetailsView - In the implementation block
+(float)miniPlayerWidth;
+(float)miniPlayerPadding;
-(void)setExpansionCoefficient:(float)arg1 ;
-(UIView *)watchNextView;
-(void)setPlayerView:(YTPlayerView *)arg1 ;
-(void)setDescriptionDetailsView:(UIView *)arg1 ;
-(char)shouldUseWideLayoutForSize:(CGSize)arg1 ;
-(void)setWatchNextView:(UIView *)arg1 ;
-(CGRect)playerViewFrame;
-(CGSize)collapsedPlayerSize;
-(char)pansWithPoint:(CGPoint)arg1 ;
-(void)layoutSubviews_regular;
-(void)layoutSubviews_compact;
-(CGSize)expandedPlayerSize_regular;
-(CGSize)expandedPlayerSize_compact;
-(CGSize)expandedPlayerSize;
-(void)setPlayerViewFrame:(CGRect)arg1 ;
-(float)alphaForExpansionCoefficient:(float)arg1 ;
-(CGRect)expandedPlayerViewFrame_regular;
-(void)updateExpansionCoefficient;
-(float)playerViewHeightWithWidth:(float)arg1 ;
-(CGPoint)playerViewOrigin;
-(CGSize)playerViewSize;
-(float)expandingPadding;
-(float)expansionCoefficient;
-(UIView *)guardView;
-(UIView *)descriptionDetailsView;
-(YTPlayerView *)playerView;
-(id)init;
-(void)layoutSubviews;
-(int)layout;
-(char)isExpanded;
-(void)setLayout:(int)arg1 ;
-(char)isCollapsed;
-(char)isFullscreen;
@end

