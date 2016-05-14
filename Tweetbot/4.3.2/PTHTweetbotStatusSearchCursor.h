/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCursor.h>

@class NSString, CLCircularRegion;

@interface PTHTweetbotStatusSearchCursor : PTHTweetbotCursor {

	NSString* _query;
	NSString* _resultType;
	CLCircularRegion* _region;

}

@property (nonatomic,copy,readonly) NSString * query;                   //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultType;              //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                 //@synthesize region=_region - In the implementation block
+(Class)itemClass;
-(id)initWithAccount:(id)arg1 query:(id)arg2 resultType:(id)arg3 ;
-(char)canAddItem:(id)arg1 ;
-(void)_applyFilters:(id)arg1 ;
-(char)hasReadStatus;
-(char)usesTIDPagination;
-(id)requestURLString;
-(id)itemsArrayFromResponse:(id)arg1 ;
-(id)queryDictionary;
-(void)dealloc;
-(NSString *)query;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(CLCircularRegion *)region;
-(id)uniqueID;
-(NSString *)resultType;
-(void)setAccount:(id)arg1 ;
@end

