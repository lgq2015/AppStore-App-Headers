/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>
#import <YouTube/YTInnerTubeSectionHeaderRenderer.h>

@class NSString, NSData, YTIFormattedString, YTIItemSectionSubMenuSupportedRenderers, PBMutableArray;

@interface YTIItemSectionMenuHeaderRenderer : PBGeneratedMessage <YTInnerTubeSectionHeaderRenderer>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasSubMenu; 
@property (nonatomic,retain) YTIItemSectionSubMenuSupportedRenderers * subMenu; 
@property (assign,nonatomic) char hasButtonsArray; 
@property (nonatomic,retain) PBMutableArray * buttonsArray; 
+(id)descriptor;
-(id)serviceEndpoints;
@end

