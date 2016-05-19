/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class YTIChannelOfflineabilityQualitySupportedRenderers, YTIChannelOfflineabilityVideosSupportedRenderers, NSString, NSDate, NSData, YTOfflineImageEntity;

@interface YTOfflineSubscriptionEntity : NSManagedObject {

	YTIChannelOfflineabilityQualitySupportedRenderers* _ytiQualityOptionsData;
	YTIChannelOfflineabilityVideosSupportedRenderers* _ytiVideoOptionsData;

}

@property (nonatomic,copy) NSString * channelID; 
@property (nonatomic,copy) NSString * channelName; 
@property (nonatomic,copy) NSDate * dateLastSync; 
@property (assign,nonatomic) int maximumDownloadQuality; 
@property (assign,nonatomic) int recentVideoCount; 
@property (nonatomic,retain) NSData * qualityOptionsData; 
@property (nonatomic,readonly) YTIChannelOfflineabilityQualitySupportedRenderers * ytiQualityOptionsData;              //@synthesize ytiQualityOptionsData=_ytiQualityOptionsData - In the implementation block
@property (nonatomic,retain) NSData * videoOptionsData; 
@property (nonatomic,readonly) YTIChannelOfflineabilityVideosSupportedRenderers * ytiVideoOptionsData;                 //@synthesize ytiVideoOptionsData=_ytiVideoOptionsData - In the implementation block
@property (nonatomic,retain) YTOfflineImageEntity * channelThumbnail; 
@property (nonatomic,copy) NSString * userID; 
-(id)channelThumbnailFilenames;
-(YTIChannelOfflineabilityQualitySupportedRenderers *)ytiQualityOptionsData;
-(YTIChannelOfflineabilityVideosSupportedRenderers *)ytiVideoOptionsData;
-(id)offlineSubscription;
@end

