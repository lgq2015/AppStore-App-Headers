/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class RecognitionContext, NSString;

@interface S3RecognizerInfo : PBGeneratedMessage

@property (assign,nonatomic) char hasRecognitionContext; 
@property (nonatomic,retain) RecognitionContext * recognitionContext; 
@property (assign,nonatomic) char hasMaxNbest; 
@property (assign,nonatomic) int maxNbest; 
@property (assign,nonatomic) char hasEnablePartialResults; 
@property (assign,nonatomic) char enablePartialResults; 
@property (assign,nonatomic) char hasEnablePartialNbest; 
@property (assign,nonatomic) char enablePartialNbest; 
@property (assign,nonatomic) char hasEnableLattice; 
@property (assign,nonatomic) char enableLattice; 
@property (assign,nonatomic) char hasProfanityFilter; 
@property (assign,nonatomic) int profanityFilter; 
@property (assign,nonatomic) char hasConfidenceThreshold; 
@property (assign,nonatomic) float confidenceThreshold; 
@property (assign,nonatomic) char hasCondition; 
@property (nonatomic,retain) NSString * condition; 
@property (assign,nonatomic) char hasDictationMode; 
@property (assign,nonatomic) char dictationMode; 
@property (assign,nonatomic) char hasEnableSemanticResults; 
@property (assign,nonatomic) char enableSemanticResults; 
@property (assign,nonatomic) char hasEnableAlternates; 
@property (assign,nonatomic) char enableAlternates; 
@property (assign,nonatomic) char hasEnableCombinedNbest; 
@property (assign,nonatomic) char enableCombinedNbest; 
@property (assign,nonatomic) char hasGreco2CompatMode; 
@property (assign,nonatomic) char greco2CompatMode; 
@property (assign,nonatomic) char hasEnablePersonalization; 
@property (assign,nonatomic) char enablePersonalization; 
@property (assign,nonatomic) char hasLoggingDataRequested; 
@property (assign,nonatomic) char loggingDataRequested; 
@property (assign,nonatomic) char hasLogFeaturesOnly; 
@property (assign,nonatomic) char logFeaturesOnly; 
@property (assign,nonatomic) char hasResetIntervalMs; 
@property (assign,nonatomic) int resetIntervalMs; 
@property (assign,nonatomic) char hasEnableEndpointerEvents; 
@property (assign,nonatomic) char enableEndpointerEvents; 
+(id)descriptor;
@end

