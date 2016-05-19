/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GSKTransportDelegate.h>

@protocol GSKHTTPConnectionDelegate;
@class GSKTCPTransport, NSURLRequest, NSMutableData, NSString;

@interface GSKHTTPConnection : NSObject <GSKTransportDelegate> {

	GSKTCPTransport* _tcp;
	NSURLRequest* _request;
	char _headersParsed;
	NSMutableData* _buffer;
	char _chunkedRequest;
	char _chunkedResponse;
	int _bytesLeftInChunk;
	id<GSKHTTPConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GSKHTTPConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)disconnectTcp;
-(int)extractChunkSize;
-(id)extractHeaders;
-(char)statusLineIsOK:(id)arg1 ;
-(char)addHeaderLine:(id)arg1 toDictionary:(id)arg2 ;
-(void)processHeaders:(id)arg1 ;
-(id)pathAndQuery;
-(char)parseAndProcessHeaders;
-(id)extractNextChunk;
-(void)transportDidConnect:(id)arg1 ;
-(void)transport:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)transport:(id)arg1 didReceiveData:(id)arg2 ;
-(id)writeChunkForData:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<GSKHTTPConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<GSKHTTPConnectionDelegate>)delegate;
-(id)initWithRequest:(id)arg1 ;
-(void)disconnect;
-(void)disconnectWithError:(id)arg1 ;
@end

