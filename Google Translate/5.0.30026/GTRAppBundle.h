/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GTRAppBundle : NSObject {

	NSString* _bundleIdentifier;
	NSString* _resourcePath;
	NSString* _bundledProfilesPath;
	NSString* _appSupportDirectory;
	NSString* _cachesDirectory;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * resourcePath;                     //@synthesize resourcePath=_resourcePath - In the implementation block
@property (nonatomic,readonly) NSString * bundledProfilesPath;              //@synthesize bundledProfilesPath=_bundledProfilesPath - In the implementation block
@property (nonatomic,readonly) NSString * appSupportDirectory;              //@synthesize appSupportDirectory=_appSupportDirectory - In the implementation block
@property (nonatomic,readonly) NSString * cachesDirectory;                  //@synthesize cachesDirectory=_cachesDirectory - In the implementation block
+(id)sharedInstance;
-(NSString *)appSupportDirectory;
-(NSString *)bundledProfilesPath;
-(NSString *)cachesDirectory;
-(id)initPrivate;
-(NSString *)bundleIdentifier;
-(NSString *)resourcePath;
@end

