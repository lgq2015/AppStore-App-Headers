/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GCKPB_PBGeneratedMessage.h>

@class GCKPBClientInfo, NSString, GCKPB_PBMutableArray;

@interface GCKPBLogRequest : GCKPB_PBGeneratedMessage

@property (assign,nonatomic) char hasRequestTimeMs; 
@property (assign,nonatomic) long long requestTimeMs; 
@property (assign,nonatomic) char hasClientInfo; 
@property (nonatomic,retain) GCKPBClientInfo * clientInfo; 
@property (assign,nonatomic) char hasLogSource; 
@property (assign,nonatomic) int logSource; 
@property (assign,nonatomic) char hasLogSourceName; 
@property (nonatomic,retain) NSString * logSourceName; 
@property (assign,nonatomic) char hasZwiebackCookie; 
@property (nonatomic,retain) NSString * zwiebackCookie; 
@property (assign,nonatomic) char hasLogEventArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * logEventArray; 
@property (assign,nonatomic) char hasSerializedLogEventsArray; 
@property (nonatomic,retain) GCKPB_PBMutableArray * serializedLogEventsArray; 
+(id)descriptor;
@end

