/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/GSKTransport.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSMutableArray, NSInputStream, NSOutputStream, NSString;

@interface GSKTCPTransport : GSKTransport <NSStreamDelegate> {

	NSMutableArray* _requestDataQueue;
	NSInputStream* _receiveStream;
	NSOutputStream* _sendStream;
	int _state;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectToHost:(id)arg1 port:(int)arg2 useSSL:(char)arg3 ;
-(id)sendData:(id)arg1 forRequest:(id)arg2 ;
-(void)connectWithSSL:(char)arg1 ;
-(id)sendQueuedRequests;
-(id)sendInitialHeader:(id)arg1 ;
-(id)sendEndOfStream;
-(void)openStreamsWithHost:(id)arg1 port:(int)arg2 useSSL:(char)arg3 ;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(id)init;
-(id)name;
-(void)disconnect;
@end

