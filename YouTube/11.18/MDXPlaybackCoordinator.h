/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MDXScreenManagerObserver.h>
#import <YouTube/YTPlaybackCoordinator.h>

@protocol YTPlayerServices, MDXServices, YTPlayerOfflineServices, YTDataServices, MLServices, MDXConfig;
@class NSHashTable, NSString;

@interface MDXPlaybackCoordinator : NSObject <MDXScreenManagerObserver, YTPlaybackCoordinator> {

	id<YTPlayerServices> _playerServices;
	id<MDXServices> _MDXServices;
	id<YTPlayerOfflineServices> _playerOfflineServices;
	id<YTDataServices> _dataServices;
	id<MLServices> _mediaServices;
	id<MDXConfig> _MDXConfig;
	NSHashTable* _observers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInlinePlaybackSupported,nonatomic,readonly) char inlinePlaybackSupported; 
-(void)MDXScreenSessionDidChange:(id)arg1 ;
-(id)initWithPlayerServices:(id)arg1 MDXServices:(id)arg2 playerOfflineServices:(id)arg3 dataServices:(id)arg4 mediaServices:(id)arg5 MDXConfig:(id)arg6 ;
-(id)newControllerWithParentResponder:(id)arg1 overlayFactory:(id)arg2 playerView:(id)arg3 parentViewController:(id)arg4 ;
-(void)addPlaybackCoordinatorObserver:(id)arg1 ;
-(void)removePlaybackCoordinatorObserver:(id)arg1 ;
-(char)isInlinePlaybackSupported;
@end

