/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/GPBMessage.h>

@class NSString, NSData, WAPBContextInfo;

@interface WAPBMessage_ExtendedTextMessage : GPBMessage

@property (assign,nonatomic) char hasText; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) char hasMatchedText; 
@property (nonatomic,copy) NSString * matchedText; 
@property (assign,nonatomic) char hasCanonicalURL; 
@property (nonatomic,copy) NSString * canonicalURL; 
@property (assign,nonatomic) char hasDescription_p; 
@property (nonatomic,copy) NSString * description_p; 
@property (assign,nonatomic) char hasTitle; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char hasJpegThumbnail; 
@property (nonatomic,copy) NSData * jpegThumbnail; 
@property (assign,nonatomic) char hasContextInfo; 
@property (nonatomic,retain) WAPBContextInfo * contextInfo; 
+(id)descriptor;
@end

