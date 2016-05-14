/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface GSKLanguageManager : NSObject {

	NSArray* _availableLanguages;
	NSArray* _dogfoodLanguages;
	NSMutableDictionary* _canonicalLanguages;
	NSMutableDictionary* _languageMap;

}
+(id)defaultManager;
-(id)languageWithIdentifier:(id)arg1 ;
-(id)languageWithIdentifier:(id)arg1 locale:(id)arg2 ;
-(id)pathForPlist:(id)arg1 ;
-(id)canonicalLanguages;
-(id)languageForComponentLanguage:(id)arg1 script:(id)arg2 country:(id)arg3 ;
-(id)canonicalizationMap;
-(id)dogfoodLanguages;
-(id)languageForCurrentSystemLanguage;
-(id)availableLanguages;
@end

