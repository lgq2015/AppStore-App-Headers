/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Yik Yak/Yik Yak-Structs.h>
@interface PFSQLiteStatement : NSObject {

	sqlite3_stmtRef _sqliteStatement;

}

@property (assign) sqlite3_stmtRef sqliteStatement;              //@synthesize sqliteStatement=_sqliteStatement - In the implementation block
-(void)setSqliteStatement:(sqlite3_stmtRef)arg1 ;
-(char)reset;
-(char)close;
-(sqlite3_stmtRef)sqliteStatement;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
@end

