/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface FBSDKCrypto : NSObject {

	NSData* _encryptionKeyData;
	NSData* _macKeyData;

}
+(id)makeMasterKey;
+(id)randomBytes:(unsigned)arg1 ;
+(id)randomString:(unsigned)arg1 ;
-(id)initWithMasterKey:(id)arg1 ;
-(id)decrypt:(id)arg1 additionalSignedData:(id)arg2 ;
-(id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3 ;
-(id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2 ;
-(id)encrypt:(id)arg1 additionalDataToSign:(id)arg2 ;
-(void)dealloc;
@end

