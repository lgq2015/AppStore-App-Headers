/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, PBMutableArray, NSData;

@interface YTIPollRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasQuestion; 
@property (nonatomic,retain) YTIFormattedString * question; 
@property (assign,nonatomic) char hasChoicesArray; 
@property (nonatomic,retain) PBMutableArray * choicesArray; 
@property (assign,nonatomic) char hasImpressionLoggingUrlsV2SArray; 
@property (nonatomic,retain) PBMutableArray * impressionLoggingUrlsV2SArray; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasTotalVotes; 
@property (nonatomic,retain) YTIFormattedString * totalVotes; 
@property (assign,nonatomic) char hasVotingStatus; 
@property (nonatomic,retain) YTIFormattedString * votingStatus; 
+(id)descriptor;
@end

