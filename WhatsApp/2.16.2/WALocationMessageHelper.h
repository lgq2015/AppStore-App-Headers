/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAMessageHelper.h>

@interface WALocationMessageHelper : WAMessageHelper
+(id)stringRepresentationForChatForMessage:(id)arg1 ;
+(id)stringRepresentationForMessage:(id)arg1 ;
+(float)maximumChatBubbleImageWidth;
+(void)loadMapThumbnailForLocation:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 retryOnFail:(char)arg4 ;
+(void)loadGoogleMapsThumbnailForLocation:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
+(char)needsImageLoader;
+(id)stringRepresentationForNotificationForMessage:(id)arg1 ;
+(void)initialize;
-(id)smallImageForMessageImageLoaderWithInfo:(id)arg1 ;
-(id)newImageLoader;
-(id)largeImageForMessageImageLoaderWithInfo:(id)arg1 ;
-(char)shouldCacheLargeTransformedImage:(id)arg1 fromOriginalImage:(id)arg2 info:(id)arg3 ;
@end

