/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/XMPPStanza.h>

@interface XMPPAckStanza : XMPPStanza

@property (assign,nonatomic) unsigned ackClass; 
@property (assign,nonatomic) unsigned receiptType; 
@property (assign,nonatomic) unsigned messageType; 
@property (assign,nonatomic) unsigned notificationType; 
@property (assign,nonatomic) unsigned callType; 
@property (nonatomic,readonly) int count; 
@property (nonatomic,readonly) char negative; 
+(id)stringsForTypes;
+(id)stringForType:(unsigned)arg1 ;
+(unsigned)typeForString:(id)arg1 ;
-(void)setReceiptType:(unsigned)arg1 ;
-(unsigned)ackClass;
-(void)setAckClass:(unsigned)arg1 ;
-(int)count;
-(id)log;
-(void)setNotificationType:(unsigned)arg1 ;
-(char)negative;
-(id)initWithClass:(unsigned)arg1 ;
-(unsigned)receiptType;
-(unsigned)notificationType;
-(void)setCallType:(unsigned)arg1 ;
-(unsigned)callType;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
@end

