/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGReactSettings : NSObject {

	char _enableMinification;
	char _enableDev;

}

@property (assign,nonatomic) char enableMinification;              //@synthesize enableMinification=_enableMinification - In the implementation block
@property (assign,nonatomic) char enableDev;                       //@synthesize enableDev=_enableDev - In the implementation block
+(id)sharedSettings;
-(char)enableDev;
-(char)enableMinification;
-(id)jsBundleURLForBundleRoot:(id)arg1 ;
-(void)setEnableMinification:(char)arg1 ;
-(void)setEnableDev:(char)arg1 ;
@end

