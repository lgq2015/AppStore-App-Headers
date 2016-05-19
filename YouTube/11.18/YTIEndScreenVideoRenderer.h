/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString, YTIThumbnailDetails, YTIFormattedString, YTINavigationEndpoint, NSData;

@interface YTIEndScreenVideoRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasVideoId; 
@property (nonatomic,retain) NSString * videoId; 
@property (assign,nonatomic) char hasThumbnail; 
@property (nonatomic,retain) YTIThumbnailDetails * thumbnail; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasLongBylineText; 
@property (nonatomic,retain) YTIFormattedString * longBylineText; 
@property (assign,nonatomic) char hasShortBylineText; 
@property (nonatomic,retain) YTIFormattedString * shortBylineText; 
@property (assign,nonatomic) char hasViewCountText; 
@property (nonatomic,retain) YTIFormattedString * viewCountText; 
@property (assign,nonatomic) char hasLengthText; 
@property (nonatomic,retain) YTIFormattedString * lengthText; 
@property (assign,nonatomic) char hasLengthInSeconds; 
@property (assign,nonatomic) int lengthInSeconds; 
@property (assign,nonatomic) char hasFeatured; 
@property (assign,nonatomic) char featured; 
@property (assign,nonatomic) char hasNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * navigationEndpoint; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasShortViewCountText; 
@property (nonatomic,retain) YTIFormattedString * shortViewCountText; 
@property (assign,nonatomic) char hasPublishedTimeText; 
@property (nonatomic,retain) YTIFormattedString * publishedTimeText; 
+(id)descriptor;
@end

