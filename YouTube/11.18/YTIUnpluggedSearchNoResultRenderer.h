/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIIcon, YTIFormattedString, YTIUnpluggedButtonSupportedRenderers, NSData;

@interface YTIUnpluggedSearchNoResultRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasIcon; 
@property (nonatomic,retain) YTIIcon * icon; 
@property (assign,nonatomic) char hasUnavailableMessage; 
@property (nonatomic,retain) YTIFormattedString * unavailableMessage; 
@property (assign,nonatomic) char hasRedirectButton; 
@property (nonatomic,retain) YTIUnpluggedButtonSupportedRenderers * redirectButton; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
+(id)descriptor;
@end

