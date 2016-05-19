/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class YTIFormattedString, PBMutableArray, YTINavigationEndpoint, YTISectionListRenderer, NSData;


@protocol YTBrowsyBarRefinementRenderer <NSObject>
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,readonly) YTIFormattedString * title; 
@property (nonatomic,readonly) char hasThumbnailsArray; 
@property (nonatomic,readonly) PBMutableArray * thumbnailsArray; 
@property (nonatomic,readonly) char hasSelected; 
@property (nonatomic,readonly) char selected; 
@property (nonatomic,readonly) char hasNavigationEndpoint; 
@property (nonatomic,readonly) YTINavigationEndpoint * navigationEndpoint; 
@property (nonatomic,readonly) char hasFlattenedContent; 
@property (nonatomic,readonly) YTISectionListRenderer * flattenedContent; 
@property (nonatomic,readonly) char hasTrackingParams; 
@property (nonatomic,readonly) NSData * trackingParams; 
@required
-(YTINavigationEndpoint *)navigationEndpoint;
-(char)hasNavigationEndpoint;
-(PBMutableArray *)thumbnailsArray;
-(NSData *)trackingParams;
-(char)hasFlattenedContent;
-(YTISectionListRenderer *)flattenedContent;
-(char)hasThumbnailsArray;
-(char)hasTrackingParams;
-(YTIFormattedString *)title;
-(char)selected;
-(char)hasTitle;
-(char)hasSelected;

@end

