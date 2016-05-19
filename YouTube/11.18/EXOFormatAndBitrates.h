/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EXOFormat;

@interface EXOFormatAndBitrates : NSObject {

	EXOFormat* _format;
	long long _downshiftBitrate;
	long long _upshiftBitrate;

}

@property (nonatomic,readonly) EXOFormat * format;                      //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) long long downshiftBitrate;              //@synthesize downshiftBitrate=_downshiftBitrate - In the implementation block
@property (nonatomic,readonly) long long upshiftBitrate;                //@synthesize upshiftBitrate=_upshiftBitrate - In the implementation block
-(id)initWithFormat:(id)arg1 downshiftBitrate:(long long)arg2 upshiftBitrate:(long long)arg3 ;
-(long long)downshiftBitrate;
-(long long)upshiftBitrate;
-(EXOFormat *)format;
-(id)init;
@end

