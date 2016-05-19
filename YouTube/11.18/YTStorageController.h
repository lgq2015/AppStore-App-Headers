/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, YTStoragePathsProvider;
@class NSObject, NSHashTable;

@interface YTStorageController : NSObject {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	char _previousHasStorageAvailable;
	id<YTStoragePathsProvider> _storagePathsProvider;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(char)hasStorageAvailable;
-(unsigned long long)freeStorageBytes;
-(void)fetchUsedStorageBytesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)freeBytesAfterReservingBytes:(unsigned long long)arg1 ;
-(unsigned long long)reservedOfflineStorageSpace;
-(id)fileSystemAttributes;
-(void)notifyUsedStorageDidChange;
-(void)notifyAvailableStorageDidBecomeEmpty;
-(id)initWithStoragePathsProvider:(id)arg1 ;
-(char)hasTemporaryStorageAvailable;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id)libraryURL;
-(void)notifyObservers;
@end

