/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGFeedStatusViewDataSource <NSObject>
@property (nonatomic,readonly) int status; 
@optional
-(char)hasRestrictedFeed;
-(char)shouldHideIndicatorImage;
-(id)authorizationErrorMessage;

@required
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(id)emptyMessage;
-(unsigned)itemCount;
-(int)status;
-(char)moreAvailable;
-(id)errorMessage;

@end

