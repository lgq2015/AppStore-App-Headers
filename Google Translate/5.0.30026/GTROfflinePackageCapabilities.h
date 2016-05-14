/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GTROfflinePackageCapabilities : NSObject <NSSecureCoding> {

	char _language1OCR;
	char _language1Transliteration;
	char _language1Language2;
	char _language2OCR;
	char _language2Transliteration;
	char _language2Language1;

}

@property (getter=isLanguage1OCRSupported,nonatomic,readonly) char language1OCR;                                      //@synthesize language1OCR=_language1OCR - In the implementation block
@property (getter=isLanguage1TransliterationSupported,nonatomic,readonly) char language1Transliteration;              //@synthesize language1Transliteration=_language1Transliteration - In the implementation block
@property (getter=isLanguage1ToLanguage2Supported,nonatomic,readonly) char language1Language2;                        //@synthesize language1Language2=_language1Language2 - In the implementation block
@property (getter=isLanguage2OCRSupported,nonatomic,readonly) char language2OCR;                                      //@synthesize language2OCR=_language2OCR - In the implementation block
@property (getter=isLanguage2TransliterationSupported,nonatomic,readonly) char language2Transliteration;              //@synthesize language2Transliteration=_language2Transliteration - In the implementation block
@property (getter=isLanguage2ToLanguage1Supported,nonatomic,readonly) char language2Language1;                        //@synthesize language2Language1=_language2Language1 - In the implementation block
+(char)supportsSecureCoding;
-(char)isLanguage1ToLanguage2Supported;
-(char)isLanguage1OCRSupported;
-(char)isLanguage1TransliterationSupported;
-(char)isLanguage2ToLanguage1Supported;
-(char)isLanguage2OCRSupported;
-(char)isLanguage2TransliterationSupported;
-(id)initWithJSONDictionary:(id)arg1 ;
-(void)setCapabilitiesMask:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

