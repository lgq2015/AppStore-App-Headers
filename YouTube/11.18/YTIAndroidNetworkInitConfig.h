/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIAndroidNetworkStackSupportedConfigs, YTIAndroidNetworkProtocolSupportedConfigs;

@interface YTIAndroidNetworkInitConfig : PBGeneratedMessage

@property (assign,nonatomic) char hasMediaNetworkStackConfig; 
@property (nonatomic,retain) YTIAndroidNetworkStackSupportedConfigs * mediaNetworkStackConfig; 
@property (assign,nonatomic) char hasMediaNetworkProtocolConfig; 
@property (nonatomic,retain) YTIAndroidNetworkProtocolSupportedConfigs * mediaNetworkProtocolConfig; 
@property (assign,nonatomic) char hasMetadataNetworkStackConfig; 
@property (nonatomic,retain) YTIAndroidNetworkStackSupportedConfigs * metadataNetworkStackConfig; 
@property (assign,nonatomic) char hasMetadataNetworkProtocolConfig; 
@property (nonatomic,retain) YTIAndroidNetworkProtocolSupportedConfigs * metadataNetworkProtocolConfig; 
+(id)descriptor;
@end

