/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTISectionListRenderer, YTIAnalyticsSparklineCardRenderer, YTIAnalyticsTimeSeriesCardRenderer, YTIAnalyticsErrorRenderer, YTIAnalyticsAnomalyRenderer, YTIAnalyticsAudienceRetentionCardRenderer, YTIAnalyticsLikesDislikesCardRenderer;

@interface YTIAnalyticsCardsSupportedRenderers : PBGeneratedMessage

@property (assign,nonatomic) char hasSectionListRenderer; 
@property (nonatomic,retain) YTISectionListRenderer * sectionListRenderer; 
@property (assign,nonatomic) char hasSparkline; 
@property (nonatomic,retain) YTIAnalyticsSparklineCardRenderer * sparkline; 
@property (assign,nonatomic) char hasTimeSeries; 
@property (nonatomic,retain) YTIAnalyticsTimeSeriesCardRenderer * timeSeries; 
@property (assign,nonatomic) char hasError; 
@property (nonatomic,retain) YTIAnalyticsErrorRenderer * error; 
@property (assign,nonatomic) char hasAnomaly; 
@property (nonatomic,retain) YTIAnalyticsAnomalyRenderer * anomaly; 
@property (assign,nonatomic) char hasRetention; 
@property (nonatomic,retain) YTIAnalyticsAudienceRetentionCardRenderer * retention; 
@property (assign,nonatomic) char hasLikesDislikes; 
@property (nonatomic,retain) YTIAnalyticsLikesDislikesCardRenderer * likesDislikes; 
+(id)descriptor;
@end

