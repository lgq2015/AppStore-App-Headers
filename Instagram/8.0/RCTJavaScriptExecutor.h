/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCTJavaScriptExecutor <RCTInvalidating,RCTBridgeModule>
@property (getter=isValid,nonatomic,readonly) char valid; 
@optional
-(void)addSynchronousHookWithName:(id)arg1 usingBlock:(id)arg2;
-(void)executeAsyncBlockOnJavaScriptQueue:(/*^block*/id)arg1;

@required
-(void)executeBlockOnJavaScriptQueue:(/*^block*/id)arg1;
-(void)flushedQueue:(/*^block*/id)arg1;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(/*^block*/id)arg4;
-(void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3;
-(void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(/*^block*/id)arg3;
-(void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(/*^block*/id)arg3;
-(char)isValid;
-(void)setUp;

@end

