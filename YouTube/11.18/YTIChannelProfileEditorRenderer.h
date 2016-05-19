/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIChannelProfileImagePickerSupportedRenderers, YTIChannelProfileTextPreviewSupportedRenderers, YTIFormattedString, PBMutableArray;

@interface YTIChannelProfileEditorRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasProfileImage; 
@property (nonatomic,retain) YTIChannelProfileImagePickerSupportedRenderers * profileImage; 
@property (assign,nonatomic) char hasNamePreview; 
@property (nonatomic,retain) YTIChannelProfileTextPreviewSupportedRenderers * namePreview; 
@property (assign,nonatomic) char hasDescriptionPreview; 
@property (nonatomic,retain) YTIChannelProfileTextPreviewSupportedRenderers * descriptionPreview; 
@property (assign,nonatomic) char hasPrivacySettingsTitle; 
@property (nonatomic,retain) YTIFormattedString * privacySettingsTitle; 
@property (assign,nonatomic) char hasPrivacySettingsArray; 
@property (nonatomic,retain) PBMutableArray * privacySettingsArray; 
@property (assign,nonatomic) char hasDisclaimerText; 
@property (nonatomic,retain) YTIFormattedString * disclaimerText; 
@property (assign,nonatomic) char hasBannerImage; 
@property (nonatomic,retain) YTIChannelProfileImagePickerSupportedRenderers * bannerImage; 
+(id)descriptor;
@end

