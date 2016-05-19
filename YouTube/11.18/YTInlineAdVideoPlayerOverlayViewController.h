/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/YTVideoPlayerOverlayViewController.h>
#import <YouTube/YTAdVideoEndRendererDelegate.h>
#import <YouTube/YTInlinePlayerBarViewDelegate.h>
#import <YouTube/YTAdVideoPlayerOverlayProtocol.h>

@protocol YTInstreamAd, YTInlinePlaybackSnapshotProvider, YTAdVideoPlayerOverlayDelegate;
@class YTAnnotationsViewController, YTIAdPlayerOverlayRenderer, NSMutableArray, YTAdVideoEndRendererViewController, YTInlineAdShrinkingOverlayView, YTInlineAdPlaybackOverlayView, NSString, YTCaptionTrack;

@interface YTInlineAdVideoPlayerOverlayViewController : YTVideoPlayerOverlayViewController <YTAdVideoEndRendererDelegate, YTInlinePlayerBarViewDelegate, YTAdVideoPlayerOverlayProtocol> {

	YTAnnotationsViewController* _annotationsViewController;
	id<YTInstreamAd> _ad;
	char _readyToPlay;
	YTIAdPlayerOverlayRenderer* _adPlayerOverlayRenderer;
	NSMutableArray* _thumbnailControllers;
	char _hasInfoCards;
	unsigned _watchNextRequestID;
	unsigned _thumbnailRequestID;
	YTAdVideoEndRendererViewController* _adVideoEndRendererViewController;
	double _secondsToSkipAd;
	char _skipAdEnabled;
	char _adMessageShown;
	char _adControlsHidden;
	int _layout;
	id<YTInlinePlaybackSnapshotProvider> _snapshotProvider;
	YTInlineAdShrinkingOverlayView* _shrinkingView;
	char _shouldShrink;
	char _hasShrunk;
	float _shrinkOffsetX;
	float _shrinkOffsetY;
	double _mediaTime;
	char _controlsHiddenBeforeModal;
	char _canSkip;
	char _skipAdAnnounced;
	id<YTAdVideoPlayerOverlayDelegate> _delegate;

}

@property (nonatomic,readonly) YTInlineAdPlaybackOverlayView * playbackView; 
@property (assign,nonatomic) char controlsHiddenBeforeModal;                                            //@synthesize controlsHiddenBeforeModal=_controlsHiddenBeforeModal - In the implementation block
@property (assign,nonatomic) char canSkip;                                                              //@synthesize canSkip=_canSkip - In the implementation block
@property (assign,nonatomic) char skipAdAnnounced;                                                      //@synthesize skipAdAnnounced=_skipAdAnnounced - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTPlayerOverlayDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder; 
@property (assign,nonatomic,__weak) id<MLPlayerCaptionProtocol> playerCaptionDelegate; 
@property (assign,getter=arePlaylistControlsHidden,nonatomic) char playlistControlsHidden; 
@property (assign,nonatomic) char hasPreviousVideo; 
@property (assign,nonatomic) char hasNextVideo; 
@property (assign,getter=isUserScrubbing,nonatomic) char userScrubbing; 
@property (nonatomic,readonly) YTCaptionTrack * activeCaptionTrack; 
@property (assign,nonatomic) int foregroundAudioOnlyPlaybackReason; 
@property (assign,nonatomic) char disallowQualitySwitch; 
@property (assign,nonatomic) char externalPlaybackActive; 
@property (nonatomic,retain) id<YTNerdStatsVideoDataProtocol> nerdStatsVideoData; 
@property (assign,nonatomic) char MDXPlaybackActive; 
-(void)loadWithModel:(id)arg1 ;
-(void)setContentVideoID:(id)arg1 ;
-(void)setAd:(id)arg1 ;
-(void)setCompanionAd:(id)arg1 ;
-(void)setMediaTime:(double)arg1 ;
-(void)playerStateDidChangeToState:(int)arg1 ;
-(void)setPlayerResponse:(id)arg1 ;
-(void)resetAndShowLoading:(char)arg1 ;
-(void)setPlaylistControlsHidden:(char)arg1 ;
-(void)setHasPreviousVideo:(char)arg1 ;
-(void)setHasNextVideo:(char)arg1 ;
-(void)setInlinePlaybackLayout:(int)arg1 ;
-(void)setPlayerViewLayout:(int)arg1 ;
-(void)setDownloadedTime:(double)arg1 ;
-(void)setAirPlayAllowed:(char)arg1 ;
-(void)setControlsHiddenBeforeModal:(char)arg1 ;
-(void)playerControlsWillHide;
-(void)playerControlsWillShow;
-(void)setAnnotationsViewController:(id)arg1 ;
-(char)controlsHiddenBeforeModal;
-(void)loadThumbnails;
-(id)initWithPlayerServices:(id)arg1 dataServices:(id)arg2 snapshotProvider:(id)arg3 offlineModeProvider:(id)arg4 offlineTracklistCaptionProvider:(id)arg5 overlayConfig:(id)arg6 parentResponder:(id)arg7 ;
-(YTInlineAdPlaybackOverlayView *)playbackView;
-(void)didPressSkipAd:(id)arg1 forEvent:(id)arg2 ;
-(void)didPressAdChannelThumbnail:(id)arg1 forEvent:(id)arg2 ;
-(void)didPressAdVisitSite:(id)arg1 forEvent:(id)arg2 ;
-(void)didPressAdChoices:(id)arg1 forEvent:(id)arg2 ;
-(void)didTap:(id)arg1 ;
-(void)updateAdControls;
-(char)canShrink;
-(void)shrinkView;
-(void)updateMDXAdThumbnailIfNeeded;
-(void)updateAnnotationsViewControllerSettings;
-(void)propagatePlayerState:(int)arg1 ;
-(void)didPressOverflow:(id)arg1 ;
-(CGPoint)touchPointWithSender:(id)arg1 event:(id)arg2 ;
-(void)animateAdControlsToHidden:(char)arg1 afterDelay:(double)arg2 ;
-(char)isReadyToAnimate;
-(void)performVoidBlock:(/*^block*/id)arg1 ;
-(void)showAdControlsAnimated;
-(void)didPressEnterFullscreen;
-(void)didPressExitFullscreen;
-(char)handleServiceEndpointEvent:(id)arg1 ;
-(char)canSkip;
-(void)setCanSkip:(char)arg1 ;
-(char)skipAdAnnounced;
-(void)setSkipAdAnnounced:(char)arg1 ;
-(void)completedWithController:(id)arg1 ;
-(void)setDelegate:(id<YTPlayerOverlayDelegate>)arg1 ;
-(void)dealloc;
-(id<YTPlayerOverlayDelegate>)delegate;
-(void)stop;
-(void)loadView;
-(void)start;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setTotalTime:(double)arg1 ;
-(void)updateMetadata;
-(void)resetThumbnails;
-(char)isFullscreen;
@end

