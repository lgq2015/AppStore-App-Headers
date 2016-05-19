/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GCKPB_PBGeneratedMessage.h>

@class NSString, GCKPB_PBMutableArray, GCKPBPlayStoreLogEvent, GCKPBAppUsage1pLogEvent, NSData, GCKPBActiveExperiments, GCKPBExperimentIds;

@interface GCKPBLogEvent : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasEventTimeMs; 
@property (assign,nonatomic) long long eventTimeMs; 
@property (assign,nonatomic) char hasTag; 
@property (nonatomic,retain) NSString * tag; 
@property (assign,nonatomic) char hasEventCode; 
@property (assign,nonatomic) int eventCode; 
@property (assign,nonatomic) char hasEventFlowId; 
@property (assign,nonatomic) int eventFlowId; 
@property (assign,nonatomic) char hasIsUserInitiated; 
@property (assign,nonatomic) char isUserInitiated; 
@property (assign,nonatomic) char hasValueArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * valueArray; 
@property (assign,nonatomic) char hasStore; 
@property (nonatomic,retain) GCKPBPlayStoreLogEvent * store; 
@property (assign,nonatomic) char hasAppUsage1P; 
@property (nonatomic,retain) GCKPBAppUsage1pLogEvent * appUsage1P; 
@property (assign,nonatomic) char hasSourceExtension; 
@property (nonatomic,retain) NSData * sourceExtension; 
@property (assign,nonatomic) char hasSourceExtensionJs; 
@property (nonatomic,retain) NSData * sourceExtensionJs; 
@property (assign,nonatomic) char hasSourceExtensionJson; 
@property (nonatomic,retain) NSData * sourceExtensionJson; 
@property (assign,nonatomic) char hasExp; 
@property (nonatomic,retain) GCKPBActiveExperiments * exp; 
@property (assign,nonatomic) char hasTestId; 
@property (nonatomic,retain) NSString * testId; 
@property (assign,nonatomic) char hasTimezoneOffsetSeconds; 
@property (assign,nonatomic) long long timezoneOffsetSeconds; 
@property (assign,nonatomic) char hasExperimentIds; 
@property (nonatomic,retain) GCKPBExperimentIds * experimentIds; 
+(id)descriptor;
@end

