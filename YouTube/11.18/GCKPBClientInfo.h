/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GCKPB_PBGeneratedMessage.h>

@class GCKPBAndroidClientInfo, GCKPBDesktopClientInfo, GCKPBIosClientInfo, GCKPBPlayCeClientInfo;

@interface GCKPBClientInfo : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasClientType; 
@property (assign,nonatomic) int clientType; 
@property (assign,nonatomic) char hasAndroidClientInfo; 
@property (nonatomic,retain) GCKPBAndroidClientInfo * androidClientInfo; 
@property (assign,nonatomic) char hasDesktopClientInfo; 
@property (nonatomic,retain) GCKPBDesktopClientInfo * desktopClientInfo; 
@property (assign,nonatomic) char hasIosClientInfo; 
@property (nonatomic,retain) GCKPBIosClientInfo * iosClientInfo; 
@property (assign,nonatomic) char hasPlayCeClientInfo; 
@property (nonatomic,retain) GCKPBPlayCeClientInfo * playCeClientInfo; 
+(id)descriptor;
@end

