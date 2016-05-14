/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface FMDatabasePool : NSObject {

	NSString* _path;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSMutableArray* _databaseInPool;
	NSMutableArray* _databaseOutPool;
	id _delegate;
	unsigned _maximumNumberOfDatabasesToCreate;
	int _openFlags;

}

@property (retain) NSString * path;                                        //@synthesize path=_path - In the implementation block
@property (assign) id delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned maximumNumberOfDatabasesToCreate;              //@synthesize maximumNumberOfDatabasesToCreate=_maximumNumberOfDatabasesToCreate - In the implementation block
@property (readonly) int openFlags;                                        //@synthesize openFlags=_openFlags - In the implementation block
+(id)databasePoolWithPath:(id)arg1 ;
+(id)databasePoolWithPath:(id)arg1 flags:(int)arg2 ;
-(id)initWithPath:(id)arg1 flags:(int)arg2 ;
-(void)executeLocked:(/*^block*/id)arg1 ;
-(void)pushDatabaseBackInPool:(id)arg1 ;
-(void)beginTransaction:(char)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)countOfCheckedInDatabases;
-(unsigned)countOfCheckedOutDatabases;
-(unsigned)countOfOpenDatabases;
-(void)releaseAllDatabases;
-(void)inDatabase:(/*^block*/id)arg1 ;
-(void)inDeferredTransaction:(/*^block*/id)arg1 ;
-(id)inSavePoint:(/*^block*/id)arg1 ;
-(unsigned)maximumNumberOfDatabasesToCreate;
-(void)setMaximumNumberOfDatabasesToCreate:(unsigned)arg1 ;
-(int)openFlags;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)db;
-(void)inTransaction:(/*^block*/id)arg1 ;
@end

