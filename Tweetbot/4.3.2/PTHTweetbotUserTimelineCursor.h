/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotUserCursor.h>

@interface PTHTweetbotUserTimelineCursor : PTHTweetbotUserCursor {

	unsigned _fetchCount;

}

@property (assign,nonatomic) unsigned fetchCount;              //@synthesize fetchCount=_fetchCount - In the implementation block
+(Class)itemClass;
-(void)setFetchCount:(unsigned)arg1 ;
-(char)hasReadStatus;
-(char)usesTIDPagination;
-(id)requestURLString;
-(unsigned)fetchCount;
-(id)queryDictionary;
-(id)initWithAccount:(id)arg1 ;
@end

