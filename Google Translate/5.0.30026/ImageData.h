/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class NSData;

@interface ImageData : PBGeneratedMessage

@property (assign,nonatomic) char hasImageEncoding; 
@property (assign,nonatomic) int imageEncoding; 
@property (assign,nonatomic) char hasEncodedImage; 
@property (nonatomic,retain) NSData * encodedImage; 
@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) char hasHeight; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) char hasImageOffsetFromRightSideUp; 
@property (assign,nonatomic) int imageOffsetFromRightSideUp; 
@property (assign,nonatomic) char hasOffsetAlreadyApplied; 
@property (assign,nonatomic) char offsetAlreadyApplied; 
+(id)descriptor;
@end

