/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIInnerTubeContext, NSString, YTICreateCommentRequest, NSData;

@interface YTIYPCCompleteTransactionRequest : PBGeneratedMessage

@property (assign,nonatomic) char hasContext; 
@property (nonatomic,retain) YTIInnerTubeContext * context; 
@property (assign,nonatomic) char hasOrderCode; 
@property (nonatomic,retain) NSString * orderCode; 
@property (assign,nonatomic) char hasOfferParams; 
@property (nonatomic,retain) NSString * offerParams; 
@property (assign,nonatomic) char hasTipParams; 
@property (nonatomic,retain) NSString * tipParams; 
@property (assign,nonatomic) char hasCreateCommentRequest; 
@property (nonatomic,retain) YTICreateCommentRequest * createCommentRequest; 
@property (assign,nonatomic) char hasSerializedWalletEventLogs; 
@property (nonatomic,retain) NSData * serializedWalletEventLogs; 
+(id)descriptor;
@end

