/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSPort, NSMutableDictionary, NSLock, WAWaitOperation, WAFinishOperation, NSString;

@interface WAActionManager : NSObject {

	NSOperationQueue* _queue;
	unsigned _options;
	int _canceling;
	int _finishing;
	NSPort* _mainThreadWaitPort;
	NSMutableDictionary* _phaseOperations;
	NSLock* _updatePhaseLock;
	unsigned _latestPhase;
	WAWaitOperation* _wait;
	WAFinishOperation* _finish;
	unsigned _phase;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) unsigned phase;                      //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) char canceled; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) unsigned maximumPhase; 
-(char)checkOption:(unsigned)arg1 ;
-(void)cancelWithReason:(unsigned)arg1 ;
-(void)waitForCompletion;
-(void)setOperations:(id)arg1 forPhase:(unsigned)arg2 ;
-(unsigned)maximumPhase;
-(void)manuallyUpdatePhaseTo:(unsigned)arg1 ;
-(void)runBlockOnMainThread:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
-(void)completeWithReason:(unsigned)arg1 ;
-(void)runMainThreadRunLoop;
-(void)incrementPhase;
-(void)updatePhase;
-(float)progressForOperations:(id)arg1 ;
-(char)shouldCancel;
-(id)initWithOptions:(unsigned)arg1 ;
-(char)shouldFinish;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)phase;
-(void)setPhase:(unsigned)arg1 ;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)progress;
-(void)finish;
-(void)addOperations:(id)arg1 ;
-(NSString *)errorDomain;
-(char)canceled;
-(id)errorForCode:(unsigned)arg1 ;
@end

