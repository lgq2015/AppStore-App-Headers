/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/RCTURLRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOperationQueue, NSObject, NSURLCache, NSMutableArray, RCTBridge, NSString;

@interface RCTImageLoader : NSObject <RCTBridgeModule, RCTURLRequestHandler> {

	NSArray* _loaders;
	NSArray* _decoders;
	NSOperationQueue* _imageDecodeQueue;
	NSObject*<OS_dispatch_queue> _URLCacheQueue;
	NSURLCache* _URLCache;
	NSMutableArray* _pendingTasks;
	int _activeTasks;
	NSMutableArray* _pendingDecodes;
	int _scheduledDecodes;
	unsigned _activeBytes;
	RCTBridge* _bridge;
	unsigned _maxConcurrentLoadingTasks;
	unsigned _maxConcurrentDecodingTasks;
	unsigned _maxConcurrentDecodingBytes;

}

@property (assign,nonatomic) unsigned maxConcurrentLoadingTasks;                      //@synthesize maxConcurrentLoadingTasks=_maxConcurrentLoadingTasks - In the implementation block
@property (assign,nonatomic) unsigned maxConcurrentDecodingTasks;                     //@synthesize maxConcurrentDecodingTasks=_maxConcurrentDecodingTasks - In the implementation block
@property (assign,nonatomic) unsigned maxConcurrentDecodingBytes;                     //@synthesize maxConcurrentDecodingBytes=_maxConcurrentDecodingBytes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(/*^block*/id)loadImageWithTag:(id)arg1 callback:(/*^block*/id)arg2 ;
-(/*^block*/id)loadImageWithTag:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)imageURLLoaderForURL:(id)arg1 ;
-(void)dequeueTasks;
-(/*^block*/id)loadImageWithoutClipping:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(/*^block*/id)decodeImageDataWithoutClipping:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionBlock:(/*^block*/id)arg5 ;
-(/*^block*/id)loadImageOrDataWithTag:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)imageDataDecoderForData:(id)arg1 ;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionBlock:(/*^block*/id)arg5 ;
-(/*^block*/id)getImageSize:(id)arg1 block:(/*^block*/id)arg2 ;
-(unsigned)maxConcurrentLoadingTasks;
-(void)setMaxConcurrentLoadingTasks:(unsigned)arg1 ;
-(unsigned)maxConcurrentDecodingTasks;
-(void)setMaxConcurrentDecodingTasks:(unsigned)arg1 ;
-(unsigned)maxConcurrentDecodingBytes;
-(void)setMaxConcurrentDecodingBytes:(unsigned)arg1 ;
-(void)setUp;
-(void)cancelRequest:(id)arg1 ;
-(RCTBridge *)bridge;
-(char)canHandleRequest:(id)arg1 ;
@end

