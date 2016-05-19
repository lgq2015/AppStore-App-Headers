/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface YTNetworkUsageState : NSObject {

	NSArray* _allUsages;

}

@property (nonatomic,readonly) NSArray * allUsages;                                            //@synthesize allUsages=_allUsages - In the implementation block
@property (nonatomic,readonly) char hasAnyMediaPlaybackNetworkUsage; 
@property (nonatomic,readonly) char hasMediaPlaybackNetworkUsage; 
@property (nonatomic,readonly) char hasLatencySensitiveMediaPlaybackNetworkUsage; 
@property (nonatomic,readonly) unsigned totalBitrate; 
-(char)hasAnyMediaPlaybackNetworkUsage;
-(char)hasLatencySensitiveMediaPlaybackNetworkUsage;
-(char)hasMediaPlaybackNetworkUsage;
-(unsigned)totalBitrate;
-(NSArray *)allUsages;
-(id)initWithNetworkUsages:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

