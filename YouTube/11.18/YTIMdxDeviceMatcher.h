/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class NSString;

@interface YTIMdxDeviceMatcher : PBGeneratedMessage

@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) int connectionType; 
@property (assign,nonatomic) char hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer; 
@property (assign,nonatomic) char hasModelName; 
@property (nonatomic,retain) NSString * modelName; 
@property (assign,nonatomic) char hasDeviceVersion; 
@property (nonatomic,retain) NSString * deviceVersion; 
+(id)descriptor;
@end

