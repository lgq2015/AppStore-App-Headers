/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTPlayerOverlayViewController.h>
#import <YouTube/YTOfflineModeObserver.h>
#import <YouTube/YTOverflowMenuViewControllerDelegate.h>
#import <YouTube/YTPlaybackRouteButtonVisibilityObserver.h>
#import <YouTube/YTAudioTrackSwitchUIObserver.h>
#import <YouTube/YTCaptionControllerDelegate.h>
#import <YouTube/YTInfoCardDrawerOverlayDelegate.h>
#import <YouTube/YTPlayerViewLayoutProtocol.h>
#import <YouTube/YTVideoPlayerOverlayProtocol.h>
#import <YouTube/YTVideoQualitySwitchUIObserver.h>

@protocol YTCaptionControllerProtocol, YTCaptionsVisibilityResponderProvider, YTInfoCardDrawerOverlayProtocol, YTInfoCardTeaserOverlayProtocol, YTOfflineModeProvider, YTOfflineTracklistCaptionProvider, YTVideoPlayerOverlayDelegate, MLPlayerCaptionProtocol, YTNerdStatsVideoDataProtocol, YTPlayerServices, YTDataServices, YTVideoPlayerOverlayConfig;
@class YTCaptionTrack, YTCaptionOverlayViewController, UIViewController, NSError, YTVEVisibilityUpdateResponderEventGate, YTIMenuRenderer, YTOverflowMenuViewController, YTPlayerResponse, YTNerdStatsOverlayViewController, YTVideoPlayerOverlayView, NSString;

@interface YTVideoPlayerOverlayViewController : YTPlayerOverlayViewController <YTOfflineModeObserver, YTOverflowMenuViewControllerDelegate, YTPlaybackRouteButtonVisibilityObserver, YTAudioTrackSwitchUIObserver, YTCaptionControllerDelegate, YTInfoCardDrawerOverlayDelegate, YTPlayerViewLayoutProtocol, YTVideoPlayerOverlayProtocol, YTVideoQualitySwitchUIObserver> {

	id<YTCaptionControllerProtocol> _captionController;
	YTCaptionOverlayViewController* _captionOverlayViewController;
	id<YTCaptionsVisibilityResponderProvider> _captionsVisibilityResponderProvider;
	UIViewController*<YTInfoCardDrawerOverlayProtocol> _infoCardDrawerViewController;
	UIViewController*<YTInfoCardTeaserOverlayProtocol> _infoCardTeaserViewController;
	NSError* _error;
	char _playerControlsHidden;
	YTVEVisibilityUpdateResponderEventGate* _visibilityUpdateGate;
	char _interactionLoggingInitialized;
	YTIMenuRenderer* _videoReportingMenuRenderer;
	id<YTOfflineModeProvider> _offlineModeProvider;
	id<YTOfflineTracklistCaptionProvider> _offlineTracklistCaptionProvider;
	char _captionsActive;
	unsigned _thumbnailRequestID;
	char _playlistControlsHidden;
	char _hasPreviousVideo;
	char _hasNextVideo;
	char _userScrubbing;
	char _disallowQualitySwitch;
	char _externalPlaybackActive;
	char _MDXPlaybackActive;
	char _showSpinnerOnScrubbing;
	id<YTVideoPlayerOverlayDelegate> _delegate;
	int _foregroundAudioOnlyPlaybackReason;
	int _videoControlsBehavior;
	int _videoControlsVisibility;
	id<MLPlayerCaptionProtocol> _playerCaptionDelegate;
	id<YTNerdStatsVideoDataProtocol> _nerdStatsVideoData;
	id<YTPlayerServices> _playerServices;
	id<YTDataServices> _dataServices;
	id<YTVideoPlayerOverlayConfig> _overlayConfig;
	YTOverflowMenuViewController* _overflowMenuViewController;
	int _playerState;
	YTPlayerResponse* _playerResponse;
	YTNerdStatsOverlayViewController* _nerdStatsOverlayViewController;
	double _mediaTime;
	double _downloadedTime;

}

@property (nonatomic,readonly) id<YTPlayerServices> playerServices;                                            //@synthesize playerServices=_playerServices - In the implementation block
@property (nonatomic,readonly) id<YTDataServices> dataServices;                                                //@synthesize dataServices=_dataServices - In the implementation block
@property (nonatomic,readonly) id<YTVideoPlayerOverlayConfig> overlayConfig;                                   //@synthesize overlayConfig=_overlayConfig - In the implementation block
@property (nonatomic,retain) YTOverflowMenuViewController * overflowMenuViewController;                        //@synthesize overflowMenuViewController=_overflowMenuViewController - In the implementation block
@property (assign,nonatomic) int playerState;                                                                  //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,readonly) YTPlayerResponse * playerResponse;                                              //@synthesize playerResponse=_playerResponse - In the implementation block
@property (assign,nonatomic) double mediaTime;                                                                 //@synthesize mediaTime=_mediaTime - In the implementation block
@property (assign,nonatomic) double downloadedTime;                                                            //@synthesize downloadedTime=_downloadedTime - In the implementation block
@property (assign,nonatomic) char showSpinnerOnScrubbing;                                                      //@synthesize showSpinnerOnScrubbing=_showSpinnerOnScrubbing - In the implementation block
@property (assign,nonatomic) int videoControlsBehavior;                                                        //@synthesize videoControlsBehavior=_videoControlsBehavior - In the implementation block
@property (assign,nonatomic) int videoControlsVisibility;                                                      //@synthesize videoControlsVisibility=_videoControlsVisibility - In the implementation block
@property (getter=isReadyToAnimate,nonatomic,readonly) char readyToAnimate; 
@property (nonatomic,readonly) YTVideoPlayerOverlayView * videoPlayerOverlayView; 
@property (nonatomic,readonly) YTNerdStatsOverlayViewController * nerdStatsOverlayViewController;              //@synthesize nerdStatsOverlayViewController=_nerdStatsOverlayViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTPlayerOverlayDelegate> delegate; 
@property (assign,nonatomic,__weak) id<MLPlayerCaptionProtocol> playerCaptionDelegate;                         //@synthesize playerCaptionDelegate=_playerCaptionDelegate - In the implementation block
@property (assign,getter=arePlaylistControlsHidden,nonatomic) char playlistControlsHidden;                     //@synthesize playlistControlsHidden=_playlistControlsHidden - In the implementation block
@property (assign,nonatomic) char hasPreviousVideo;                                                            //@synthesize hasPreviousVideo=_hasPreviousVideo - In the implementation block
@property (assign,nonatomic) char hasNextVideo;                                                                //@synthesize hasNextVideo=_hasNextVideo - In the implementation block
@property (assign,getter=isUserScrubbing,nonatomic) char userScrubbing;                                        //@synthesize userScrubbing=_userScrubbing - In the implementation block
@property (nonatomic,readonly) YTCaptionTrack * activeCaptionTrack; 
@property (assign,nonatomic) int foregroundAudioOnlyPlaybackReason;                                            //@synthesize foregroundAudioOnlyPlaybackReason=_foregroundAudioOnlyPlaybackReason - In the implementation block
@property (assign,nonatomic) char disallowQualitySwitch;                                                       //@synthesize disallowQualitySwitch=_disallowQualitySwitch - In the implementation block
@property (assign,nonatomic) char externalPlaybackActive;                                                      //@synthesize externalPlaybackActive=_externalPlaybackActive - In the implementation block
@property (nonatomic,retain) id<YTNerdStatsVideoDataProtocol> nerdStatsVideoData;                              //@synthesize nerdStatsVideoData=_nerdStatsVideoData - In the implementation block
@property (assign,nonatomic) char MDXPlaybackActive;                                                           //@synthesize MDXPlaybackActive=_MDXPlaybackActive - In the implementation block
-(char)hasNextVideo;
-(char)hasPreviousVideo;
-(void)offlineModeDidChange;
-(id<YTDataServices>)dataServices;
-(YTPlayerResponse *)playerResponse;
-(id<YTPlayerServices>)playerServices;
-(void)setMediaTime:(double)arg1 ;
-(void)showCaptionTrackPickerFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(id)newCaptionControllerWithPlayerData:(id)arg1 ;
-(void)activeCaptionTrackDidChange:(id)arg1 ;
-(void)playerStateDidChangeToState:(int)arg1 ;
-(void)captionTrackPickerDidFailWithError:(id)arg1 message:(id)arg2 ;
-(void)didLoadFormat3Captions:(id)arg1 ;
-(void)setUserVisibleCaptionsSelected:(char)arg1 ;
-(void)setCaptionsActive:(char)arg1 ;
-(void)setCaptionsAvailable:(char)arg1 ;
-(void)setPlayerResponse:(YTPlayerResponse *)arg1 ;
-(void)resetAndShowLoading:(char)arg1 ;
-(void)playerDidFailWithError:(id)arg1 ;
-(void)showPlayerControlsAnimated:(char)arg1 ;
-(void)hidePlayerControls;
-(char)arePlayerControlsHidden;
-(char)isContentPanAllowed;
-(void)didTriggerInfoCardsWithActiveCard:(id)arg1 ;
-(void)setRemoteScreenName:(id)arg1 ;
-(void)setExternalPlaybackLabel:(id)arg1 ;
-(void)setOverflowCardboardButtonAvailable:(char)arg1 ;
-(void)setOverflowCardboardButtonHidden:(char)arg1 ;
-(id<MLPlayerCaptionProtocol>)playerCaptionDelegate;
-(void)setPlayerCaptionDelegate:(id<MLPlayerCaptionProtocol>)arg1 ;
-(char)arePlaylistControlsHidden;
-(void)setPlaylistControlsHidden:(char)arg1 ;
-(void)setHasPreviousVideo:(char)arg1 ;
-(void)setHasNextVideo:(char)arg1 ;
-(char)isUserScrubbing;
-(void)setUserScrubbing:(char)arg1 ;
-(YTCaptionTrack *)activeCaptionTrack;
-(int)foregroundAudioOnlyPlaybackReason;
-(void)setForegroundAudioOnlyPlaybackReason:(int)arg1 ;
-(char)disallowQualitySwitch;
-(void)setDisallowQualitySwitch:(char)arg1 ;
-(char)externalPlaybackActive;
-(id<YTNerdStatsVideoDataProtocol>)nerdStatsVideoData;
-(void)setNerdStatsVideoData:(id<YTNerdStatsVideoDataProtocol>)arg1 ;
-(char)MDXPlaybackActive;
-(void)setMDXPlaybackActive:(char)arg1 ;
-(void)setPlayerViewLayout:(int)arg1 ;
-(void)setDownloadedTime:(double)arg1 ;
-(void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2 ;
-(void)setAirPlayAllowed:(char)arg1 ;
-(void)setPlaybackInSyncWithLivePlayhead:(char)arg1 ;
-(void)playerCaptionOptionsDidChange:(id)arg1 ;
-(void)playbackRouteButtonVisibilityDidChange;
-(id)initWithPlayerServices:(id)arg1 dataServices:(id)arg2 offlineModeProvider:(id)arg3 offlineTracklistCaptionProvider:(id)arg4 overlayConfig:(id)arg5 parentResponder:(id)arg6 ;
-(void)setVideoControlsVisibility:(int)arg1 ;
-(void)updateThumbnailPlaceholderFromPlayerResponse;
-(void)resetPlaceholder;
-(void)updateVideoControlsBehavior;
-(void)updateControlsVisibilityOnBackgroundTap;
-(void)playerControlsDidHide;
-(void)playerControlsWillHide;
-(void)playerControlsWillShow;
-(int)videoControlsVisibility;
-(void)userDidStopScrubbing;
-(int)defaultVideoControlsVisibility;
-(int)defaultVideoControlsBehavior;
-(void)setVideoControlsBehavior:(int)arg1 ;
-(void)setShowSpinnerOnScrubbing:(char)arg1 ;
-(void)drawerDidClose;
-(double)mediaTime;
-(void)updateVideoControlsVisibility;
-(char)handlePlaybackInfoCardsTeaserClickEvent:(id)arg1 ;
-(void)didPressPlay;
-(void)didPressPause;
-(void)didPressReplay;
-(void)updatePlayerControlsVisibility;
-(void)didPressOverflow:(id)arg1 ;
-(char)isReadyToAnimate;
-(void)performVoidBlock:(/*^block*/id)arg1 ;
-(void)drawerWillOpen;
-(void)drawerDidOpen;
-(void)drawerWillClose;
-(void)audioTrackDidChange:(id)arg1 ;
-(char)handleNavigationEvent:(id)arg1 ;
-(void)setVideoQualityAvailable:(char)arg1 ;
-(void)setVideoQualityEnabled:(char)arg1 ;
-(void)videoQualitySwitchDidFail:(id)arg1 ;
-(void)didPressNext;
-(void)didPressPrevious;
-(double)downloadedTime;
-(char)interactionLoggingInitialized;
-(YTVideoPlayerOverlayView *)videoPlayerOverlayView;
-(void)didTapBackground:(id)arg1 ;
-(void)didPressSpinner;
-(void)updateViewWithLayout;
-(void)loadNerdStatsOverlay;
-(void)clearFormat3Captions;
-(void)initializeInteractionLogging;
-(void)setInfoCardControllerWithPlayerData:(id)arg1 ;
-(void)unloadNerdStatsOverlay;
-(void)updateAccessibilityText;
-(char)isErrorRecoverable:(id)arg1 ;
-(void)animatePlayerControlsToHidden:(char)arg1 animationDuration:(double)arg2 afterDelay:(double)arg3 ;
-(void)didPressClosedCaptions:(id)arg1 ;
-(void)didPressVideoQuality:(id)arg1 ;
-(void)playerControlsDidShow;
-(void)updateOverflowMenu;
-(void)didPressReportIssue:(id)arg1 ;
-(void)didPressCloseOverflowMenu:(id)arg1 ;
-(void)didPressAudioTrackSwitch:(id)arg1 ;
-(void)didPressNerdStats:(id)arg1 ;
-(void)overflowMenuWillDismiss;
-(void)didPressCardboard:(id)arg1 ;
-(void)resetAutoHideTimer;
-(int)videoControlsBehavior;
-(id<YTVideoPlayerOverlayConfig>)overlayConfig;
-(YTOverflowMenuViewController *)overflowMenuViewController;
-(void)setOverflowMenuViewController:(YTOverflowMenuViewController *)arg1 ;
-(char)showSpinnerOnScrubbing;
-(YTNerdStatsOverlayViewController *)nerdStatsOverlayViewController;
-(void)setDelegate:(id<YTPlayerOverlayDelegate>)arg1 ;
-(void)dealloc;
-(id<YTPlayerOverlayDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)setTotalTime:(double)arg1 ;
-(void)setCurrentAudioTrack:(id)arg1 ;
-(int)playerState;
-(char)isFullscreen;
-(void)setExternalPlaybackActive:(char)arg1 ;
-(void)setPlayerState:(int)arg1 ;
@end

