/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class CSHMMobileMessageEvent, UInt64Value;

@interface CSHMMobilePendingMessageEvent : PBGeneratedMessage

@property (assign,nonatomic) char hasMessageEvent; 
@property (nonatomic,retain) CSHMMobileMessageEvent * messageEvent; 
@property (assign,nonatomic) char hasClientTime; 
@property (nonatomic,retain) UInt64Value * clientTime; 
@property (assign,nonatomic) char hasIsSending; 
@property (assign,nonatomic) char isSending; 
+(id)descriptor;
@end

