/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MLHTTPServerDelegate.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>

@protocol OS_dispatch_queue, MLHLSProxyDelegate;
@class MLHTTPServer, NSObject, MLHLSMasterPlaylistWriter, MLHLSMediaPlaylistWriter, YTSystemNotifications, NSString;

@interface MLHLSProxy : NSObject <MLHTTPServerDelegate, AVAssetResourceLoaderDelegate> {

	MLHTTPServer* _server;
	NSObject*<OS_dispatch_queue> _serverQueue;
	MLHLSMasterPlaylistWriter* _masterPlaylistWriter;
	MLHLSMediaPlaylistWriter* _mediaPlaylistWriter;
	YTSystemNotifications* _systemNotifications;
	id<MLHLSProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MLHLSProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSystemNotifications:(id)arg1 ;
-(id)mediaSegmentResponseForConnection:(id)arg1 URL:(id)arg2 ;
-(id)resourceLoaderURLWithPath:(id)arg1 ;
-(id)mediaPlaylistPathWithSuffix:(id)arg1 itag:(int)arg2 xtags:(id)arg3 ;
-(void)handleSecureKeyDeliveryResourceLoadingRequest:(id)arg1 ;
-(void)handleMasterPlaylistResourceLoadingRequest:(id)arg1 URL:(id)arg2 ;
-(void)handleMediaPlaylistDataResourceLoadingRequest:(id)arg1 URL:(id)arg2 ;
-(void)handleMediaPlaylistResourceLoadingRequest:(id)arg1 URL:(id)arg2 ;
-(void)didFinishResourceLoadingRequest:(id)arg1 withMasterPlaylist:(id)arg2 ;
-(char)parseMediaPlaylistURL:(id)arg1 itag:(int*)arg2 xtags:(id*)arg3 ;
-(void)didFinishResourceLoadingRequest:(id)arg1 withData:(id)arg2 ;
-(void)didFinishResourceLoadingRequest:(id)arg1 withMediaPlaylist:(id)arg2 ;
-(char)parseMediaSegmentURL:(id)arg1 itag:(int*)arg2 xtags:(id*)arg3 segmentIndex:(int*)arg4 ;
-(void)serverDidRestart:(id)arg1 ;
-(char)startMediaSegmentServer;
-(id)mediaPlaylistURLWithItag:(int)arg1 xtags:(id)arg2 ;
-(id)mediaSegmentURLWithItag:(int)arg1 xtags:(id)arg2 segmentIndex:(int)arg3 ;
-(void)setUseAverageBitrate:(char)arg1 ;
-(void)restartServerIfNecessary;
-(id)masterPlaylistURL;
-(id)mediaPlaylistDataURLWithItag:(int)arg1 xtags:(id)arg2 ;
-(void)setDelegate:(id<MLHLSProxyDelegate>)arg1 ;
-(id<MLHLSProxyDelegate>)delegate;
-(void)stop;
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
@end

