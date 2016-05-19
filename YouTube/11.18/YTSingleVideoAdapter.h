/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTAdVideoPlayerOverlayDelegate.h>
#import <YouTube/YTContentVideoPlayerOverlayDelegate.h>
#import <YouTube/YTSystemNotificationsObserver.h>
#import <YouTube/YTVideoQualitySwitchDelegate.h>
#import <YouTube/MLPlayerDelegate.h>
#import <YouTube/YTPlayerViewDelegate.h>
#import <YouTube/YTResponder.h>

@protocol YTPlayerServices, YTDataServices, YTPlayerViewControllerConfig, YTPlayerOverlayFactory, MLExternalPlayerProtocol, YTContentVideoPlayerOverlayProtocol, YTAdVideoPlayerOverlayProtocol, YTVideoPlayerOverlayProtocol, YTResponder, YTSingleVideoAdapterDelegate;
@class YTPlayerView, MLPlayerPool, UIViewController, YTSingleVideoPlayer, YTAudioSession, YTBackgroundabilityPolicy, YTAudioTrackSwitchController, YTVideoQualitySwitchController, NSString;

@interface YTSingleVideoAdapter : NSObject <YTAdVideoPlayerOverlayDelegate, YTContentVideoPlayerOverlayDelegate, YTSystemNotificationsObserver, YTVideoQualitySwitchDelegate, MLPlayerDelegate, YTPlayerViewDelegate, YTResponder> {

	YTPlayerView* _playerView;
	id<YTPlayerServices> _playerServices;
	id<YTDataServices> _dataServices;
	id<YTPlayerViewControllerConfig> _config;
	MLPlayerPool* _playerPool;
	UIViewController* _parentViewController;
	id<YTPlayerOverlayFactory> _playerOverlayFactory;
	YTSingleVideoPlayer* _contentSingleVideoPlayer;
	YTSingleVideoPlayer* _adSingleVideoPlayer;
	YTSingleVideoPlayer* _activeSingleVideoPlayer;
	id<MLExternalPlayerProtocol> _externalPlayer;
	YTAudioSession* _audioSession;
	YTBackgroundabilityPolicy* _backgroundabilityPolicy;
	char _hasFocus;
	char _startPlayback;
	UIViewController*<YTContentVideoPlayerOverlayProtocol> _contentVideoPlayerOverlay;
	UIViewController*<YTAdVideoPlayerOverlayProtocol> _adVideoPlayerOverlay;
	UIViewController*<YTVideoPlayerOverlayProtocol> _activeVideoPlayerOverlay;
	int _playerViewLayout;
	float _expansionCoefficient;
	double _seekTime;
	char _userScrubbing;
	char _transitioningPlayerViewLayout;
	id<YTResponder> _parentResponder;
	YTAudioTrackSwitchController* _audioTrackController;
	YTVideoQualitySwitchController* _videoQualityController;
	id<YTSingleVideoAdapterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<YTSingleVideoAdapterDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) YTAudioTrackSwitchController * audioTrackController;                  //@synthesize audioTrackController=_audioTrackController - In the implementation block
@property (nonatomic,readonly) YTVideoQualitySwitchController * videoQualityController;              //@synthesize videoQualityController=_videoQualityController - In the implementation block
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                               //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(void)appWillResignActive:(id)arg1 ;
-(void)activeCaptionTrackDidChange:(id)arg1 ;
-(char)isContentPanAllowed;
-(void)setHasPreviousVideo:(char)arg1 ;
-(void)setHasNextVideo:(char)arg1 ;
-(void)setExpansionCoefficient:(float)arg1 ;
-(void)setPlayerViewLayout:(int)arg1 ;
-(int)playerViewLayout;
-(void)showAddToMenuFromView:(id)arg1 ;
-(void)didStartScrubbing;
-(void)didEndScrubbing;
-(void)didPressToggleFullscreen;
-(void)didPressLiveSync;
-(void)didTogglePlayPause;
-(void)didPressPlayerBarNext;
-(void)didPressPlay;
-(void)didPressPause;
-(void)didPressReplay;
-(void)didScrubToTime:(double)arg1 ;
-(void)setTransitioningPlayerViewLayout:(char)arg1 ;
-(void)currentMediaTimeDidChangeToTime:(double)arg1 ;
-(void)makeWatchNextRequestWithAd:(id)arg1 forController:(id)arg2 ;
-(id)contentVideoThumbnails;
-(id)contentVideoTitle;
-(YTAudioTrackSwitchController *)audioTrackController;
-(YTVideoQualitySwitchController *)videoQualityController;
-(void)didShowSkipAd;
-(void)didPressSkipAdWithTouchPoint:(CGPoint)arg1 ;
-(void)didPressAdThumbnail;
-(void)didPressAdVisitSiteWithTouchPoint:(CGPoint)arg1 ;
-(char)isCurrentAdBreakPreroll;
-(void)adDidFinish;
-(id)initWithPlayerServices:(id)arg1 dataServices:(id)arg2 config:(id)arg3 playerView:(id)arg4 playerPool:(id)arg5 playerOverlayFactory:(id)arg6 parentViewController:(id)arg7 parentResponder:(id)arg8 ;
-(void)willLoseFocus;
-(double)currentVideoMediaTimeWithFinishedAsZero:(char)arg1 ;
-(void)didGainFocus;
-(void)resetToLoading:(char)arg1 ;
-(void)loadWithContentPlayerResponse:(id)arg1 initialMediaTime:(double)arg2 externalPlayer:(id)arg3 ;
-(void)loadWithAdPlayerResponse:(id)arg1 initialMediaTime:(double)arg2 instreamAd:(id)arg3 externalPlayer:(id)arg4 ;
-(void)playerStateDidChangeToPlaying;
-(void)setUserAudioOnlyModeActive:(char)arg1 ;
-(id)activeVideoPlayerOverlay;
-(id)adVideoPlayerOverlay;
-(void)playerStateDidChangeToReadyToPlay;
-(void)playerStateDidChangeToPaused;
-(void)playerStateDidChangeToFinished;
-(void)playerStateDidChangeToLoadingContent;
-(void)playerStateDidChangeToError;
-(id)playerViewportSize;
-(void)stateDidChangeFromState:(int)arg1 toState:(int)arg2 ;
-(void)reloadPlayerAndStartPlayback:(char)arg1 ;
-(void)videoQualitySwitchDidSelectFormatConstraint:(id)arg1 ;
-(void)bufferedMediaTimeDidChangeToTime:(double)arg1 ;
-(void)seekableTimeRangeDidChangeToMinimumTime:(double)arg1 maximumTime:(double)arg2 ;
-(void)playerHasSelectableFormats:(id)arg1 ;
-(void)playerDidSelectVideoFormat:(id)arg1 audioFormat:(id)arg2 percentCached:(float)arg3 ;
-(void)playerForegroundAudioOnlyPlaybackReasonDidChange:(int)arg1 ;
-(char)canReloadStreamingData;
-(void)reloadStreamingDataAndStartPlayback:(char)arg1 ;
-(id)selectedVideoFormat;
-(void)viewportSizeDidChange;
-(void)playerViewDidPinchToSmallscreen;
-(void)playerViewDidPinchToFullscreen;
-(void)activateOverlayWithoutUpdatingView:(id)arg1 ;
-(void)resetActivePlayer;
-(void)selectVideoOnlyStreamForPlayer:(id)arg1 ;
-(void)activatePlayer:(id)arg1 ;
-(void)clearActiveOverlay;
-(id)activeSingleVideoPlayer;
-(id)contentSingleVideoPlayer;
-(id)adSingleVideoPlayer;
-(void)updateOverlayView;
-(void)setDelegate:(id<YTSingleVideoAdapterDelegate>)arg1 ;
-(void)dealloc;
-(id<YTSingleVideoAdapterDelegate>)delegate;
-(void)reset;
-(void)setExternalPlaybackActive:(char)arg1 ;
@end

