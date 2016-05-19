/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface YTUserProfile : NSObject <NSCopying> {

	char _hasChannel;
	char _eligibleForChannel;
	NSString* _displayName;
	NSString* _userID;
	NSString* _channelID;
	NSString* _channelName;
	NSString* _googlePlusUserID;
	unsigned _age;
	NSURL* _thumbnailURL;
	NSURL* _uploadsURL;
	NSURL* _playlistsURL;
	unsigned long long _uploadedCount;
	unsigned long long _favoritesCount;
	unsigned long long _subscriptionsCount;
	unsigned long long _uploadViewsCount;
	unsigned long long _channelViewsCount;
	unsigned long long _subscribersCount;

}

@property (nonatomic,readonly) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * userID;                                  //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) char hasChannel;                                    //@synthesize hasChannel=_hasChannel - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                               //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSString * channelName;                             //@synthesize channelName=_channelName - In the implementation block
@property (nonatomic,readonly) char eligibleForChannel;                            //@synthesize eligibleForChannel=_eligibleForChannel - In the implementation block
@property (nonatomic,readonly) NSString * googlePlusUserID;                        //@synthesize googlePlusUserID=_googlePlusUserID - In the implementation block
@property (nonatomic,readonly) unsigned age;                                       //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) NSURL * thumbnailURL;                               //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,readonly) NSURL * uploadsURL;                                 //@synthesize uploadsURL=_uploadsURL - In the implementation block
@property (nonatomic,readonly) NSURL * playlistsURL;                               //@synthesize playlistsURL=_playlistsURL - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadedCount;                   //@synthesize uploadedCount=_uploadedCount - In the implementation block
@property (nonatomic,readonly) unsigned long long favoritesCount;                  //@synthesize favoritesCount=_favoritesCount - In the implementation block
@property (nonatomic,readonly) unsigned long long subscriptionsCount;              //@synthesize subscriptionsCount=_subscriptionsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uploadViewsCount;                //@synthesize uploadViewsCount=_uploadViewsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long channelViewsCount;               //@synthesize channelViewsCount=_channelViewsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long subscribersCount;                //@synthesize subscribersCount=_subscribersCount - In the implementation block
-(unsigned long long)subscribersCount;
-(NSString *)channelID;
-(id)initWithDisplayName:(id)arg1 userID:(id)arg2 hasChannel:(char)arg3 channelID:(id)arg4 channelName:(id)arg5 eligibleForChannel:(char)arg6 googlePlusUserID:(id)arg7 age:(unsigned)arg8 thumbnailURL:(id)arg9 uploadsURL:(id)arg10 playlistsURL:(id)arg11 uploadedCount:(unsigned long long)arg12 favoritesCount:(unsigned long long)arg13 subscriptionsCount:(unsigned long long)arg14 uploadViewsCount:(unsigned long long)arg15 channelViewsCount:(unsigned long long)arg16 subscribersCount:(unsigned long long)arg17 ;
-(char)hasLegalAge;
-(char)hasKnownAge;
-(char)eligibleForChannel;
-(NSString *)googlePlusUserID;
-(NSURL *)uploadsURL;
-(NSURL *)playlistsURL;
-(unsigned long long)uploadedCount;
-(unsigned long long)uploadViewsCount;
-(unsigned long long)channelViewsCount;
-(NSString *)channelName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(unsigned long long)subscriptionsCount;
-(NSString *)userID;
-(NSURL *)thumbnailURL;
-(unsigned long long)favoritesCount;
-(unsigned)age;
-(char)hasChannel;
@end

