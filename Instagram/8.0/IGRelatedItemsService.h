/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGService;

@interface IGRelatedItemsService : NSObject {

	IGService* _service;

}

@property (nonatomic,retain) IGService * service;              //@synthesize service=_service - In the implementation block
-(id)requestParametersWithVisitedItems:(id)arg1 relatedTypes:(id)arg2 ;
-(id)JSONFromVisitedItems:(id)arg1 ;
-(id)JSONStringFromObject:(id)arg1 ;
-(void)requestRelatedItemsForItem:(id)arg1 visitedItems:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)init;
-(IGService *)service;
-(id)initWithService:(id)arg1 ;
-(void)setService:(IGService *)arg1 ;
@end

