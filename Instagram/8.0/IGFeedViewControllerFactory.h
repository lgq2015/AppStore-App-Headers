/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGFeedViewControllerFactory : NSObject
+(id)singleFeedViewControllerWithNetworkSource:(id)arg1 ;
+(char)useNewContextualFeed;
+(id)contextualFeedViewControllerWithNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showPullToRefresh:(char)arg5 focusCoordinator:(id)arg6 showExploreContext:(char)arg7 entryPoint:(int)arg8 ;
+(void)configureContextualFeed:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
+(id)albumFeedViewControllerWithUser:(id)arg1 ;
+(id)mainFeedViewController;
@end

