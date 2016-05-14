/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteNetworkDataSource.h>

@class IGFeedItem;

@interface IGUserListAutocompleteNetworkDataSource : IGAutocompleteNetworkDataSource {

	int _searchSet;
	int _searchScope;
	IGFeedItem* _feedItem;

}

@property (assign,nonatomic) int searchSet;                      //@synthesize searchSet=_searchSet - In the implementation block
@property (assign,nonatomic) int searchScope;                    //@synthesize searchScope=_searchScope - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(id)localSuggestionsForQueryString:(id)arg1 numRequested:(int)arg2 ;
-(id)requestForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 ;
-(id)parseServerResponse:(id)arg1 ;
-(int)searchSet;
-(void)setSearchSet:(int)arg1 ;
-(void)setSearchScope:(int)arg1 ;
-(int)searchScope;
@end

