/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIVerifiedBadgeRenderer, YTILiveBadgeRenderer, YTIShelfFeaturedTextBadgeRenderer;

@interface YTIShelfBadgeSupportedRenderers : PBGeneratedMessage

@property (assign,nonatomic) char hasVerifiedBadgeRenderer; 
@property (nonatomic,retain) YTIVerifiedBadgeRenderer * verifiedBadgeRenderer; 
@property (assign,nonatomic) char hasLiveBadgeRenderer; 
@property (nonatomic,retain) YTILiveBadgeRenderer * liveBadgeRenderer; 
@property (assign,nonatomic) char hasShelfFeaturedTextBadgeRenderer; 
@property (nonatomic,retain) YTIShelfFeaturedTextBadgeRenderer * shelfFeaturedTextBadgeRenderer; 
+(id)descriptor;
@end

