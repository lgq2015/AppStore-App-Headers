/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSDate, NSString;

@interface XMPPClient : NSObject {

	unsigned _lastSentChatState;
	NSLock* _outgoingChatStateLock;
	unsigned _lastReceivedChatState;
	NSLock* _incomingChatStateLock;
	unsigned _presence;
	NSDate* _outgoingChatStateTimestamp;
	NSDate* _incomingChatStateTimestamp;
	NSString* _groupJIDForChatState;
	NSDate* _lastSeenTimestamp;
	NSString* _jid;

}

@property (assign) unsigned presence;                                //@synthesize presence=_presence - In the implementation block
@property (assign) unsigned lastSentChatState; 
@property (retain) NSDate * outgoingChatStateTimestamp;              //@synthesize outgoingChatStateTimestamp=_outgoingChatStateTimestamp - In the implementation block
@property (assign) unsigned lastReceivedChatState; 
@property (retain) NSDate * incomingChatStateTimestamp;              //@synthesize incomingChatStateTimestamp=_incomingChatStateTimestamp - In the implementation block
@property (retain) NSString * groupJIDForChatState;                  //@synthesize groupJIDForChatState=_groupJIDForChatState - In the implementation block
@property (retain) NSDate * lastSeenTimestamp;                       //@synthesize lastSeenTimestamp=_lastSeenTimestamp - In the implementation block
@property (retain) NSString * jid;                                   //@synthesize jid=_jid - In the implementation block
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(id)initWithJID:(id)arg1 ;
-(void)setPresence:(unsigned)arg1 ;
-(unsigned)presence;
-(void)setLastReceivedChatState:(unsigned)arg1 ;
-(void)setLastSentChatState:(unsigned)arg1 ;
-(void)setGroupJIDForChatState:(NSString *)arg1 ;
-(void)setLastSeenTimestamp:(NSDate *)arg1 ;
-(void)setOutgoingChatStateTimestamp:(NSDate *)arg1 ;
-(void)setIncomingChatStateTimestamp:(NSDate *)arg1 ;
-(unsigned)lastSentChatState;
-(unsigned)lastReceivedChatState;
-(NSDate *)outgoingChatStateTimestamp;
-(NSDate *)incomingChatStateTimestamp;
-(NSString *)groupJIDForChatState;
-(NSDate *)lastSeenTimestamp;
-(void)reset;
@end

