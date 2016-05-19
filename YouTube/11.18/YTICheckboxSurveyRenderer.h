/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class PBMutableArray, YTIFormattedString, YTIServiceEndpoint, YTINavigationEndpoint, NSData, YTIButtonSupportedRenderers;

@interface YTICheckboxSurveyRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasImpressionRenderersArray; 
@property (nonatomic,retain) PBMutableArray * impressionRenderersArray; 
@property (assign,nonatomic) char hasQuestion; 
@property (nonatomic,retain) YTIFormattedString * question; 
@property (assign,nonatomic) char hasDismissalText; 
@property (nonatomic,retain) YTIFormattedString * dismissalText; 
@property (assign,nonatomic) char hasDismissalEndpoint; 
@property (nonatomic,retain) YTIServiceEndpoint * dismissalEndpoint; 
@property (assign,nonatomic) char hasOptionsArray; 
@property (nonatomic,retain) PBMutableArray * optionsArray; 
@property (assign,nonatomic) char hasFollowUpSurvey; 
@property (nonatomic,retain) YTINavigationEndpoint * followUpSurvey; 
@property (assign,nonatomic) char hasSurveyId; 
@property (assign,nonatomic) unsigned long long surveyId; 
@property (assign,nonatomic) char hasDisplayTime; 
@property (assign,nonatomic) int displayTime; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasSubmitButton; 
@property (nonatomic,retain) YTIButtonSupportedRenderers * submitButton; 
@property (assign,nonatomic) char hasDisplayDurationSeconds; 
@property (assign,nonatomic) unsigned displayDurationSeconds; 
+(id)descriptor;
@end

