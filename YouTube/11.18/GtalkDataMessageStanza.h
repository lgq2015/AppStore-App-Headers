/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString, PBMutableArray, NSData;

@interface GtalkDataMessageStanza : PBGeneratedMessage

@property (assign,nonatomic) char hasRmqId; 
@property (assign,nonatomic) long long rmqId; 
@property (assign,nonatomic) char hasId_p; 
@property (nonatomic,retain) NSString * id_p; 
@property (assign,nonatomic) char hasFrom; 
@property (nonatomic,retain) NSString * from; 
@property (assign,nonatomic) char hasTo; 
@property (nonatomic,retain) NSString * to; 
@property (assign,nonatomic) char hasCategory; 
@property (nonatomic,retain) NSString * category; 
@property (assign,nonatomic) char hasToken; 
@property (nonatomic,retain) NSString * token; 
@property (assign,nonatomic) char hasAppDataArray; 
@property (nonatomic,retain) PBMutableArray * appDataArray; 
@property (assign,nonatomic) char hasFromTrustedServer; 
@property (assign,nonatomic) char fromTrustedServer; 
@property (assign,nonatomic) char hasPersistentId; 
@property (nonatomic,retain) NSString * persistentId; 
@property (assign,nonatomic) char hasStreamId; 
@property (assign,nonatomic) int streamId; 
@property (assign,nonatomic) char hasLastStreamIdReceived; 
@property (assign,nonatomic) int lastStreamIdReceived; 
@property (assign,nonatomic) char hasPermission; 
@property (nonatomic,retain) NSString * permission; 
@property (assign,nonatomic) char hasRegId; 
@property (nonatomic,retain) NSString * regId; 
@property (assign,nonatomic) char hasPkgSignature; 
@property (nonatomic,retain) NSString * pkgSignature; 
@property (assign,nonatomic) char hasClientId; 
@property (nonatomic,retain) NSString * clientId; 
@property (assign,nonatomic) char hasDeviceUserId; 
@property (assign,nonatomic) long long deviceUserId; 
@property (assign,nonatomic) char hasTtl; 
@property (assign,nonatomic) int ttl; 
@property (assign,nonatomic) char hasSent; 
@property (assign,nonatomic) long long sent; 
@property (assign,nonatomic) char hasQueued; 
@property (assign,nonatomic) int queued; 
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) char hasRawData; 
@property (nonatomic,retain) NSData * rawData; 
@property (assign,nonatomic) char hasMaxDelay; 
@property (assign,nonatomic) int maxDelay; 
@property (assign,nonatomic) char hasActualDelay; 
@property (assign,nonatomic) int actualDelay; 
@property (assign,nonatomic) char hasImmediateAck; 
@property (assign,nonatomic) char immediateAck; 
@property (assign,nonatomic) char hasDeliveryReceiptRequested; 
@property (assign,nonatomic) char deliveryReceiptRequested; 
@property (assign,nonatomic) char hasExternalMessageId; 
@property (nonatomic,retain) NSString * externalMessageId; 
@property (assign,nonatomic) char hasFlags; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) char hasPriority; 
@property (assign,nonatomic) int priority; 
+(id)descriptor;
@end

