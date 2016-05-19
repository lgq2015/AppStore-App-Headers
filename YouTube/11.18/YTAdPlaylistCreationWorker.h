/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseWorker.h>
#import <YouTube/YTOfflineVideoAdPlaylistObserver.h>
#import <YouTube/YTWorker.h>

@protocol YTOfflineVideoAdPlaylistProvider, YTWorkerDelegate;
@class YTAdPlaylistCreationController, NSString;

@interface YTAdPlaylistCreationWorker : YTBaseWorker <YTOfflineVideoAdPlaylistObserver, YTWorker> {

	id<YTOfflineVideoAdPlaylistProvider> _offlineVideoAdPlaylistProvider;
	YTAdPlaylistCreationController* _adPlaylistCreator;
	id<YTWorkerDelegate> _workerDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<YTWorkerDelegate> workerDelegate;              //@synthesize workerDelegate=_workerDelegate - In the implementation block
-(void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2 ;
-(id)initWithOfflineVideoAdPlaylistProvider:(id)arg1 adPlaylistCreator:(id)arg2 ;
-(void)startWorkWithCompletionBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(int)workerRequirements;
-(char)runsAsynchronously;
-(char)isWorkingAsynchronously;
-(id<YTWorkerDelegate>)workerDelegate;
-(void)setWorkerDelegate:(id<YTWorkerDelegate>)arg1 ;
@end

