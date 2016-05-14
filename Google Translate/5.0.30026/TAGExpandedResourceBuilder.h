/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableDictionary;

@interface TAGExpandedResourceBuilder : NSObject {

	NSString* _version;
	int _resourceFormatVersion;
	NSMutableArray* _rules;
	NSMutableDictionary* _macros;

}

@property (nonatomic,copy) NSString * version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) int resourceFormatVersion;                 //@synthesize resourceFormatVersion=_resourceFormatVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * rules;                    //@synthesize rules=_rules - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * macros;              //@synthesize macros=_macros - In the implementation block
-(int)resourceFormatVersion;
-(void)setResourceFormatVersion:(int)arg1 ;
-(NSMutableDictionary *)macros;
-(void)addMacro:(id)arg1 ;
-(void)setMacros:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)addRule:(id)arg1 ;
-(NSMutableArray *)rules;
-(id)build;
-(void)setRules:(NSMutableArray *)arg1 ;
@end

