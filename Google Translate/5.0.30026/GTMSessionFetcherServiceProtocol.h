/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSOperationQueue;


@protocol GTMSessionFetcherServiceProtocol <NSObject>
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (assign) char reuseSession; 
@property (readonly) NSOperationQueue * delegateQueue; 
@required
-(id)fetcherWithRequest:(id)arg1;
-(char)fetcherShouldBeginFetching:(id)arg1;
-(void)fetcherDidStop:(id)arg1;
-(char)isDelayingFetcher:(id)arg1;
-(void)fetcherDidCreateSession:(id)arg1;
-(void)fetcherDidBeginFetching:(id)arg1;
-(id)sessionForFetcherCreation;
-(id)stoppedAllFetchersDate;
-(char)reuseSession;
-(void)setReuseSession:(char)arg1;
-(NSOperationQueue *)delegateQueue;
-(id)session;
-(id)sessionDelegate;
-(void)setCallbackQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)callbackQueue;

@end

