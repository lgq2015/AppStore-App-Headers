/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:46 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIShelfTypeDropdownItemRenderer, YTIDropdownItemGroupRenderer, YTIShelfStyleDropdownItemRenderer, YTIDropdownItemRenderer, YTIPrivacyDropdownItemRenderer;

@interface YTIDropdownEntrySupportedRenderers : PBGeneratedMessage

@property (assign,nonatomic) char hasShelfTypeDropdownItemRenderer; 
@property (nonatomic,retain) YTIShelfTypeDropdownItemRenderer * shelfTypeDropdownItemRenderer; 
@property (assign,nonatomic) char hasDropdownItemGroupRenderer; 
@property (nonatomic,retain) YTIDropdownItemGroupRenderer * dropdownItemGroupRenderer; 
@property (assign,nonatomic) char hasShelfStyleDropdownItemRenderer; 
@property (nonatomic,retain) YTIShelfStyleDropdownItemRenderer * shelfStyleDropdownItemRenderer; 
@property (assign,nonatomic) char hasDropdownItemRenderer; 
@property (nonatomic,retain) YTIDropdownItemRenderer * dropdownItemRenderer; 
@property (assign,nonatomic) char hasPrivacyDropdownItemRenderer; 
@property (nonatomic,retain) YTIPrivacyDropdownItemRenderer * privacyDropdownItemRenderer; 
+(id)descriptor;
@end

