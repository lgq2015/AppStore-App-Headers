/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGLRUCache;

@interface IGGraphQLCache : NSObject {

	IGLRUCache* _cache;

}

@property (nonatomic,readonly) IGLRUCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)setCachedResponseForRequest:(id)arg1 response:(id)arg2 ;
-(void)getCachedResponseForRequest:(id)arg1 hitCompletionHandler:(/*^block*/id)arg2 missCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(IGLRUCache *)cache;
@end

