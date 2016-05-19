/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class YTMonotonicDate;

@interface YTValueWrapper : NSObject {

	id _value;
	YTMonotonicDate* _expires;
	unsigned _cost;

}

@property (nonatomic,readonly) id value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) YTMonotonicDate * expires;              //@synthesize expires=_expires - In the implementation block
@property (nonatomic,readonly) unsigned cost;                          //@synthesize cost=_cost - In the implementation block
+(id)wrapperWithValue:(id)arg1 expirationDate:(id)arg2 cost:(unsigned)arg3 ;
-(id)initWithValue:(id)arg1 expires:(id)arg2 cost:(unsigned)arg3 ;
-(id)value;
-(YTMonotonicDate *)expires;
-(unsigned)cost;
@end

