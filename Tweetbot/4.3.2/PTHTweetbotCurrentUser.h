/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotUser.h>

@class PTHTweetbotCursor, PTHTweetbotListsCursor, PTHTweetbotCollectionsCursor;

@interface PTHTweetbotCurrentUser : PTHTweetbotUser {

	PTHTweetbotCursor* _mentionsCursor;
	PTHTweetbotCursor* _favoritesCursor;
	PTHTweetbotListsCursor* _listsCursor;
	PTHTweetbotCollectionsCursor* _collectionsCursor;
	PTHTweetbotCursor* _homeTimelineCursor;
	PTHTweetbotCursor* _savedSearchesCursor;
	PTHTweetbotCursor* _retweetsOfMeCursor;

}

@property (nonatomic,retain) PTHTweetbotCursor * homeTimelineCursor;               //@synthesize homeTimelineCursor=_homeTimelineCursor - In the implementation block
@property (nonatomic,retain) PTHTweetbotCursor * savedSearchesCursor;              //@synthesize savedSearchesCursor=_savedSearchesCursor - In the implementation block
@property (nonatomic,retain) PTHTweetbotCursor * retweetsOfMeCursor;               //@synthesize retweetsOfMeCursor=_retweetsOfMeCursor - In the implementation block
+(void)createMimeDataForImage:(id)arg1 imageUTI:(id)arg2 maxImageSize:(CGSize)arg3 maxFileSize:(unsigned)arg4 result:(/*^block*/id)arg5 ;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(id)mentionsCursor;
-(id)favoritesCursor;
-(PTHTweetbotCursor *)savedSearchesCursor;
-(id)listsCursor;
-(PTHTweetbotCursor *)homeTimelineCursor;
-(id)collectionsCursor;
-(void)updateProfileWithName:(id)arg1 urlString:(id)arg2 location:(id)arg3 description:(id)arg4 result:(/*^block*/id)arg5 ;
-(void)updateProfileImage:(id)arg1 imageUTI:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)updateBannerImage:(id)arg1 imageUTI:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)pinStatus:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)unpinStatus:(id)arg1 result:(/*^block*/id)arg2 ;
-(PTHTweetbotCursor *)retweetsOfMeCursor;
-(void)setHomeTimelineCursor:(PTHTweetbotCursor *)arg1 ;
-(void)setSavedSearchesCursor:(PTHTweetbotCursor *)arg1 ;
-(void)setRetweetsOfMeCursor:(PTHTweetbotCursor *)arg1 ;
-(char)isCurrentUser;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)setScreenName:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
@end

