/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSString, IGNonCurrentUserDefaults, IGBlendedSearchRecentItemsOrderStore;

@interface IGAutocompleteAbstractStore : NSObject {

	NSRegularExpression* _regex;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	IGBlendedSearchRecentItemsOrderStore* _blendedSearchRecentItemsOrderStore;

}

@property (nonatomic,retain) NSRegularExpression * regex;                                                            //@synthesize regex=_regex - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                                               //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;                                         //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,retain) IGBlendedSearchRecentItemsOrderStore * blendedSearchRecentItemsOrderStore;              //@synthesize blendedSearchRecentItemsOrderStore=_blendedSearchRecentItemsOrderStore - In the implementation block
+(id)createAutocompleteCacheDirectory;
+(void)clearAutocompleteCacheDirectory;
+(id)autocompleteCacheDirectory;
-(NSString *)userSessionPK;
-(void)setBlendedSearchRecentItemsOrderStore:(IGBlendedSearchRecentItemsOrderStore *)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 blendedSearchRecentItemsOrderStore:(id)arg3 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(IGBlendedSearchRecentItemsOrderStore *)blendedSearchRecentItemsOrderStore;
-(id)regexPattern;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)archive;
-(void)dealloc;
-(NSRegularExpression *)regex;
-(void)setRegex:(NSRegularExpression *)arg1 ;
@end

