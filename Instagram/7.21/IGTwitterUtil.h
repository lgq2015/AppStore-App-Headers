/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGTwitterUtil : NSObject
+(char)hasSystemTwitterAccount;
+(void)tweetWithSystemTwitterAccountPhotoLink:(id)arg1 username:(id)arg2 mediaType:(int)arg3 viewController:(id)arg4 ;
+(void)loadProfilePictureForACAccount:(id)arg1 delegate:(id)arg2 ;
+(void)loadProfilePictureFromOAuthViaSystem:(id)arg1 ;
+(char)canLoadProfilePicture;
+(void)loadProfilePictureWithDelegate:(id)arg1 ;
+(void)loadProfilePictureWithPlainOAuth:(id)arg1 ;
+(id)accountStore;
+(void)removeHandler:(id)arg1 ;
@end

