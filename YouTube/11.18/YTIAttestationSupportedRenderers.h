/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIPlayerAttestationRenderer, YTIPlayerAttestationBotguardRenderer, YTIPlayerAttestationDummyRenderer, YTIPlayerAttestationDroidguardRenderer, YTIPlayerAttestationAdblockReportingRenderer;

@interface YTIAttestationSupportedRenderers : PBGeneratedMessage

@property (assign,nonatomic) char hasPlayerAttestationRenderer; 
@property (nonatomic,retain) YTIPlayerAttestationRenderer * playerAttestationRenderer; 
@property (assign,nonatomic) char hasPlayerAttestationBotguardRenderer; 
@property (nonatomic,retain) YTIPlayerAttestationBotguardRenderer * playerAttestationBotguardRenderer; 
@property (assign,nonatomic) char hasPlayerAttestationDummyRenderer; 
@property (nonatomic,retain) YTIPlayerAttestationDummyRenderer * playerAttestationDummyRenderer; 
@property (assign,nonatomic) char hasPlayerAttestationDroidguardRenderer; 
@property (nonatomic,retain) YTIPlayerAttestationDroidguardRenderer * playerAttestationDroidguardRenderer; 
@property (assign,nonatomic) char hasPlayerAttestationAdblockReportingRenderer; 
@property (nonatomic,retain) YTIPlayerAttestationAdblockReportingRenderer * playerAttestationAdblockReportingRenderer; 
+(id)descriptor;
@end

