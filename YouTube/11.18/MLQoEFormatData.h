/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString;

@interface MLQoEFormatData : NSObject {

	NSDictionary* _itagToFormatsMap;
	NSArray* _sortedFormats;
	NSDictionary* _videoToAudioItagMap;
	NSString* _host;

}

@property (nonatomic,readonly) NSString * host;              //@synthesize host=_host - In the implementation block
+(id)buildItagToFormatsMap:(id)arg1 ;
+(id)QoEStreamDataFromMasterPlaylist:(id)arg1 host:(id)arg2 ;
-(id)initWithFormats:(id)arg1 videoToAudioItagMap:(id)arg2 host:(id)arg3 ;
-(id)bestQualityVideoFormatForViewportSize:(id)arg1 ;
-(id)videoFormatForItag:(int)arg1 ;
-(id)audioFormatForItag:(int)arg1 audioTrackID:(id)arg2 ;
-(NSString *)host;
@end

