/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSURLSession, NSString, WAURLSessionManager, NSArray;

@interface WAURLSession : NSObject {

	NSMutableArray* _tasks;
	char _isLoaded;
	NSMutableArray* _deferredOperations;
	NSObject*<OS_dispatch_queue> _ioQueue;
	char _ignoreSaveTasks;
	NSURLSession* _URLSession;
	NSString* _identifier;
	/*^block*/id _completionHandler;
	WAURLSessionManager* _sessionManager;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                              //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSArray * allTaskIdentifiers; 
@property (assign,nonatomic,__weak) WAURLSessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,readonly) char hasPendingInProcessRequests; 
-(void)flushDeferredTaskOperations;
-(void)restoreTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)taskWithIdentifier:(id)arg1 ;
-(void)saveTasks;
-(void)suspendAll;
-(void)resumeAll;
-(id)savedTasksFilePath;
-(id)addDownloadTaskWithTaskData:(id)arg1 ;
-(id)initWithURLSession:(id)arg1 identifier:(id)arg2 ;
-(char)hasPendingInProcessRequests;
-(NSArray *)allTaskIdentifiers;
-(char)isBackgroundSession;
-(NSURLSession *)URLSession;
-(NSString *)identifier;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)addTask:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setSessionManager:(WAURLSessionManager *)arg1 ;
-(void)cancelAll;
-(void)removeTask:(id)arg1 ;
-(WAURLSessionManager *)sessionManager;
@end

