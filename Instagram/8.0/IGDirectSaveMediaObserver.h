/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGDirectSaveMediaDelegate;
@class NSString;

@interface IGDirectSaveMediaObserver : NSObject <IGMediaRequestDelegate> {

	id<IGDirectSaveMediaDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGDirectSaveMediaDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)writeVideoToCameraRoll:(id)arg1 ;
-(void)setDelegate:(id<IGDirectSaveMediaDelegate>)arg1 ;
-(id<IGDirectSaveMediaDelegate>)delegate;
@end

