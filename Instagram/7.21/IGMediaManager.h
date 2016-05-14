/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGMediaManager : NSObject
+(void)deletePostItem:(id)arg1 fromFeedItem:(id)arg2 ;
+(void)deleteFeedItem:(id)arg1 ;
+(void)hideFeedItem:(id)arg1 ;
+(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)reportInappropriateFeedItem:(id)arg1 sourceName:(id)arg2 ;
+(void)showCantEditPostIfFeedItemHasBeenPromoted;
+(void)fetchPivotsFor:(id)arg1 onController:(id)arg2 ;
+(void)unexpireFeedItem:(id)arg1 ;
+(void)prepareMoreActionSheetForFeedItem:(id)arg1 allowHidingPost:(char)arg2 showTimestamp:(char)arg3 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 navigationController:(id)arg3 sourceName:(id)arg4 ;
+(void)reportSpamFeedItem:(id)arg1 sourceName:(id)arg2 ;
@end

