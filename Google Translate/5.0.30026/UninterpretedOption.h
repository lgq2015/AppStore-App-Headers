/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class PBMutableArray, NSString, NSData;

@interface UninterpretedOption : PBGeneratedMessage

@property (assign,nonatomic) char hasNameArray; 
@property (nonatomic,retain) PBMutableArray * nameArray; 
@property (assign,nonatomic) char hasIdentifierValue; 
@property (nonatomic,retain) NSString * identifierValue; 
@property (assign,nonatomic) char hasPositiveIntValue; 
@property (assign,nonatomic) unsigned long long positiveIntValue; 
@property (assign,nonatomic) char hasNegativeIntValue; 
@property (assign,nonatomic) long long negativeIntValue; 
@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue; 
@property (assign,nonatomic) char hasStringValue; 
@property (nonatomic,retain) NSData * stringValue; 
@property (assign,nonatomic) char hasAggregateValue; 
@property (nonatomic,retain) NSString * aggregateValue; 
+(id)descriptor;
@end

