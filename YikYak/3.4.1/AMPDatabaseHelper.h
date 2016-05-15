/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Yik Yak/Yik Yak-Structs.h>
@class NSString;

@interface AMPDatabaseHelper : NSObject {

	NSString* _databasePath;
	char _databaseCreated;
	sqlite3Ref _database;
	dispatch_queue_sRef _queue;

}
+(id)getDatabaseHelper;
-(char)createTables;
-(char)execSQLString:(sqlite3Ref)arg1 SQLString:(id)arg2 ;
-(char)inDatabase:(/*^block*/id)arg1 ;
-(char)resetDB:(char)arg1 ;
-(char)deleteDB;
-(char)dropTables;
-(char)addEventToTable:(id)arg1 event:(id)arg2 ;
-(char)inDatabaseWithStatement:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)getEventsFromTable:(id)arg1 upToId:(long long)arg2 limit:(long long)arg3 ;
-(char)deleteKeyFromTable:(id)arg1 key:(id)arg2 ;
-(char)insertOrReplaceKeyValueToTable:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)getValueFromTable:(id)arg1 key:(id)arg2 ;
-(int)getEventCountFromTable:(id)arg1 ;
-(int)getEventCount;
-(int)getIdentifyCount;
-(char)removeEventsFromTable:(id)arg1 maxId:(long long)arg2 ;
-(char)removeEventFromTable:(id)arg1 eventId:(long long)arg2 ;
-(long long)getNthEventIdFromTable:(id)arg1 n:(long long)arg2 ;
-(char)upgrade:(int)arg1 newVersion:(int)arg2 ;
-(char)addIdentify:(id)arg1 ;
-(id)getEvents:(long long)arg1 limit:(long long)arg2 ;
-(id)getIdentifys:(long long)arg1 limit:(long long)arg2 ;
-(char)insertOrReplaceKeyValue:(id)arg1 value:(id)arg2 ;
-(char)insertOrReplaceKeyLongValue:(id)arg1 value:(id)arg2 ;
-(id)getLongValue:(id)arg1 ;
-(int)getTotalEventCount;
-(char)removeIdentifys:(long long)arg1 ;
-(char)removeIdentify:(long long)arg1 ;
-(long long)getNthEventId:(long long)arg1 ;
-(long long)getNthIdentifyId:(long long)arg1 ;
-(char)addEvent:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)getValue:(id)arg1 ;
-(char)removeEvent:(long long)arg1 ;
-(char)removeEvents:(long long)arg1 ;
@end

