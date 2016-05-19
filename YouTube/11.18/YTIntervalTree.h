/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class YTIntervalNode;

@interface YTIntervalTree : NSObject {

	unsigned _count;
	YTIntervalNode* _root;

}

@property (nonatomic,readonly) unsigned count;                     //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) YTIntervalNode * root;              //@synthesize root=_root - In the implementation block
+(id)intervalTreeWithIntervals:(id)arg1 ;
-(id)intervalsContainingPoint:(double)arg1 ;
-(char)removeInterval:(id)arg1 ;
-(id)allIntervals;
-(void)enumerateIntervalsOverlappingInterval:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateIntervalsContainingPoint:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateAllIntervalsWithBlock:(/*^block*/id)arg1 ;
-(id)intervalsOverlappingInterval:(id)arg1 ;
-(unsigned)count;
-(YTIntervalNode *)root;
-(void)addNode:(id)arg1 ;
-(void)addInterval:(id)arg1 ;
@end

