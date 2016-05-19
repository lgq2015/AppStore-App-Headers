/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDictionary, YTIChannelOfflineabilityQualitySupportedRenderers, YTIChannelOfflineabilityVideosSupportedRenderers;

@interface YTOfflineSubscription : NSObject <NSCopying> {

	NSString* _channelID;
	NSString* _channelName;
	NSDate* _dateLastSync;
	NSDictionary* _channelThumbnailFilenames;
	int _maximumDownloadQuality;
	unsigned _recentVideoCount;
	YTIChannelOfflineabilityQualitySupportedRenderers* _qualityOptionsData;
	YTIChannelOfflineabilityVideosSupportedRenderers* _videoOptionsData;

}

@property (nonatomic,readonly) NSString * channelID;                                                              //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSString * channelName;                                                            //@synthesize channelName=_channelName - In the implementation block
@property (nonatomic,retain) NSDate * dateLastSync;                                                               //@synthesize dateLastSync=_dateLastSync - In the implementation block
@property (nonatomic,readonly) NSDictionary * channelThumbnailFilenames;                                          //@synthesize channelThumbnailFilenames=_channelThumbnailFilenames - In the implementation block
@property (nonatomic,readonly) int maximumDownloadQuality;                                                        //@synthesize maximumDownloadQuality=_maximumDownloadQuality - In the implementation block
@property (nonatomic,readonly) unsigned recentVideoCount;                                                         //@synthesize recentVideoCount=_recentVideoCount - In the implementation block
@property (nonatomic,retain) YTIChannelOfflineabilityQualitySupportedRenderers * qualityOptionsData;              //@synthesize qualityOptionsData=_qualityOptionsData - In the implementation block
@property (nonatomic,retain) YTIChannelOfflineabilityVideosSupportedRenderers * videoOptionsData;                 //@synthesize videoOptionsData=_videoOptionsData - In the implementation block
-(int)maximumDownloadQuality;
-(NSDate *)dateLastSync;
-(void)setDateLastSync:(NSDate *)arg1 ;
-(id)autoOfflineChannelCheck;
-(YTIChannelOfflineabilityQualitySupportedRenderers *)qualityOptionsData;
-(YTIChannelOfflineabilityVideosSupportedRenderers *)videoOptionsData;
-(NSString *)channelID;
-(unsigned)recentVideoCount;
-(NSDictionary *)channelThumbnailFilenames;
-(id)initWithChannelID:(id)arg1 channelName:(id)arg2 dateLastSync:(id)arg3 maximumDownloadQuality:(int)arg4 recentVideoCount:(unsigned)arg5 channelThumbnailFilenames:(id)arg6 quality:(id)arg7 videos:(id)arg8 ;
-(void)setQualityOptionsData:(YTIChannelOfflineabilityQualitySupportedRenderers *)arg1 ;
-(void)setVideoOptionsData:(YTIChannelOfflineabilityVideosSupportedRenderers *)arg1 ;
-(NSString *)channelName;
-(char)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

