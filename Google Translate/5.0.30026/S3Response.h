/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class NSString, PBMutableArray;

@interface S3Response : PBGeneratedMessage

@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) int errorCode; 
@property (assign,nonatomic) char hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription; 
@property (assign,nonatomic) char hasDebugLineArray; 
@property (nonatomic,retain) PBMutableArray * debugLineArray; 
+(id)descriptor;
@end

