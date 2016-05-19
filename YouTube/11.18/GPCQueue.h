/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, GPCQueueWeakHolder, NSObject;

@interface GPCQueue : NSObject {

	char isMainThread_;
	char createdQueue_;
	NSMutableSet* bindBlocks_;
	void* queueKey_;
	GPCQueueWeakHolder* holder_;
	NSObject*<OS_dispatch_queue> queue_;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) char inQueue; 
+(id)queueOnCurrentDispatchQueue;
+(id)queueOnMainThread;
+(id)makeQueueWithDispatchQueue:(id)arg1 onMainThread:(char)arg2 ;
+(id)queueWithName:(id)arg1 ;
+(id)queue;
+(void)initialize;
+(id)queueWithDispatchQueue:(id)arg1 ;
-(void)runAsyncInQueue:(/*^block*/id)arg1 ;
-(void)queueAsync:(/*^block*/id)arg1 ;
-(id)initWithDispatchQueue:(id)arg1 onMainThread:(char)arg2 ;
-(char)inQueue;
-(id)bindBlocks;
-(void)runSyncInQueue:(/*^block*/id)arg1 ;
-(id)addBindBlock:(/*^block*/id)arg1 ;
-(void)removeBindBlock:(id)arg1 ;
-(void)bind;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id)init;
-(id)initWithName:(id)arg1 ;
@end

