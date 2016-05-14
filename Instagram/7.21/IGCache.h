/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, IGDiskCache, NSObject;

@interface IGCache : NSObject {

	NSCache* _memCache;
	IGDiskCache* _diskCache;
	NSObject*<OS_dispatch_queue> _ioQueue;
	unsigned _trimmingTask;
	double _lastTrimTime;
	unsigned _diskCapacity;
	unsigned _maxObjectCount;

}

@property (nonatomic,readonly) unsigned diskCapacity;                //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (nonatomic,readonly) unsigned maxObjectCount;              //@synthesize maxObjectCount=_maxObjectCount - In the implementation block
-(id)io_queue_objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 diskCapacity:(unsigned)arg2 maxObjectCount:(unsigned)arg3 maxInMemoryCount:(unsigned)arg4 maxInMemoryCost:(unsigned)arg5 ;
-(void)objectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllObjectsWithDeletionBlock:(/*^block*/id)arg1 ;
-(unsigned)maxObjectCount;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)containsKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned)arg3 ;
-(unsigned)diskCapacity;
@end

