/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol History
@required
-(void)deleteHistoryEntry:(id)arg1;
-(id)searchHistoryForText:(id)arg1 fromLanguage:(id)arg2 toLanguage:(id)arg3;
-(id)historyEntryForTranslatedItem:(id)arg1;
-(void)addHistoryEntry:(id)arg1;
-(id)getAllHistoryItems;
-(void)rateHistoryEntry:(id)arg1 withStar:(int)arg2;
-(void)clearHistory;

@end

