/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropRankInfo : TBaseStruct {

	int __thrift_searchType;
	NSString* __thrift_searchQueryText;
	int __thrift_viewSubType;
	NSString* __thrift_rankToken;
	NSNumber* __thrift_itemRankResponseOffset;
	NSNumber* __thrift_itemRankDisplayOffset;
	NSNumber* __thrift_rankDisplayRowSize;
	NSNumber* __thrift_rankDisplayColumnSize;
	int __thrift_sectionType;
	NSString* __thrift_searchSessionId;
	NSString* __thrift_entityId;
	NSString* __thrift_searchImpressionToken;
	NSString* __thrift_extra;

}
-(id)searchQueryText;
-(int)viewSubType;
-(id)rankToken;
-(id)toDict;
-(id)initWithSearchType:(int)arg1 searchQueryText:(id)arg2 viewSubType:(int)arg3 rankToken:(id)arg4 itemRankResponseOffset:(id)arg5 itemRankDisplayOffset:(id)arg6 rankDisplayRowSize:(id)arg7 rankDisplayColumnSize:(id)arg8 sectionType:(int)arg9 searchSessionId:(id)arg10 entityId:(id)arg11 searchImpressionToken:(id)arg12 extra:(id)arg13 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(int)searchType;
@end

