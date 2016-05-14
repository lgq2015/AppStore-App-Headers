/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAAxolotlStoreDelegate;
#import <WhatsApp/WhatsApp-Structs.h>
@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSPersistentStore, NSManagedObjectContext, NSData;

@interface WAAxolotlStore : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPersistentStore* _axolotlStore;
	NSManagedObjectContext* _managedObjectContext;
	char _mustDeferStoreSaves;
	int _registrationId;
	NSData* _publicKey;
	NSData* _privateKey;
	id<WAAxolotlStoreDelegate> _delegate;

}

@property (assign) int registrationId;                                                //@synthesize registrationId=_registrationId - In the implementation block
@property (nonatomic,copy) NSData * publicKey;                                        //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy) NSData * privateKey;                                       //@synthesize privateKey=_privateKey - In the implementation block
@property (assign,nonatomic,__weak) id<WAAxolotlStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)metadataForKey:(id)arg1 ;
-(id)persistentStorePath;
-(void)setMetadata:(id)arg1 forKey:(id)arg2 ;
-(int)registrationId;
-(void)setRegistrationId:(int)arg1 ;
-(id)signedPreKeyData;
-(int)lastSentPreKeyId;
-(void)deferStoreSaves;
-(int)lastPreKeyId;
-(void)setLastPreKeyId:(int)arg1 ;
-(void)saveStore;
-(char)containsSessionForRecipient:(const axolotl_address*)arg1 ;
-(void)clearIdentityForRecipientId:(long long)arg1 ;
-(int)deleteAllSessionsForRecipientName:(const char*)arg1 length:(unsigned long)arg2 ;
-(void)saveMessageBaseKey:(id)arg1 forMessageWithStanzaId:(id)arg2 chatJid:(id)arg3 participantJid:(id)arg4 createIfNecessary:(char)arg5 ;
-(char)checkBaseKey:(id)arg1 forMessageWithStanzaId:(id)arg2 chatJid:(id)arg3 participantJid:(id)arg4 ;
-(id)unsentPreKeys;
-(void)setLastSentPreKeyId:(int)arg1 ;
-(char)checkPreKeysPresent:(id)arg1 ;
-(int)deleteSenderKeyRecordForName:(const axolotl_sender_key_name*)arg1 ;
-(char)storeSessionRecord:(id)arg1 recipient:(const axolotl_address*)arg2 ;
-(void)clearStore;
-(char)loadStore;
-(id)identityKeyForRecipientName:(const char*)arg1 length:(unsigned long)arg2 ;
-(id)preKeyRecordForId:(int)arg1 ;
-(char)storePreKeyRecord:(id)arg1 id:(int)arg2 ;
-(char)containsPreKeyRecordWithId:(int)arg1 ;
-(char)removePreKeyRecordWithId:(int)arg1 ;
-(id)signedPreKeyRecordForId:(int)arg1 ;
-(char)storeSignedPreKeyRecord:(id)arg1 id:(int)arg2 ;
-(char)containsSignedPreKeyRecordWithId:(int)arg1 ;
-(char)removeSignedPreKeyRecordWithId:(int)arg1 ;
-(id)sessionRecordForRecipient:(const axolotl_address*)arg1 ;
-(int)deleteSessionForRecipient:(const axolotl_address*)arg1 ;
-(char)storeIdentity:(id)arg1 recipientName:(const char*)arg2 length:(unsigned long)arg3 ;
-(char)isTrustedIdentity:(id)arg1 recipientName:(const char*)arg2 length:(unsigned long)arg3 ;
-(char)storeSenderKey:(id)arg1 senderKeyName:(const axolotl_sender_key_name*)arg2 ;
-(id)senderKeyRecordForName:(const axolotl_sender_key_name*)arg1 ;
-(char)saveContext;
-(void)cleanupOldMessageBaseKeys;
-(id)timeForSessionWithRecipientId:(long long)arg1 deviceId:(int)arg2 ;
-(void)setDelegate:(id<WAAxolotlStoreDelegate>)arg1 ;
-(id)init;
-(id<WAAxolotlStoreDelegate>)delegate;
-(id)managedObjectContext;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSData *)publicKey;
-(id)persistentStoreURL;
-(void)setPrivateKey:(NSData *)arg1 ;
-(NSData *)privateKey;
@end

