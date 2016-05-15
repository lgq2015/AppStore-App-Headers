/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSURLSessionTaskDelegate, OS_dispatch_queue;
@class NSURLRequest, NSURLResponse, NSError, NSObject;

@interface CLSURLSessionTask : NSObject {

	id<CLSURLSessionTaskDelegate> _delegate;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _queue;
	char _invokesDelegate;

}

@property (nonatomic,copy) NSURLRequest * originalRequest;                        //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,copy) NSURLRequest * currentRequest;                         //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) id<CLSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char invokesDelegate;                                //@synthesize invokesDelegate=_invokesDelegate - In the implementation block
+(id)task;
-(char)invokesDelegate;
-(void)setInvokesDelegate:(char)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(NSError *)error;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)setDelegate:(id<CLSURLSessionTaskDelegate>)arg1 ;
-(id)init;
-(id<CLSURLSessionTaskDelegate>)delegate;
-(void)start;
-(void)resume;
-(NSURLResponse *)response;
-(void)cleanup;
-(NSURLRequest *)currentRequest;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLRequest *)originalRequest;
-(void)setError:(NSError *)arg1 ;
@end

