/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSMutableArray;

@interface WAE2eMessage : NSObject {

	unsigned _messageType;
	NSString* _jid;
	NSString* _participant;
	NSString* _stanzaId;
	NSString* _conversation;
	NSData* _encryptedData;
	int _ciphertextMessageType;
	NSMutableArray* _participantMessages;

}

@property (assign,nonatomic) unsigned messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSString * jid;                                    //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) NSString * participant;                            //@synthesize participant=_participant - In the implementation block
@property (nonatomic,retain) NSString * stanzaId;                               //@synthesize stanzaId=_stanzaId - In the implementation block
@property (nonatomic,retain) NSString * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSData * encryptedData;                            //@synthesize encryptedData=_encryptedData - In the implementation block
@property (assign) int ciphertextMessageType;                                   //@synthesize ciphertextMessageType=_ciphertextMessageType - In the implementation block
@property (nonatomic,retain) NSMutableArray * participantMessages;              //@synthesize participantMessages=_participantMessages - In the implementation block
-(NSString *)jid;
-(int)setDecryptedData:(id)arg1 ;
-(void)setJid:(NSString *)arg1 ;
-(NSMutableArray *)participantMessages;
-(int)ciphertextMessageType;
-(id)initWithJID:(id)arg1 participant:(id)arg2 stanzaId:(id)arg3 ;
-(long long)recipientId;
-(long long)recepientIdForJid:(id)arg1 ;
-(void)setCiphertextMessageType:(int)arg1 ;
-(id)initForSharedItem:(id)arg1 ;
-(void)setStanzaId:(NSString *)arg1 ;
-(void)setParticipantMessages:(NSMutableArray *)arg1 ;
-(NSString *)stanzaId;
-(NSString *)participant;
-(void)setParticipant:(NSString *)arg1 ;
-(int)version;
-(id)initForMessage:(id)arg1 ;
-(void)setConversation:(NSString *)arg1 ;
-(NSString *)conversation;
-(NSData *)encryptedData;
-(void)setEncryptedData:(NSData *)arg1 ;
-(id)dataToEncrypt;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
@end

