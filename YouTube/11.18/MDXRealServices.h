/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MDXServices.h>

@protocol YTDataServices, YTPlayerServices, MLServices, YTPlayerOfflineServices, MDXConfig, YTMenuItemVisibilityController, YTPlaybackRouteButtonController, YTPlaybackCoordinator, YTResponder;
@class MDXScreenManager, MDXWatchNextEndpointDecorator, MDXAppStateRecorder, GIMMe, NSString;

@interface MDXRealServices : NSObject <MDXServices> {

	id<YTDataServices> _dataServices;
	id<YTPlayerServices> _playerServices;
	id<MLServices> _mediaServices;
	id<YTPlayerOfflineServices> _playerOfflineServices;
	id<MDXConfig> _MDXConfig;
	MDXScreenManager* _screenManager;
	MDXWatchNextEndpointDecorator* _watchNextEndpointDecorator;
	id<YTMenuItemVisibilityController> _menuItemVisibilityController;
	MDXAppStateRecorder* _appStateRecorder;
	id<YTPlaybackRouteButtonController> _playbackRouteButtonController;
	id<YTPlaybackCoordinator> _playbackCoordinator;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GIMMe *)gimme;
-(void)setLogApiaryRequests:(char)arg1 ;
-(void)setServerEnvironment:(int)arg1 ;
-(id)menuItemVisibilityController;
-(id)playbackRouteButtonController;
-(void)setGimme:(GIMMe *)arg1 ;
-(id)screenManager;
-(id)watchNextEndpointDecorator;
-(id)appStateRecorder;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)shutdown;
-(id)playbackCoordinator;
@end

