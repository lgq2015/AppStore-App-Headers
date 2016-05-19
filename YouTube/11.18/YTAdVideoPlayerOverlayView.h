/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTVideoPlayerOverlayView.h>
#import <YouTube/YTPlayerScrubberProtocol.h>
#import <YouTube/YTThumbnailMapping.h>

@protocol YTAdVideoPlayerOverlayViewDelegate;
@class YTAdPlayerBarView, UILabel, UIView, YTPlayerBarView, YTPreAdSkipButton, UIButton, YTImageView, YTFormattedStringLabel, YTButton, YTIAdPlayerOverlayRenderer, YTAnnotationsView, NSString;

@interface YTAdVideoPlayerOverlayView : YTVideoPlayerOverlayView <YTPlayerScrubberProtocol, YTThumbnailMapping> {

	YTAdPlayerBarView* _watchCollapsedAdPlayerBarView;
	UILabel* _collapsedAdSecondsLabel;
	YTAdPlayerBarView* _minimizedAdPlayerBarView;
	UILabel* _adSecondsLabel;
	UIView* _blackOutView;
	YTPlayerBarView* _adPlayerBarView;
	YTPreAdSkipButton* _preAdSkipButton;
	UIButton* _postAdSkipButton;
	YTImageView* _adChannelThumbnailView;
	YTFormattedStringLabel* _adTitle;
	YTButton* _adVisitSiteButton;
	YTButton* _adChoicesButton;
	char _adChoicesEnabled;
	double _mediaTime;
	double _totalTime;
	double _secondsToSkipAd;
	char _skipButtonEnabled;
	YTIAdPlayerOverlayRenderer* _overlay;
	UIView* _videoEndRendererView;
	YTAnnotationsView* _annotationsView;
	id<YTAdVideoPlayerOverlayViewDelegate> _delegate;

}

@property (nonatomic,readonly) YTIAdPlayerOverlayRenderer * overlay;                              //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) UIView * videoEndRendererView;                                       //@synthesize videoEndRendererView=_videoEndRendererView - In the implementation block
@property (nonatomic,retain) YTAnnotationsView * annotationsView;                                 //@synthesize annotationsView=_annotationsView - In the implementation block
@property (assign,nonatomic,__weak) id<YTAdVideoPlayerOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char skipButtonEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParentResponder:(id)arg1 ;
-(id)thumbnailMappings;
-(void)setMediaTime:(double)arg1 ;
-(void)setPlayerViewLayout:(int)arg1 ;
-(void)setDownloadedTime:(double)arg1 ;
-(void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2 ;
-(void)setAirPlayAllowed:(char)arg1 ;
-(void)setPlaybackInSyncWithLivePlayhead:(char)arg1 ;
-(float)topButtonsXOffset;
-(void)setAnnotationsView:(YTAnnotationsView *)arg1 ;
-(YTAnnotationsView *)annotationsView;
-(void)setNextButtonHidden:(char)arg1 ;
-(float)captionBottomPadding;
-(void)addDidPressAdChannelThumbnailTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeDidPressAdChannelThumbnailTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addDidPressVisitAdSiteTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeDidPressVisitAdSiteTarget:(id)arg1 action:(SEL)arg2 ;
-(id)topRightButtons;
-(void)addDidPressSkipAdTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeDidPressSkipAdTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addDidPressAdChoicesTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeDidPressAdChoicesTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSkipButtonEnabled:(char)arg1 ;
-(void)reloadWithOverlay:(id)arg1 ad:(id)arg2 ;
-(void)setBlackedOut:(char)arg1 ;
-(void)setVideoEndRendererView:(UIView *)arg1 ;
-(void)setVisitAdSiteButtonVisible:(char)arg1 ;
-(void)showMinimizedAdPlayerBarView;
-(void)showAdPlayerBarView;
-(float)preferredTitleHeight;
-(UIView *)videoEndRendererView;
-(id)postAdSkipButton;
-(void)setSkipButtonHidden:(char)arg1 ;
-(void)updateAdChoicesVisibility;
-(void)updateSkipButtonSize;
-(void)setVideoButtonsForLayout:(int)arg1 ;
-(void)updateAdTitleVisibility;
-(void)updateSkipButton;
-(char)isLargeLayout;
-(void)setAdChannelThumbnailVisible:(char)arg1 ;
-(void)setAdTitleVisible:(char)arg1 ;
-(void)setSkipButtonVisible:(char)arg1 ;
-(char)skipButtonEnabled;
-(void)setSecondsToSkipAd:(double)arg1 ;
-(void)setPreviousButtonHidden:(char)arg1 ;
-(void)setDelegate:(id<YTAdVideoPlayerOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<YTAdVideoPlayerOverlayViewDelegate>)delegate;
-(YTIAdPlayerOverlayRenderer *)overlay;
-(void)updateTime;
-(void)setTotalTime:(double)arg1 ;
@end

