/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class PBMutableArray, AlignmentProto, GRCHotwordConfidenceFeature, NSData;

@interface GRCPartialResult : PBGeneratedMessage

@property (assign,nonatomic) char hasPartArray; 
@property (nonatomic,retain) PBMutableArray * partArray; 
@property (assign,nonatomic) char hasStartTimeUsec; 
@property (assign,nonatomic) long long startTimeUsec; 
@property (assign,nonatomic) char hasEndTimeUsec; 
@property (assign,nonatomic) long long endTimeUsec; 
@property (assign,nonatomic) char hasWordAlign; 
@property (nonatomic,retain) AlignmentProto * wordAlign; 
@property (assign,nonatomic) char hasPhoneAlign; 
@property (nonatomic,retain) AlignmentProto * phoneAlign; 
@property (assign,nonatomic) char hasStateAlign; 
@property (nonatomic,retain) AlignmentProto * stateAlign; 
@property (assign,nonatomic) char hasWordConfFeatureArray; 
@property (nonatomic,retain) PBMutableArray * wordConfFeatureArray; 
@property (assign,nonatomic) char hasHotwordConfFeature; 
@property (nonatomic,retain) GRCHotwordConfidenceFeature * hotwordConfFeature; 
@property (assign,nonatomic) char hasHotwordConfidence; 
@property (assign,nonatomic) float hotwordConfidence; 
@property (assign,nonatomic) char hasHotwordFired; 
@property (assign,nonatomic) char hotwordFired; 
@property (assign,nonatomic) char hasHotwordStartTimeUsec; 
@property (assign,nonatomic) long long hotwordStartTimeUsec; 
@property (assign,nonatomic) char hasHotwordEndTimeUsec; 
@property (assign,nonatomic) long long hotwordEndTimeUsec; 
@property (assign,nonatomic) char hasLatticeFst; 
@property (nonatomic,retain) NSData * latticeFst; 
@property (assign,nonatomic) char hasHypothesisArray; 
@property (nonatomic,retain) PBMutableArray * hypothesisArray; 
@property (assign,nonatomic) char hasVerificationResultArray; 
@property (nonatomic,retain) PBMutableArray * verificationResultArray; 
+(id)descriptor;
@end

