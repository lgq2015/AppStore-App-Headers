/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MDXScreenManagerObserver.h>
#import <YouTube/MDXScreenSessionObserver.h>
#import <YouTube/YTMDXPreviewControllerDelegate.h>
#import <YouTube/YTResponder.h>

@protocol YTPlayerServices, YTDataServices, MDXConfig, YTResponder, YTMDXScreenContentControllerDelegate;
@class YTWatchTransition, YTMDXPreviewController, NSString, GIMMe, MDXScreenManager;

@interface YTMDXScreenContentController : NSObject <MDXScreenManagerObserver, MDXScreenSessionObserver, YTMDXPreviewControllerDelegate, YTResponder> {

	id<YTPlayerServices> _playerServices;
	id<YTDataServices> _dataServices;
	id<MDXConfig> _MDXConfig;
	YTWatchTransition* _watchTransition;
	YTMDXPreviewController* _MDXPreviewController;
	NSString* _lastKnownVideoID;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;
	id<YTMDXScreenContentControllerDelegate> _delegate;
	unsigned _contentCheckRequestID;
	unsigned _watchNextRequestID;
	MDXScreenManager* _screenManager;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                                  //@synthesize gimme=_gimme - In the implementation block
@property (assign,nonatomic,__weak) id<YTMDXScreenContentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned contentCheckRequestID;                                      //@synthesize contentCheckRequestID=_contentCheckRequestID - In the implementation block
@property (nonatomic,readonly) unsigned watchNextRequestID;                                         //@synthesize watchNextRequestID=_watchNextRequestID - In the implementation block
@property (nonatomic,readonly) MDXScreenManager * screenManager;                                    //@synthesize screenManager=_screenManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;                              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)hideDialog;
-(void)didSelectMDXPreviewDismiss;
-(void)didSelectMDXQueuePlaylistAction;
-(void)didSelectMDXQueueVideoAction;
-(void)didSelectMDXPlayActionWithPlayerResponse:(id)arg1 ;
-(MDXScreenManager *)screenManager;
-(id)watchEndpoint;
-(void)MDXVideoDidChangeToVideoID:(id)arg1 listID:(id)arg2 videoIndex:(unsigned)arg3 ;
-(void)MDXScreenSessionWillChange:(id)arg1 ;
-(void)MDXScreenSessionDidChange:(id)arg1 ;
-(int)expansionStateFromWatchEndpointSource:(int)arg1 ;
-(void)loadWatchEndpoint;
-(void)fetchVideoIDThenLoadNavEndpoint;
-(id)MDXTransitionForVideoID:(id)arg1 ;
-(void)checkVideoThenLoadOnScreenWithPlayerResponse:(id)arg1 ;
-(void)addVideoToQueue;
-(void)addPlaylistToQueue;
-(char)shouldSkipConfirmingVideo;
-(void)confirmThenCheck;
-(unsigned)watchNextRequestID;
-(void)updateWatchTransitionWithNavigationEndpoint:(id)arg1 ;
-(id)newPreviewController;
-(id)newContentCheckController;
-(unsigned)contentCheckRequestID;
-(void)loadWatchEndpointOnScreen;
-(void)doContentCheckWithVideoID:(id)arg1 playerResponse:(id)arg2 completionBlock:(/*^block*/id)arg3 errorBlock:(/*^block*/id)arg4 ;
-(void)loadWithTransition:(id)arg1 ;
-(void)setDelegate:(id<YTMDXScreenContentControllerDelegate>)arg1 ;
-(id<YTMDXScreenContentControllerDelegate>)delegate;
-(void)reset;
@end

