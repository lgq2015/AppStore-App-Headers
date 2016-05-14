/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCTSRIOConsumer : NSObject {

	char _readToCurrentFrame;
	char _unmaskBytes;
	/*^block*/id _consumer;
	/*^block*/id _handler;
	unsigned long _bytesNeeded;

}

@property (nonatomic,copy,readonly) id consumer;                     //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,copy,readonly) id handler;                      //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) char readToCurrentFrame;              //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) char unmaskBytes;                     //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long)bytesNeeded;
-(char)readToCurrentFrame;
-(char)unmaskBytes;
-(void)setBytesNeeded:(unsigned long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(char)arg4 unmaskBytes:(char)arg5 ;
-(id)handler;
-(id)consumer;
@end

