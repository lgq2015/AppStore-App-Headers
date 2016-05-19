/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTBrowsyBarRenderer.h>

@class YTIFormattedString, NSArray, NSData, YTISectionListRenderer, NSString, PBMutableArray, YTISearchBrowsyBarRefinementSupportedRenderers;

@interface YTIBrowsySearchResultsRenderer : PBGeneratedMessage <YTBrowsyBarRenderer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,readonly) YTIFormattedString * title; 
@property (nonatomic,readonly) char hasFlattenedItemsArray; 
@property (nonatomic,readonly) NSArray * flattenedItemsArray; 
@property (nonatomic,readonly) char hasTrackingParams; 
@property (nonatomic,readonly) NSData * trackingParams; 
@property (nonatomic,readonly) char hasFlattenedContent; 
@property (nonatomic,readonly) YTISectionListRenderer * flattenedContent; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasItemsArray; 
@property (nonatomic,retain) PBMutableArray * itemsArray; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasContent; 
@property (nonatomic,retain) YTISearchBrowsyBarRefinementSupportedRenderers * content; 
+(id)descriptor;
-(char)hasFlattenedItemsArray;
-(NSArray *)flattenedItemsArray;
-(char)hasFlattenedContent;
-(YTISectionListRenderer *)flattenedContent;
@end

