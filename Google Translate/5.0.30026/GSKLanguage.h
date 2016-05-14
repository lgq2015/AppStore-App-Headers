/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GSKLanguage : NSObject {

	NSString* _localizationPreference;
	NSString* _identifier;
	NSString* _englishName;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * englishName;                         //@synthesize englishName=_englishName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * localizationPreference; 
@property (nonatomic,readonly) char isDogfoodOnly; 
+(id)languageWithIdentifier:(id)arg1 properties:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 englishName:(id)arg2 displayName:(id)arg3 localizationPreference:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 englishName:(id)arg2 displayName:(id)arg3 ;
-(NSString *)localizationPreference;
-(char)isDogfoodOnly;
-(NSString *)identifier;
-(NSString *)displayName;
-(NSString *)englishName;
@end

