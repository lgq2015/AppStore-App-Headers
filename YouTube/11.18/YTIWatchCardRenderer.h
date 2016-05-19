/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTWatchCardEntry.h>

@class NSString, YTIFormattedString, YTINavigationEndpoint, PBMutableArray, YTIWatchCardCallToActionSupportedRenderers, YTIWatchCardRelatedData, YTIMenuSupportedRenderers, YTIWatchCardListSupportedRenderers, NSData;

@interface YTIWatchCardRenderer : PBGeneratedMessage <YTWatchCardEntry>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,readonly) YTIFormattedString * title; 
@property (nonatomic,readonly) char hasNavigationEndpoint; 
@property (nonatomic,readonly) YTINavigationEndpoint * navigationEndpoint; 
@property (nonatomic,readonly) PBMutableArray * labelsArray; 
@property (nonatomic,readonly) char hasCallToAction; 
@property (nonatomic,readonly) YTIWatchCardCallToActionSupportedRenderers * callToAction; 
@property (nonatomic,readonly) char hasRelatedData; 
@property (nonatomic,readonly) YTIWatchCardRelatedData * relatedData; 
@property (nonatomic,readonly) PBMutableArray * listsArray; 
@property (nonatomic,readonly) char hasCollapsed; 
@property (nonatomic,readonly) char collapsed; 
@property (nonatomic,readonly) char hasCollapsedLabel; 
@property (nonatomic,readonly) YTIFormattedString * collapsedLabel; 
@property (nonatomic,readonly) char hasMenu; 
@property (nonatomic,readonly) YTIMenuSupportedRenderers * menu; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasLabelsArray; 
@property (nonatomic,retain) PBMutableArray * labelsArray; 
@property (assign,nonatomic) char hasCallToAction; 
@property (nonatomic,retain) YTIWatchCardCallToActionSupportedRenderers * callToAction; 
@property (assign,nonatomic) char hasRelatedData; 
@property (nonatomic,retain) YTIWatchCardRelatedData * relatedData; 
@property (assign,nonatomic) char hasItems; 
@property (nonatomic,retain) YTIWatchCardListSupportedRenderers * items; 
@property (assign,nonatomic) char hasCollapsed; 
@property (assign,nonatomic) char collapsed; 
@property (assign,nonatomic) char hasCollapsedLabel; 
@property (nonatomic,retain) YTIFormattedString * collapsedLabel; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasMenu; 
@property (nonatomic,retain) YTIMenuSupportedRenderers * menu; 
+(id)descriptor;
-(PBMutableArray *)listsArray;
@end

