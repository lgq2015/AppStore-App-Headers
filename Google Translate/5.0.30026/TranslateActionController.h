/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TranslateActionController : NSObject {

	NSString* _sourceLanguage;
	NSString* _targetLanguage;

}

@property (nonatomic,copy) NSString * sourceLanguage;              //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (nonatomic,copy) NSString * targetLanguage;              //@synthesize targetLanguage=_targetLanguage - In the implementation block
-(NSString *)sourceLanguage;
-(NSString *)targetLanguage;
-(void)setSourceLanguage:(NSString *)arg1 ;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)textToSpeechNetworkFailed:(id)arg1 ;
-(void)loadDefaultLanguagePair;
-(void)setDefaultLanguagesIfNeeded:(char)arg1 ;
-(void)swapLanguages;
-(void)storeDefaultLanguagePair;
-(id)sourceLanguageForHandwriting;
-(void)showGeneralErrorWithCode:(int)arg1 action:(/*^block*/id)arg2 ;
-(void)showNetworkFailureWithAction:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end

