/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PTHTweetbotAccountData, NSString, PTHTweetbotRateLimit;

@interface PTHTweetbotAccountDataLoader : NSObject {

	char _loading;
	PTHTweetbotAccountData* _accountData;
	NSString* _tableName;
	PTHTweetbotRateLimit* _rateLimit;

}

@property (nonatomic,__weak,readonly) PTHTweetbotAccountData * accountData;              //@synthesize accountData=_accountData - In the implementation block
@property (nonatomic,readonly) NSString * tableName;                                     //@synthesize tableName=_tableName - In the implementation block
@property (retain) PTHTweetbotRateLimit * rateLimit;                                     //@synthesize rateLimit=_rateLimit - In the implementation block
@property (getter=isLoading) char loading;                                               //@synthesize loading=_loading - In the implementation block
-(PTHTweetbotAccountData *)accountData;
-(PTHTweetbotRateLimit *)rateLimit;
-(id)initWithAccountData:(id)arg1 ;
-(id)setup:(id)arg1 userVersion:(int)arg2 ;
-(id)verify:(id)arg1 ;
-(void)setRateLimit:(PTHTweetbotRateLimit *)arg1 ;
-(void)updateIfNeeded;
-(id)init;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
-(NSString *)tableName;
-(void)log:(/*^block*/id)arg1 ;
@end

