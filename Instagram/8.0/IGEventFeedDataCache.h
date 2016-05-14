/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGEventFeedData, NSMutableArray;

@interface IGEventFeedDataCache : NSObject {

	IGEventFeedData* _lastSeenPage;
	NSMutableArray* _pages;

}

@property (nonatomic,retain) NSMutableArray * pages;                      //@synthesize pages=_pages - In the implementation block
@property (nonatomic,retain) IGEventFeedData * lastSeenPage;              //@synthesize lastSeenPage=_lastSeenPage - In the implementation block
-(id)pageThatContainsPost:(id)arg1 ;
-(void)resetCacheWithPost:(id)arg1 ;
-(id)trimmedPageWithStartIndex:(unsigned)arg1 originalPage:(id)arg2 ;
-(void)updateCacheWithPage:(id)arg1 ;
-(void)removePost:(id)arg1 ;
-(void)setLastSeenPage:(IGEventFeedData *)arg1 ;
-(void)updateWithLastSeenPost:(id)arg1 ;
-(void)removeDuplicatePostsFromPage:(id)arg1 ;
-(IGEventFeedData *)lastSeenPage;
-(id)allPages;
-(id)init;
-(void)addPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(NSMutableArray *)pages;
-(void)setPages:(NSMutableArray *)arg1 ;
@end

