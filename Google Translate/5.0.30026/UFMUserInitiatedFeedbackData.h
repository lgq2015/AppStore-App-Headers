/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/PBGeneratedMessage.h>

@class PBMutableArray, UFMImage, NSString;

@interface UFMUserInitiatedFeedbackData : PBGeneratedMessage

@property (assign,nonatomic) char hasProductSpecificBinaryDataArray; 
@property (nonatomic,retain) PBMutableArray * productSpecificBinaryDataArray; 
@property (assign,nonatomic) char hasScreenshot; 
@property (nonatomic,retain) UFMImage * screenshot; 
@property (assign,nonatomic) char hasProductId; 
@property (assign,nonatomic) int productId; 
@property (assign,nonatomic) char hasCategoryTag; 
@property (nonatomic,retain) NSString * categoryTag; 
@property (assign,nonatomic) char hasHighlightBoundsArray; 
@property (nonatomic,retain) PBMutableArray * highlightBoundsArray; 
+(id)descriptor;
@end

