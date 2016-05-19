/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol YTNerdStatsVideoDataProtocol <NSObject>
@property (nonatomic,readonly) id<MLQoEMeasurementProvider> QoEMeasurementProvider; 
@property (nonatomic,readonly) NSString * videoID; 
@property (nonatomic,readonly) NSString * CPN; 
@property (nonatomic,readonly) int playerState; 
@property (nonatomic,readonly) double currentMediaTime; 
@property (nonatomic,readonly) double bufferedMediaTime; 
@property (nonatomic,readonly) CGSize currentVideoSize; 
@required
-(NSString *)videoID;
-(NSString *)CPN;
-(id<MLQoEMeasurementProvider>)QoEMeasurementProvider;
-(double)bufferedMediaTime;
-(CGSize)currentVideoSize;
-(double)currentMediaTime;
-(int)playerState;

@end

