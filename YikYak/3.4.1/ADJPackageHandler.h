/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <Yik Yak/ADJPackageHandler.h>

@protocol ADJPackageHandler
@required
-(void)sendClickPackage:(id)arg1;
-(void)resumeSending;
-(void)pauseSending;
-(void)addPackage:(id)arg1;
-(void)sendFirstPackage;
-(id)initWithActivityHandler:(id)arg1;
-(void)sendNextPackage;
-(void)closeFirstPackage;
-(void)finishedTrackingActivity:(id)arg1;

@end


@protocol ADJActivityHandler, ADJRequestHandler, ADJLogger;
@class NSMutableArray;

@interface ADJPackageHandler : NSObject <ADJPackageHandler> {

	char _paused;
	dispatch_queue_sRef _internalQueue;
	dispatch_semaphore_sRef _sendingSemaphore;
	id<ADJActivityHandler> _activityHandler;
	id<ADJRequestHandler> _requestHandler;
	id<ADJLogger> _logger;
	NSMutableArray* _packageQueue;

}

@property (assign,nonatomic) dispatch_queue_sRef internalQueue;                     //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) dispatch_semaphore_sRef sendingSemaphore;              //@synthesize sendingSemaphore=_sendingSemaphore - In the implementation block
@property (assign,nonatomic) id<ADJActivityHandler> activityHandler;                //@synthesize activityHandler=_activityHandler - In the implementation block
@property (nonatomic,retain) id<ADJRequestHandler> requestHandler;                  //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,retain) id<ADJLogger> logger;                                  //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableArray * packageQueue;                         //@synthesize packageQueue=_packageQueue - In the implementation block
@property (assign,getter=isPaused,nonatomic) char paused;                           //@synthesize paused=_paused - In the implementation block
+(id)handlerWithActivityHandler:(id)arg1 ;
-(void)sendClickPackage:(id)arg1 ;
-(void)resumeSending;
-(void)pauseSending;
-(void)addPackage:(id)arg1 ;
-(void)sendFirstPackage;
-(id)initWithActivityHandler:(id)arg1 ;
-(void)addInternal:(id)arg1 ;
-(void)sendFirstInternal;
-(void)sendNextInternal;
-(dispatch_semaphore_sRef)sendingSemaphore;
-(void)setSendingSemaphore:(dispatch_semaphore_sRef)arg1 ;
-(void)readPackageQueue;
-(NSMutableArray *)packageQueue;
-(void)writePackageQueue;
-(id)packageQueueFilename;
-(void)setPackageQueue:(NSMutableArray *)arg1 ;
-(void)sendNextPackage;
-(void)closeFirstPackage;
-(void)finishedTrackingActivity:(id)arg1 ;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(void)setActivityHandler:(id<ADJActivityHandler>)arg1 ;
-(id<ADJActivityHandler>)activityHandler;
-(void)initInternal;
-(char)isPaused;
-(void)setPaused:(char)arg1 ;
-(void)setRequestHandler:(id<ADJRequestHandler>)arg1 ;
-(id<ADJRequestHandler>)requestHandler;
-(dispatch_queue_sRef)internalQueue;
-(void)setInternalQueue:(dispatch_queue_sRef)arg1 ;
@end

