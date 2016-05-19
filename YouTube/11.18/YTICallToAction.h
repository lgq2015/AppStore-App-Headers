/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString, YTINavigationEndpoint, YTIThumbnailDetails, NSData, YTIPlayerVisibility, PBMutableArray;

@interface YTICallToAction : PBGeneratedMessage

@property (assign,nonatomic) char hasStartTimeMs; 
@property (assign,nonatomic) long long startTimeMs; 
@property (assign,nonatomic) char hasEndTimeMs; 
@property (assign,nonatomic) long long endTimeMs; 
@property (assign,nonatomic) char hasHideTimeMs; 
@property (assign,nonatomic) long long hideTimeMs; 
@property (assign,nonatomic) char hasHeadline; 
@property (nonatomic,retain) NSString * headline; 
@property (assign,nonatomic) char hasDisplayUrl; 
@property (nonatomic,retain) NSString * displayUrl; 
@property (assign,nonatomic) char hasClickDestination; 
@property (nonatomic,retain) YTINavigationEndpoint * clickDestination; 
@property (assign,nonatomic) char hasImage; 
@property (nonatomic,retain) YTIThumbnailDetails * image; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasPlayerVisibility; 
@property (nonatomic,retain) YTIPlayerVisibility * playerVisibility; 
@property (assign,nonatomic) char hasImpressionLoggingUrlsArray; 
@property (nonatomic,retain) PBMutableArray * impressionLoggingUrlsArray; 
@property (assign,nonatomic) char hasCloseLoggingUrlsArray; 
@property (nonatomic,retain) PBMutableArray * closeLoggingUrlsArray; 
@property (assign,nonatomic) char hasCollapseAfterMs; 
@property (assign,nonatomic) int collapseAfterMs; 
+(id)descriptor;
-(unsigned)hash;
@end

