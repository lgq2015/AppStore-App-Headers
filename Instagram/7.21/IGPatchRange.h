/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGSequence;

@interface IGPatchRange : NSObject {

	IGSequence* _start;
	IGSequence* _end;

}

@property (nonatomic,readonly) IGSequence * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) IGSequence * end;                //@synthesize end=_end - In the implementation block
-(id)unionRangeWithRange:(id)arg1 ;
-(char)containsSequence:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(IGSequence *)start;
-(IGSequence *)end;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
@end

