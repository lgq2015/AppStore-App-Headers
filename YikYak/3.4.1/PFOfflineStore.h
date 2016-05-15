/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSMapTable;

@interface PFOfflineStore : NSObject {

	NSObject* _lock;
	NSMapTable* _classNameAndObjectIdToObjectMap;
	NSMapTable* _fetchedObjects;
	NSMapTable* _objectToUUIDMap;
	NSMapTable* _UUIDToObjectMap;

}

@property (nonatomic,readonly) NSObject * lock;                                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMapTable * classNameAndObjectIdToObjectMap;              //@synthesize classNameAndObjectIdToObjectMap=_classNameAndObjectIdToObjectMap - In the implementation block
@property (nonatomic,readonly) NSMapTable * fetchedObjects;                               //@synthesize fetchedObjects=_fetchedObjects - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectToUUIDMap;                              //@synthesize objectToUUIDMap=_objectToUUIDMap - In the implementation block
@property (nonatomic,readonly) NSMapTable * UUIDToObjectMap;                              //@synthesize UUIDToObjectMap=_UUIDToObjectMap - In the implementation block
+(id)_initializeTablesInBackground;
+(id)PFOfflineStoreParseObjectsTableSchema;
+(id)PFOfflineStoreDependenciesTableSchema;
+(void)enableOfflineStore;
+(void)disableOfflineStore;
+(id)currentOfflineStore;
+(char)isEnabled;
+(void)initialize;
-(id)getOrCreateUUIDAsyncForObject:(id)arg1 database:(id)arg2 ;
-(id)_getDatabaseAsync;
-(id)fetchObjectLocallyAsync:(id)arg1 database:(id)arg2 ;
-(NSMapTable *)objectToUUIDMap;
-(NSMapTable *)UUIDToObjectMap;
-(id)_getPointerAsyncWithUUID:(id)arg1 database:(id)arg2 ;
-(id)saveObjectLocallyAsync:(id)arg1 includeChildren:(char)arg2 database:(id)arg3 ;
-(id)saveObjectLocallyAsync:(id)arg1 withChildren:(id)arg2 database:(id)arg3 ;
-(id)unpinKeyAsync:(id)arg1 database:(id)arg2 ;
-(id)saveObjectLocallyAsync:(id)arg1 key:(id)arg2 database:(id)arg3 ;
-(id)findAsyncForQuery:(id)arg1 user:(id)arg2 pin:(id)arg3 isCount:(char)arg4 ;
-(id)findAsyncForQuery:(id)arg1 user:(id)arg2 pin:(id)arg3 isCount:(char)arg4 database:(id)arg5 ;
-(id)updateDataForObjectAsync:(id)arg1 database:(id)arg2 ;
-(id)deleteDataForObjectAsync:(id)arg1 database:(id)arg2 ;
-(id)_generateKeyForClassName:(id)arg1 objectId:(id)arg2 ;
-(NSMapTable *)classNameAndObjectIdToObjectMap;
-(id)_unpinKeyAsync:(id)arg1 ;
-(id)_deleteObjectsWithUUIDs:(id)arg1 database:(id)arg2 ;
-(id)fetchObjectLocallyAsync:(id)arg1 ;
-(id)saveObjectLocallyAsync:(id)arg1 includeChildren:(char)arg2 ;
-(id)saveObjectLocallyAsync:(id)arg1 withChildren:(id)arg2 ;
-(id)findAsyncForQuery:(id)arg1 user:(id)arg2 pin:(id)arg3 ;
-(id)countAsyncForQuery:(id)arg1 user:(id)arg2 pin:(id)arg3 ;
-(id)updateDataForObjectAsync:(id)arg1 ;
-(id)deleteDataForObjectAsync:(id)arg1 ;
-(id)unpinObjectAsync:(id)arg1 ;
-(id)getOrCreateObjectWithoutDataWithClassName:(id)arg1 objectId:(id)arg2 ;
-(void)updateObjectIdForObject:(id)arg1 oldObjectId:(id)arg2 newObjectId:(id)arg3 ;
-(void)simulateReboot;
-(NSMapTable *)fetchedObjects;
-(id)init;
-(NSObject *)lock;
-(void)clearDatabase;
@end

