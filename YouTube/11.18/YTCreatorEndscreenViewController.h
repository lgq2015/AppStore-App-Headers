/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <YouTube/YTEndscreenElementViewControllerDelegate.h>
#import <YouTube/YTResponder.h>

@protocol YTDataServices, YTEndscreenOverlayDelegate, YTResponder;
@class YTCreatorEndscreenView, PBMutableArray, YTImageService, NSString, NSMutableArray, YTIEndscreenRenderer, YTIEndscreenElementRenderer, YTSubscribeSwitchController;

@interface YTCreatorEndscreenViewController : UIViewController <YTEndscreenElementViewControllerDelegate, YTResponder> {

	YTCreatorEndscreenView* _creatorEndscreenView;
	PBMutableArray* _endscreenElements;
	id<YTDataServices> _dataServices;
	YTImageService* _imageService;
	NSString* _videoId;
	NSMutableArray* _endscreenElementControllers;
	char _endscreenActivated;
	char _endscreenControlsEnabled;
	NSMutableArray* _thumbnailControllers;
	float _aspectRatio;
	YTIEndscreenRenderer* _endscreenRenderer;
	YTIEndscreenElementRenderer* _activeEndscreenElementRenderer;
	YTSubscribeSwitchController* _subscribeSwitchController;
	char _wasPlaying;
	char _hasLoggedImpression;
	int _playerState;
	char _isInlinePlayerActive;
	id<YTEndscreenOverlayDelegate> _endscreenDelegate;
	id<YTResponder> _parentResponder;
	int _playerViewLayout;
	double _mediaTime;

}

@property (assign,nonatomic,__weak) id<YTEndscreenOverlayDelegate> endscreenDelegate;              //@synthesize endscreenDelegate=_endscreenDelegate - In the implementation block
@property (assign,nonatomic) int playerViewLayout;                                                 //@synthesize playerViewLayout=_playerViewLayout - In the implementation block
@property (nonatomic,readonly) YTCreatorEndscreenView * creatorEndscreenView; 
@property (assign,nonatomic) double mediaTime;                                                     //@synthesize mediaTime=_mediaTime - In the implementation block
@property (assign,nonatomic) char isInlinePlayerActive;                                            //@synthesize isInlinePlayerActive=_isInlinePlayerActive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                             //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(void)setMediaTime:(double)arg1 ;
-(void)playerStateDidChangeToState:(int)arg1 ;
-(void)setPlayerViewLayout:(int)arg1 ;
-(int)playerViewLayout;
-(YTCreatorEndscreenView *)creatorEndscreenView;
-(void)setEndscreenDelegate:(id<YTEndscreenOverlayDelegate>)arg1 ;
-(void)playerControlsWillHide;
-(void)playerControlsWillShow;
-(void)userDidStopScrubbing;
-(char)endscreenActivated;
-(id)initWithImageService:(id)arg1 dataServices:(id)arg2 endscreenRenderer:(id)arg3 parentResponder:(id)arg4 aspectRatio:(float)arg5 ;
-(void)setIsInlinePlayerActive:(char)arg1 ;
-(double)mediaTime;
-(char)isInlinePlayerActive;
-(char)hasThumbnailMapping:(id)arg1 ;
-(void)setupEndscreenElements;
-(void)updateEndscreenStatus;
-(void)hideInfoCardsIfNecessary;
-(void)deactivateEndscreen;
-(void)closeHoverCard;
-(void)updateThumbnailMappingsWithMappings:(id)arg1 ;
-(void)executeEndpoint;
-(void)closeHoverCardWithLogging;
-(void)activateEndscreen;
-(char)isThumbnailMappingEmpty:(id)arg1 ;
-(void)playVideo;
-(void)openHovercardWithEndscreenElementRenderer:(id)arg1 ;
-(id<YTEndscreenOverlayDelegate>)endscreenDelegate;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)pauseVideo;
@end

