/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCKNUDPSocketDelegate;
#import <YouTube/YouTube-Structs.h>
@interface GCKNUDPSocket : NSObject {

	CFHostRef _host;
	CFSocketRef _socket;
	char _readBuffer[65536];
	id<GCKNUDPSocketDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCKNUDPSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char connected; 
@property (nonatomic,readonly) int nativeDescriptor; 
-(char)listenOnPort:(unsigned short)arg1 error:(id*)arg2 ;
-(char)sendPacket:(id)arg1 toAddress:(id)arg2 ;
-(char)createSocketWithAddress:(id)arg1 error:(id*)arg2 ;
-(void)notifyDidReceivePacket:(id)arg1 fromAddress:(id)arg2 ;
-(char)connectToAddress:(id)arg1 error:(id*)arg2 ;
-(int)nativeDescriptor;
-(void)setDelegate:(id<GCKNUDPSocketDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GCKNUDPSocketDelegate>)delegate;
-(void)close;
-(char)sendPacket:(id)arg1 ;
-(void)readData;
-(char)connected;
@end

