/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface XMPPRequestWebClientReceipt : NSObject {

	NSString* _jid;
	NSArray* _messages;
	double _lastTimestamp;

}

@property (nonatomic,copy) NSString * jid;                      //@synthesize jid=_jid - In the implementation block
@property (nonatomic,copy) NSArray * messages;                  //@synthesize messages=_messages - In the implementation block
@property (assign,nonatomic) double lastTimestamp;              //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(double)lastTimestamp;
-(void)setLastTimestamp:(double)arg1 ;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
@end

