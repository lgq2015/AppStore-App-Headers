/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface YTInterval : NSObject {

	char _startInclusive;
	char _stopInclusive;
	double _start;
	double _stop;

}

@property (nonatomic,readonly) double start;                                             //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double stop;                                              //@synthesize stop=_stop - In the implementation block
@property (getter=isStartInclusive,nonatomic,readonly) char startInclusive;              //@synthesize startInclusive=_startInclusive - In the implementation block
@property (getter=isStopInclusive,nonatomic,readonly) char stopInclusive;                //@synthesize stopInclusive=_stopInclusive - In the implementation block
+(id)intervalWithStart:(double)arg1 startInclusive:(char)arg2 stop:(double)arg3 stopInclusive:(char)arg4 ;
-(id)initWithStart:(double)arg1 startInclusive:(char)arg2 stop:(double)arg3 stopInclusive:(char)arg4 ;
-(char)overlapsWithInterval:(id)arg1 ;
-(char)isStopInclusive;
-(char)isStartInclusive;
-(int)compareStartStopToInterval:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(double)stop;
-(char)containsPoint:(double)arg1 ;
-(double)start;
@end

