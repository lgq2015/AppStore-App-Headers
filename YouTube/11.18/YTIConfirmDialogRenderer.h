/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/PBGeneratedMessage.h>

@class YTIFormattedString, YTIServiceEndpoint, NSData, PBMutableArray, YTINavigationEndpoint, YTIButtonSupportedRenderers;

@interface YTIConfirmDialogRenderer : PBGeneratedMessage

@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,retain) YTIFormattedString * title; 
@property (assign,nonatomic) char hasDialogMessage; 
@property (nonatomic,retain) YTIFormattedString * dialogMessage; 
@property (assign,nonatomic) char hasConfirmLabel; 
@property (nonatomic,retain) YTIFormattedString * confirmLabel; 
@property (assign,nonatomic) char hasCancelLabel; 
@property (nonatomic,retain) YTIFormattedString * cancelLabel; 
@property (assign,nonatomic) char hasConfirmEndpoint; 
@property (nonatomic,retain) YTIServiceEndpoint * confirmEndpoint; 
@property (assign,nonatomic) char hasTrackingParams; 
@property (nonatomic,retain) NSData * trackingParams; 
@property (assign,nonatomic) char hasDialogMessagesArray; 
@property (nonatomic,retain) PBMutableArray * dialogMessagesArray; 
@property (assign,nonatomic) char hasCancelEndpoint; 
@property (nonatomic,retain) YTIServiceEndpoint * cancelEndpoint; 
@property (assign,nonatomic) char hasConfirmNavigationEndpoint; 
@property (nonatomic,retain) YTINavigationEndpoint * confirmNavigationEndpoint; 
@property (assign,nonatomic) char hasConfirmActionsArray; 
@property (nonatomic,retain) PBMutableArray * confirmActionsArray; 
@property (assign,nonatomic) char hasConfirmButton; 
@property (nonatomic,retain) YTIButtonSupportedRenderers * confirmButton; 
@property (assign,nonatomic) char hasCancelButton; 
@property (nonatomic,retain) YTIButtonSupportedRenderers * cancelButton; 
+(id)descriptor;
@end

