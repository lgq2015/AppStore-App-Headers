/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSPersistentStore, NSManagedObjectContext;

@interface WAJobPersistentStore : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPersistentStore* _jobStore;
	NSManagedObjectContext* _managedObjectContext;
	unsigned _nextAvailablePersistentId;
	char _loaded;

}

@property (nonatomic,readonly) char loaded;              //@synthesize loaded=_loaded - In the implementation block
-(id)persistentStorePath;
-(void)loadStore;
-(id)persistedJobs;
-(id)insertJob:(id)arg1 ;
-(char)removePersistentJob:(id)arg1 ;
-(id)createPersistentStoreFromCoordinator:(id)arg1 ;
-(char)saveContext;
-(char)save;
-(char)loaded;
-(id)init;
-(id)persistentStoreURL;
@end

