/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTRetryTaskConfig.h>

@protocol YTRetryableStore;
@class YTUploadInnerTubeTaskStore, YTUploadService, YTRetryTaskController, NSArray, NSHashTable, YTUploadHandle, NSURL, NSString;

@interface YTUploadInnerTubeTransferController : NSObject <YTRetryTaskConfig> {

	YTUploadInnerTubeTaskStore* _uploadTaskStore;
	YTUploadService* _uploadService;
	YTRetryTaskController* _retryController;
	id<YTRetryableStore> _retryableStore;
	NSArray* _retryPattern;
	NSHashTable* _observers;
	YTUploadHandle* _uploadHandle;
	NSURL* _currentAssetURL;
	char _didRetrieveResourceID;
	char _requestInProgress;
	char _waitingForWifi;
	char _pausedForPlayback;

}

@property (getter=isRequestInProgress,nonatomic,readonly) char requestInProgress;              //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (assign,getter=isWaitingForWifi,nonatomic) char waitingForWifi;                      //@synthesize waitingForWifi=_waitingForWifi - In the implementation block
@property (assign,getter=isPausedForPlayback,nonatomic) char pausedForPlayback;                //@synthesize pausedForPlayback=_pausedForPlayback - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isPausedForPlayback;
-(char)isWaitingForWifi;
-(char)isRequestInProgress;
-(id)retryTimeSequence;
-(id)initWithUploadTaskStore:(id)arg1 uploadService:(id)arg2 retryController:(id)arg3 innerTubeConfig:(id)arg4 ;
-(void)requestDidStartForAssetURL:(id)arg1 ;
-(void)notifyDidStartTransferForAssetURL:(id)arg1 ;
-(void)notifyDidProgressTransferForAssetURL:(id)arg1 progress:(id)arg2 ;
-(void)saveUploadLocationURL:(id)arg1 forAssetURL:(id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)saveResourceID:(id)arg1 forAssetURL:(id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)markUploadingBytesCompletedForAssetURL:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)retryTransferForAssetURL:(id)arg1 error:(id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(char)pauseUploadWithAssetURL:(id)arg1 ;
-(void)notifyDidPauseTransferWithAssetURL:(id)arg1 ;
-(char)canPauseAssetURL:(id)arg1 ;
-(void)requestDidFinishForAssetURL:(id)arg1 ;
-(void)notifyDidRetrieveResourceIDForAssetURL:(id)arg1 ;
-(void)transferFailedWithError:(id)arg1 forAssetURL:(id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)notifyDidFinishTransferForAssetURL:(id)arg1 ;
-(char)isRetryableError:(id)arg1 ;
-(void)notifyDidFailTransferForAssetURL:(id)arg1 ;
-(void)startTransferForUploadTask:(id)arg1 responseBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)fetchTaskNeedingTransferWithResponseBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(void)pauseCurrentTransfer;
-(void)pauseIfNotActiveTaskWithAssetURL:(id)arg1 ;
-(void)setWaitingForWifi:(char)arg1 ;
-(void)setPausedForPlayback:(char)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
@end

