/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSString, NSMutableDictionary, NSMutableSet, NSDateFormatter;

@interface FMDatabase : NSObject {

	sqlite3Ref _db;
	NSString* _databasePath;
	char _logsErrors;
	char _crashOnErrors;
	char _traceExecution;
	char _checkedOut;
	char _shouldCacheStatements;
	char _isExecutingStatement;
	char _inTransaction;
	double _busyTimeout;
	NSMutableDictionary* _cachedStatements;
	NSMutableSet* _openResultSets;
	NSMutableSet* _openFunctions;
	NSDateFormatter* _dateFormat;

}

@property (assign) char traceExecution;                                 //@synthesize traceExecution=_traceExecution - In the implementation block
@property (assign) char checkedOut;                                     //@synthesize checkedOut=_checkedOut - In the implementation block
@property (assign) double busyTimeout;                                  //@synthesize busyTimeout=_busyTimeout - In the implementation block
@property (assign) char crashOnErrors;                                  //@synthesize crashOnErrors=_crashOnErrors - In the implementation block
@property (assign) char logsErrors;                                     //@synthesize logsErrors=_logsErrors - In the implementation block
@property (retain) NSMutableDictionary * cachedStatements;              //@synthesize cachedStatements=_cachedStatements - In the implementation block
+(id)databaseWithPath:(id)arg1 ;
+(id)sqliteLibVersion;
+(char)isSQLiteThreadSafe;
+(id)storeableDateFormat:(id)arg1 ;
-(void)resultSetDidClose:(id)arg1 ;
-(sqlite3Ref)sqliteHandle;
-(char)hasDateFormatter;
-(char)openWithFlags:(int)arg1 ;
-(char)beginDeferredTransaction;
-(char)startSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(char)rollbackToSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(char)releaseSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(id)inSavePoint:(/*^block*/id)arg1 ;
-(const char*)sqlitePath;
-(void)closeOpenResultSets;
-(char)rekeyWithData:(id)arg1 ;
-(char)setKeyWithData:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 ;
-(void)warnInUse;
-(id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(void*)arg4 ;
-(char)databaseExists;
-(id)cachedStatementForQuery:(id)arg1 ;
-(void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(void)extractSQL:(id)arg1 argumentsList:(void*)arg2 intoString:(id)arg3 arguments:(id)arg4 ;
-(id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 ;
-(char)executeUpdate:(id)arg1 error:(id*)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(void*)arg5 ;
-(char)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2 ;
-(void)setCachedStatements:(NSMutableDictionary *)arg1 ;
-(void)setRetryTimeout:(double)arg1 ;
-(double)retryTimeout;
-(int)busyRetryTimeout;
-(void)setBusyRetryTimeout:(int)arg1 ;
-(char)hasOpenResultSets;
-(char)rekey:(id)arg1 ;
-(char)goodConnection;
-(long long)lastInsertRowId;
-(id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2 ;
-(id)executeQueryWithFormat:(id)arg1 ;
-(id)executeQuery:(id)arg1 withVAList:(void*)arg2 ;
-(char)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2 ;
-(char)executeUpdate:(id)arg1 withVAList:(void*)arg2 ;
-(char)executeUpdateWithFormat:(id)arg1 ;
-(char)update:(id)arg1 withErrorAndBindings:(id*)arg2 ;
-(void)setShouldCacheStatements:(char)arg1 ;
-(void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)cachedStatements;
-(char)logsErrors;
-(void)setLogsErrors:(char)arg1 ;
-(char)crashOnErrors;
-(void)setCrashOnErrors:(char)arg1 ;
-(double)busyTimeout;
-(void)setBusyTimeout:(double)arg1 ;
-(char)checkedOut;
-(void)setCheckedOut:(char)arg1 ;
-(char)traceExecution;
-(void)setTraceExecution:(char)arg1 ;
-(id)getTableSchema:(id)arg1 ;
-(char)columnExists:(id)arg1 inTableWithName:(id)arg2 ;
-(int)intForQuery:(id)arg1 ;
-(long)longForQuery:(id)arg1 ;
-(char)boolForQuery:(id)arg1 ;
-(double)doubleForQuery:(id)arg1 ;
-(id)dataForQuery:(id)arg1 ;
-(id)dateForQuery:(id)arg1 ;
-(id)getSchema;
-(char)columnExists:(id)arg1 columnName:(id)arg2 ;
-(char)validateSQL:(id)arg1 error:(id*)arg2 ;
-(char)inTransaction;
-(void)clearCachedStatements;
-(int)changes;
-(id)executeQuery:(id)arg1 ;
-(void)setApplicationID:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(char)commit;
-(void)setDateFormat:(id)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(char)close;
-(id)initWithPath:(id)arg1 ;
-(char)setKey:(id)arg1 ;
-(id)dateFromString:(id)arg1 ;
-(unsigned)applicationID;
-(unsigned)userVersion;
-(void)setUserVersion:(unsigned)arg1 ;
-(char)open;
-(id)stringForQuery:(id)arg1 ;
-(char)executeUpdate:(id)arg1 ;
-(char)tableExists:(id)arg1 ;
-(char)shouldCacheStatements;
-(void)finalize;
-(char)rollback;
-(id)lastError;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(char)hadError;
-(id)databasePath;
-(char)beginTransaction;
@end

