/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTINavigationEndpoint, NSString, YTIChannelSubMenuSupportedContinuations;

@interface YTIChannelSubMenuItem : PBGeneratedMessage

@property (assign,nonatomic) char hasEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * endpoint; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) char hasSelected; 
@property (assign,nonatomic) char selected; 
@property (assign,nonatomic) char hasContinuation; 
@property (nonatomic,retain) YTIChannelSubMenuSupportedContinuations * continuation; 
+(id)descriptor;
@end

