/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAHKDF : NSObject
+(id)hkdfExtractFromKeyMaterial:(id)arg1 withSalt:(id)arg2 ;
+(id)hkdfExpandFromPRK:(id)arg1 info:(id)arg2 withIterationStartOffset:(unsigned char)arg3 outputLength:(unsigned short)arg4 ;
+(id)deriveSecretsFromInputKeyMaterial:(id)arg1 salt:(id)arg2 info:(id)arg3 outputLength:(unsigned short)arg4 withMessageVersion:(unsigned char)arg5 ;
@end

