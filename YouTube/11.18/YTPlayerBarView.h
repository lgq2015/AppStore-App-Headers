/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>
#import <YouTube/YTStoryboardControllerDelegate.h>
#import <YouTube/YTPlayerScrubberProtocol.h>
#import <YouTube/YTAirPlayViewDelegate.h>
#import <YouTube/YTResponder.h>

@protocol YTPlayerBarViewDelegate, YTPlayerBarViewResourcesProtocol, YTResponder;
@class UIButton, YTButton, YTAirPlayView, UILabel, UISlider, YTPlayerBarMarkerView, YTStoryboardFrameView, NSString;

@interface YTPlayerBarView : UIView <YTStoryboardControllerDelegate, YTPlayerScrubberProtocol, YTAirPlayViewDelegate, YTResponder> {

	UIButton* _playPauseReplayButton;
	UIButton* _nextButton;
	UIButton* _liveSyncButton;
	UIButton* _fullscreenButton;
	YTButton* _adChoicesButton;
	char _adChoicesEnabled;
	YTButton* _cardboardButton;
	YTAirPlayView* _airPlayView;
	UILabel* _secondsPlayedLabel;
	UILabel* _totalSecondsLabel;
	UILabel* _adSecondsLabel;
	UISlider* _scrubber;
	UISlider* _playingProgress;
	UISlider* _downloadingProgress;
	YTPlayerBarMarkerView* _adMarkerView;
	YTStoryboardFrameView* _storyboardFrameView;
	double _totalSeconds;
	double _mediaTime;
	double _downloadedSeconds;
	double _minimumSeekableTime;
	double _maximumSeekableTime;
	char _isAirPlayVisible;
	char _storyboardEnabled;
	char _userScrubbing;
	char _playing;
	char _finished;
	int _mode;
	id<YTPlayerBarViewDelegate> _delegate;
	id<YTPlayerBarViewResourcesProtocol> _playerBarViewResources;
	char _needsAcceleratedBufferingAnimation;
	char _hasAcceleratedPlayerBar;
	id<YTResponder> _parentResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(void)setFullscreenButtonHidden:(char)arg1 ;
-(void)updateScrubberAndTime;
-(void)setMediaTime:(double)arg1 ;
-(void)setPlayerBarEnabled:(char)arg1 ;
-(void)setMarkers:(id)arg1 ;
-(void)setHasAcceleratedPlayerBar:(char)arg1 ;
-(void)setDownloadedTime:(double)arg1 ;
-(void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2 ;
-(void)setAirPlayAllowed:(char)arg1 ;
-(void)setPlaybackInSyncWithLivePlayhead:(char)arg1 ;
-(void)setStoryboardEnabled:(char)arg1 ;
-(void)resizeStoryboardFrameForHeight:(float)arg1 ;
-(void)setIsPlaying:(char)arg1 ;
-(void)setPlayPauseReplayButtonHidden:(char)arg1 ;
-(void)setNextButtonHidden:(char)arg1 ;
-(void)setSecondsPlayedLabelHidden:(char)arg1 ;
-(void)setPlayerBarVisible:(char)arg1 forceFullscreenButtonVisible:(char)arg2 ;
-(void)showFullscreenButton;
-(void)showSmallscreenButton;
-(void)setCardboardEnabled:(char)arg1 ;
-(void)didPressToggleFullscreen:(id)arg1 ;
-(void)didPressLiveSync:(id)arg1 ;
-(void)setStoryboardFrame:(id)arg1 ;
-(void)visibilityDidChange;
-(void)addDidPressAdChoicesTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeDidPressAdChoicesTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAdChoicesEnabled:(char)arg1 ;
-(id)initWithParentResponder:(id)arg1 playerBarViewResources:(id)arg2 ;
-(id)playerBarLabelsColorWithEnabled:(char)arg1 ;
-(id)playerButtonWithImage:(id)arg1 action:(SEL)arg2 accessibilityLabel:(id)arg3 ;
-(void)didTogglePlayPauseReplay:(id)arg1 ;
-(void)didPressPlayerBarNext:(id)arg1 ;
-(void)didPressCardboardButton:(id)arg1 ;
-(void)layoutProgressBar;
-(void)updateAirPlayButtonVisibility;
-(id)durationStringWithSeconds:(double)arg1 ;
-(CGPoint)scrubberPosition;
-(void)initScrubberWithMode:(int)arg1 ;
-(void)updatePlayPauseReplayButtonState;
-(float)playerBarAlphaWithEnabled:(char)arg1 ;
-(char)onlyFullscreenButtonVisible;
-(CGRect)progressBarRect;
-(void)didScrubbingProgress:(id)arg1 ;
-(void)didScrubbingStart:(id)arg1 ;
-(void)didScrubbingEnd:(id)arg1 ;
-(void)enableScrubber;
-(void)disableScrubber;
-(void)addAdChoicesIcon;
-(id)scrubber;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMode:(int)arg1 ;
-(void)setFinished:(char)arg1 ;
-(void)setTotalTime:(double)arg1 ;
-(void)updateSubviewVisibility;
@end

