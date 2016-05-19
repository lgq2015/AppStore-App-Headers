/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MDXScreenSessionObserver.h>
#import <YouTube/MDXAutoplayViewDelegate.h>

@protocol YTDataServices;
@class MDXScreenSession, NSHashTable, YTIPlaylistPanelVideoRenderer, NSMutableArray, NSString;

@interface MDXAutoplayCoordinator : NSObject <MDXScreenSessionObserver, MDXAutoplayViewDelegate> {

	MDXScreenSession* _screenSession;
	id<YTDataServices> _dataServices;
	NSHashTable* _views;
	int _mode;
	char _modeSwitchEnabled;
	YTIPlaylistPanelVideoRenderer* _upNextRenderer;
	int _state;
	unsigned _playerRequestID;
	NSMutableArray* _thumbnailControllers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAllViews;
-(void)updateUpNextRenderer:(id)arg1 ;
-(void)resetUpNextRenderer;
-(void)updateAutoplayStateForAllViews;
-(void)updateAutoplayModeSwitchForAllViews;
-(void)reenableSwitchAllViews;
-(void)updateAutoplayModeForAllViews;
-(void)updateThumbnailForAllViews;
-(void)updateViewAutoplayMode:(id)arg1 ;
-(void)updateViewAutoplayModeSwitchEnabled:(id)arg1 ;
-(void)updateViewThumbnail:(id)arg1 ;
-(void)updateViewAutoplayState:(id)arg1 ;
-(void)MDXAutoplayStateDidChange:(int)arg1 ;
-(void)MDXAutoplayModeDidChange:(int)arg1 ;
-(void)MDXAutoplayUpNextWithVideoID:(id)arg1 ;
-(void)didSwitchAutoplayEnabledForTV:(char)arg1 ;
-(void)didSelectAutoplayVideo;
-(void)didTapDismissAutoplay;
-(id)initWithMDXScreenSession:(id)arg1 dataServices:(id)arg2 ;
-(void)registerAutoplayView:(id)arg1 ;
-(void)reset;
@end

