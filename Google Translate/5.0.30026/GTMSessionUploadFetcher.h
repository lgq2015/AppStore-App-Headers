/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/GTMSessionFetcher.h>

@protocol OS_dispatch_queue;
@class GTMSessionFetcher, NSObject, NSURL, NSData, NSFileHandle, NSString, NSDictionary, NSURLRequest;

@interface GTMSessionUploadFetcher : GTMSessionFetcher {

	GTMSessionFetcher* _chunkFetcher;
	/*^block*/id _delegateCompletionHandler;
	NSObject*<OS_dispatch_queue> _delegateCallbackQueue;
	long long _initialBodyLength;
	long long _initialBodySent;
	NSURL* _uploadLocationURL;
	NSData* _uploadData;
	NSFileHandle* _uploadFileHandle;
	/*^block*/id _uploadDataProvider;
	long long _uploadFileLength;
	NSString* _uploadMIMEType;
	long long _chunkSize;
	long long _uploadGranularity;
	char _isPaused;
	char _isRestartedUpload;
	char _shouldInitiateOffsetQuery;
	char _useBackgroundSessionOnChunkFetchers;
	long long _currentOffset;
	NSDictionary* _recentChunkReponseHeaders;
	int _recentChunkStatusCode;
	GTMSessionFetcher* _fetcherInFlight;
	char _isSubdataGenerating;
	char _subdataGenerating;
	NSURL* _uploadFileURL;
	NSURLRequest* _lastChunkRequest;

}

@property (retain) NSURL * uploadLocationURL;                                         //@synthesize uploadLocationURL=_uploadLocationURL - In the implementation block
@property (retain) NSData * uploadData;                                               //@synthesize uploadData=_uploadData - In the implementation block
@property (retain) NSURL * uploadFileURL;                                             //@synthesize uploadFileURL=_uploadFileURL - In the implementation block
@property (retain) NSFileHandle * uploadFileHandle;                                   //@synthesize uploadFileHandle=_uploadFileHandle - In the implementation block
@property (copy,readonly) id uploadDataProvider; 
@property (copy) NSString * uploadMIMEType;                                           //@synthesize uploadMIMEType=_uploadMIMEType - In the implementation block
@property (assign) long long chunkSize;                                               //@synthesize chunkSize=_chunkSize - In the implementation block
@property (assign) long long currentOffset;                                           //@synthesize currentOffset=_currentOffset - In the implementation block
@property (retain) GTMSessionFetcher * chunkFetcher;                                  //@synthesize chunkFetcher=_chunkFetcher - In the implementation block
@property (readonly) GTMSessionFetcher * activeFetcher; 
@property (retain) NSURLRequest * lastChunkRequest;                                   //@synthesize lastChunkRequest=_lastChunkRequest - In the implementation block
@property (retain) NSDictionary * responseHeaders; 
@property (assign) int statusCode; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateCallbackQueue;              //@synthesize delegateCallbackQueue=_delegateCallbackQueue - In the implementation block
@property (readonly) id delegateCompletionHandler;                                    //@synthesize delegateCompletionHandler=_delegateCompletionHandler - In the implementation block
@property (retain) GTMSessionFetcher * fetcherInFlight; 
@property (getter=isSubdataGenerating) char subdataGenerating;                        //@synthesize subdataGenerating=_subdataGenerating - In the implementation block
@property (assign) char shouldInitiateOffsetQuery;                                    //@synthesize shouldInitiateOffsetQuery=_shouldInitiateOffsetQuery - In the implementation block
@property (assign) long long uploadGranularity;                                       //@synthesize uploadGranularity=_uploadGranularity - In the implementation block
+(id)uploadFetchersForBackgroundSessions;
+(id)uploadFetcherWithRequest:(id)arg1 fetcherService:(id)arg2 ;
+(id)uploadFetcherWithLocation:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4 ;
+(id)uploadFetcherPointerArrayForBackgroundSessions;
+(id)uploadFetcherForSessionIdentifierMetadata:(id)arg1 ;
+(unsigned)uploadStatusFromResponseHeaders:(id)arg1 ;
+(void)removePointer:(void*)arg1 fromPointerArray:(id)arg2 ;
+(id)uploadFetcherWithRequest:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4 ;
+(id)uploadFetcherForSessionIdentifier:(id)arg1 ;
+(void)load;
-(void)beginFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopFetching;
-(void)setUseBackgroundSession:(char)arg1 ;
-(void)stopFetchReleasingCallbacks:(char)arg1 ;
-(char)shouldReleaseCallbacksUponCompletion;
-(char)waitForCompletionWithTimeout:(double)arg1 ;
-(char)useBackgroundSession;
-(char)canFetchWithBackgroundSession;
-(int)statusCodeUnsynchronized;
-(void)setLocationURL:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 ;
-(void)setUploadFileLength:(long long)arg1 ;
-(void)setUploadFileURL:(NSURL *)arg1 ;
-(GTMSessionFetcher *)chunkFetcher;
-(void)attachSendProgressBlockToChunkFetcher:(id)arg1 ;
-(void)chunkFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(void)setupRequestHeaders;
-(long long)fullUploadLength;
-(id)uploadDataProvider;
-(id)uploadChunkUnavailableErrorWithDescription:(id)arg1 ;
-(NSURL *)uploadFileURL;
-(void)generateChunkSubdataFromFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(/*^block*/id)arg4 ;
-(NSFileHandle *)uploadFileHandle;
-(void)generateChunkSubdataFromFileHandle:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(/*^block*/id)arg4 ;
-(void)setInitialBodyLength:(long long)arg1 ;
-(void)setDelegateCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isRestartedUpload;
-(void)sendQueryForUploadOffsetWithFetcherProperties:(id)arg1 ;
-(void)setFetcherInFlight:(GTMSessionFetcher *)arg1 ;
-(void)beginChunkFetches;
-(void)invokeFinalCallbackWithData:(id)arg1 error:(id)arg2 shouldInvalidateLocation:(char)arg3 ;
-(void)generateChunkSubdataWithOffset:(long long)arg1 length:(long long)arg2 response:(/*^block*/id)arg3 ;
-(void)retrieveUploadChunkGranularityFromResponseHeaders:(id)arg1 ;
-(id)prematureFailureErrorWithUserInfo:(id)arg1 ;
-(void)setUploadLocationURL:(NSURL *)arg1 ;
-(long long)initialBodyLength;
-(void)setInitialBodySent:(long long)arg1 ;
-(void)uploadNextChunkWithOffset:(long long)arg1 ;
-(void)invokeDelegateWithDidSendBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)releaseUploadAndBaseCallbacks;
-(GTMSessionFetcher *)fetcherInFlight;
-(void)uploadNextChunkWithOffset:(long long)arg1 fetcherProperties:(id)arg2 ;
-(id)uploadFetcherWithProperties:(id)arg1 isQueryFetch:(char)arg2 ;
-(void)queryFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3 ;
-(long long)uploadGranularity;
-(void)beginChunkFetcher:(id)arg1 offset:(long long)arg2 ;
-(void)setSubdataGenerating:(char)arg1 ;
-(void)setChunkFetcher:(GTMSessionFetcher *)arg1 ;
-(NSURL *)uploadLocationURL;
-(NSString *)uploadMIMEType;
-(id)uploadSessionIdentifierMetadata;
-(void)setShouldInitiateOffsetQuery:(char)arg1 ;
-(void)setLastChunkRequest:(NSURLRequest *)arg1 ;
-(char)shouldInitiateOffsetQuery;
-(void)destroyChunkFetcher;
-(NSObject*<OS_dispatch_queue>)delegateCallbackQueue;
-(void)setUploadGranularity:(long long)arg1 ;
-(void)sendCancelUploadWithFetcherProperties:(id)arg1 ;
-(char)isSubdataGenerating;
-(void)setUploadData:(NSData *)arg1 ;
-(void)setUploadFileHandle:(NSFileHandle *)arg1 ;
-(void)setUploadDataLength:(long long)arg1 provider:(/*^block*/id)arg2 ;
-(void)setUploadMIMEType:(NSString *)arg1 ;
-(void)pauseFetching;
-(void)resumeFetching;
-(long long)initialBodySent;
-(GTMSessionFetcher *)activeFetcher;
-(id)delegateCompletionHandler;
-(NSURLRequest *)lastChunkRequest;
-(long long)currentOffset;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(char)isPaused;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)responseHeaders;
-(NSData *)uploadData;
-(void)setStatusCode:(int)arg1 ;
-(long long)chunkSize;
-(void)setChunkSize:(long long)arg1 ;
-(void)setCurrentOffset:(long long)arg1 ;
@end

