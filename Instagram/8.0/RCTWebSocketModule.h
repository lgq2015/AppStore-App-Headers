/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTSRWebSocketDelegate.h>

@class NSMutableDictionary, RCTBridge, NSString;

@interface RCTWebSocketModule : NSObject <RCTBridgeModule, RCTSRWebSocketDelegate> {

	NSMutableDictionary* _sockets;
	RCTBridge* _bridge;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__480;
+(id)__rct_export__651;
+(id)__rct_export__702;
+(id)__rct_export__763;
+(void)load;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(void)connect:(id)arg1 protocols:(id)arg2 headers:(id)arg3 socketID:(id)arg4 ;
-(void)send:(id)arg1 socketID:(id)arg2 ;
-(void)sendBinary:(id)arg1 socketID:(id)arg2 ;
-(void)dealloc;
-(void)close:(id)arg1 ;
-(RCTBridge *)bridge;
@end

