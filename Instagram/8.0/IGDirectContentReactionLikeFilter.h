/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDirectContentReactionFilter.h>

@class IGUser, NSString;

@interface IGDirectContentReactionLikeFilter : NSObject <IGDirectContentReactionFilter> {

	char _like;
	unsigned _reactionType;
	IGUser* _user;

}

@property (assign,nonatomic) char like;                             //@synthesize like=_like - In the implementation block
@property (nonatomic,retain) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned reactionType;                 //@synthesize reactionType=_reactionType - In the implementation block
-(char)like;
-(unsigned)reactionType;
-(void)setReactionType:(unsigned)arg1 ;
-(id)initWithUser:(id)arg1 withLike:(char)arg2 ;
-(void)setLike:(char)arg1 ;
-(id)filteredReactionsFromReactions:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
@end

