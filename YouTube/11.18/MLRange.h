/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLRange : NSObject {

	long long _location;
	long long _length;

}

@property (nonatomic,readonly) long long location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long length;                //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) long long end; 
+(id)rangeWithLocation:(long long)arg1 length:(long long)arg2 ;
+(id)rangeWithLocation:(long long)arg1 ;
+(id)rangeWithLocation:(long long)arg1 end:(long long)arg2 ;
+(id)rangeWithRange:(id)arg1 startOffset:(long long)arg2 ;
+(id)rangeWithPropertiesDictionary:(id)arg1 ;
-(id)propertiesDictionary;
-(char)isUnbounded;
-(id)initWithLocation:(long long)arg1 length:(long long)arg2 ;
-(char)isEqualToRange:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(long long)length;
-(char)isEmpty;
-(long long)end;
-(long long)location;
-(char)containsRange:(id)arg1 ;
-(char)containsLocation:(long long)arg1 ;
@end

