/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTAutonavPauseControllerDelegate.h>
#import <YouTube/YTResponder.h>
#import <YouTube/YTAutonavEndscreenViewDelegate.h>

@protocol YTPlayerViewControllerConfig, YTResponder, YTAutonavEndscreenControllerDelegate, YTAutonavControllerProtocol;
@class YTImageService, YTLastActionController, YTReachabilityController, YTIPlayerOverlayAutoplayRenderer, YTAutonavBackgroundView, YTAutonavEndscreenView, NSString;

@interface YTAutonavEndscreenController : NSObject <YTAutonavPauseControllerDelegate, YTResponder, YTAutonavEndscreenViewDelegate> {

	char _imageLoaded;
	unsigned _imageRequestID;
	YTImageService* _imageService;
	id<YTPlayerViewControllerConfig> _config;
	YTLastActionController* _lastActionController;
	YTReachabilityController* _reachabilityController;
	char _endscreenActivated;
	char _endscreenWasCancelled;
	YTIPlayerOverlayAutoplayRenderer* _autonavRenderer;
	char _paused;
	id<YTResponder> _parentResponder;
	YTAutonavBackgroundView* _autonavBackgroundView;
	YTAutonavEndscreenView* _autonavEndscreenView;
	id<YTAutonavEndscreenControllerDelegate> _endscreenDelegate;
	id<YTAutonavControllerProtocol> _autonavController;
	double _mediaTime;

}

@property (nonatomic,retain) YTAutonavBackgroundView * autonavBackgroundView;                                //@synthesize autonavBackgroundView=_autonavBackgroundView - In the implementation block
@property (nonatomic,retain) YTAutonavEndscreenView * autonavEndscreenView;                                  //@synthesize autonavEndscreenView=_autonavEndscreenView - In the implementation block
@property (assign,nonatomic) double mediaTime;                                                               //@synthesize mediaTime=_mediaTime - In the implementation block
@property (assign,nonatomic,__weak) id<YTAutonavEndscreenControllerDelegate> endscreenDelegate;              //@synthesize endscreenDelegate=_endscreenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<YTAutonavControllerProtocol> autonavController;                       //@synthesize autonavController=_autonavController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                                       //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(void)pauseAutonavCountdown;
-(void)resumeAutonavCountdown;
-(void)setMediaTime:(double)arg1 ;
-(void)setAutonavController:(id<YTAutonavControllerProtocol>)arg1 ;
-(YTAutonavEndscreenView *)autonavEndscreenView;
-(YTAutonavBackgroundView *)autonavBackgroundView;
-(id)initWithParentResponder:(id)arg1 config:(id)arg2 imageService:(id)arg3 lastActionController:(id)arg4 reachabilityController:(id)arg5 ;
-(void)setEndscreenDelegate:(id<YTAutonavEndscreenControllerDelegate>)arg1 ;
-(void)setAutonavEndscreenView:(YTAutonavEndscreenView *)arg1 ;
-(void)setAutonavBackgroundView:(YTAutonavBackgroundView *)arg1 ;
-(void)didReceivePlayerResponse;
-(void)videoDidFinish;
-(char)endscreenActivated;
-(int)playerControlsBehavior;
-(int)playerControlsVisibility;
-(double)mediaTime;
-(void)didPressPlay;
-(void)didPressCancel;
-(id<YTAutonavControllerProtocol>)autonavController;
-(id<YTAutonavEndscreenControllerDelegate>)endscreenDelegate;
-(char)isAutonavEnabled;
-(void)showEndscreen;
-(void)hideEndscreen;
-(char)shouldShowEndscreen;
-(char)isUserInactive;
-(void)showEndscreenControlsInPlayerBar:(char)arg1 ;
-(void)loadImageIfNeeded;
-(void)countDownCompleted;
@end

