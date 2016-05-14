/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLResponse, NSMutableData, NSError, NSURLConnection;

@interface TAGNetOperation : NSOperation {

	char _isCancelled;
	char _isExecuting;
	char _isFinished;
	NSURLRequest* _request;
	NSURLResponse* _response;
	NSMutableData* _data;
	NSError* _error;
	NSURLConnection* _connection;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSURLRequest * request;                           //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;                         //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char isCancelled;              //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,getter=isExecuting,nonatomic) char isExecuting;              //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,getter=isFinished,nonatomic) char isFinished;                //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
+(id)operationWithRequest:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)isConcurrent;
-(NSError *)error;
-(oneway void)cancel;
-(NSURLRequest *)request;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(oneway void)start;
-(char)isCancelled;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(void)setIsCancelled:(char)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

