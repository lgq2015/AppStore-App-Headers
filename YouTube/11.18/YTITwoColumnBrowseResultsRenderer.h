/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTITwoColumnBrowseResultsRenderer_TwoColumnBrowsePrimarySupportedRenderers, YTITwoColumnBrowseResultsRenderer_TwoColumnBrowseSecondarySupportedRenderers, PBMutableArray;

@interface YTITwoColumnBrowseResultsRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasPrimaryContents; 
@property (nonatomic,retain) YTITwoColumnBrowseResultsRenderer_TwoColumnBrowsePrimarySupportedRenderers * primaryContents; 
@property (assign,nonatomic) char hasSecondaryContents; 
@property (nonatomic,retain) YTITwoColumnBrowseResultsRenderer_TwoColumnBrowseSecondarySupportedRenderers * secondaryContents; 
@property (assign,nonatomic) char hasTabsArray; 
@property (nonatomic,retain) PBMutableArray * tabsArray; 
+(id)descriptor;
@end

