/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, PBMutableArray, YTIServiceEndpoint, NSData, YTIThumbnailDetails, YTINavigationEndpoint;

@interface YTIFeedbackElicitationMultiStepRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasInitialQuestion; 
@property (nonatomic,retain) YTIFormattedString * initialQuestion; 
@property (assign,nonatomic) char hasAnswerOptionsArray; 
@property (nonatomic,retain) PBMutableArray * answerOptionsArray; 
@property (assign,nonatomic) char hasDismissalEndpoint; 
@property (nonatomic,retain) YTIServiceEndpoint * dismissalEndpoint; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasChannelTitle; 
@property (nonatomic,retain) YTIFormattedString * channelTitle; 
@property (assign,nonatomic) char hasChannelAvatar; 
@property (nonatomic,retain) YTIThumbnailDetails * channelAvatar; 
@property (assign,nonatomic) char hasChannelEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * channelEndpoint; 
@property (assign,nonatomic) char hasAvatarIs169; 
@property (assign,nonatomic) char avatarIs169; 
+(id)descriptor;
@end

