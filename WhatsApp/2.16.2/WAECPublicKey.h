/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface WAECPublicKey : NSObject {

	NSData* _key;

}

@property (nonatomic,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
+(id)generatePublicKeyFromPrivateKey:(id)arg1 ;
-(char)validateSignature:(id)arg1 withMessage:(id)arg2 ;
-(NSData *)key;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(char*)arg1 length:(unsigned)arg2 ;
@end

