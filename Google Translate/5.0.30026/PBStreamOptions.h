/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class NSString, PBMutableArray;

@interface PBStreamOptions : PBGeneratedMessage

@property (assign,nonatomic) char hasClientInitialTokens; 
@property (assign,nonatomic) long long clientInitialTokens; 
@property (assign,nonatomic) char hasServerInitialTokens; 
@property (assign,nonatomic) long long serverInitialTokens; 
@property (assign,nonatomic) char hasTokenUnit; 
@property (assign,nonatomic) int tokenUnit; 
@property (assign,nonatomic) char hasSecurityLevel; 
@property (assign,nonatomic) int securityLevel; 
@property (assign,nonatomic) char hasSecurityLabel; 
@property (nonatomic,retain) NSString * securityLabel; 
@property (assign,nonatomic) char hasClientLogging; 
@property (assign,nonatomic) int clientLogging; 
@property (assign,nonatomic) char hasServerLogging; 
@property (assign,nonatomic) int serverLogging; 
@property (assign,nonatomic) char hasDeadline; 
@property (assign,nonatomic) double deadline; 
@property (assign,nonatomic) char hasFailFast; 
@property (assign,nonatomic) char failFast; 
@property (assign,nonatomic) char hasEndUserCredsRequested; 
@property (assign,nonatomic) char endUserCredsRequested; 
@property (assign,nonatomic) char hasLogLevel; 
@property (assign,nonatomic) int logLevel; 
@property (assign,nonatomic) char hasDeprecated; 
@property (assign,nonatomic) char deprecated; 
@property (assign,nonatomic) char hasUninterpretedOptionArray; 
@property (nonatomic,retain) PBMutableArray * uninterpretedOptionArray; 
+(id)descriptor;
@end

