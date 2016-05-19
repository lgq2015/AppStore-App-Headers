/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTBrowsyBarRefinementRenderer.h>

@class YTIFormattedString, PBMutableArray, YTINavigationEndpoint, YTISectionListRenderer, NSData, NSString, YTISearchBrowsyBarRefinementSupportedRenderers;

@interface YTISearchBrowsyBarRefinementRenderer : PBGeneratedMessage <YTBrowsyBarRefinementRenderer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasThumbnailsArray; 
@property (nonatomic,retain) PBMutableArray * thumbnailsArray; 
@property (assign,nonatomic) char hasSelected; 
@property (assign,nonatomic) char selected; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasContent; 
@property (nonatomic,retain) YTISearchBrowsyBarRefinementSupportedRenderers * content; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
+(id)descriptor;
-(char)hasFlattenedContent;
-(YTISectionListRenderer *)flattenedContent;
@end

