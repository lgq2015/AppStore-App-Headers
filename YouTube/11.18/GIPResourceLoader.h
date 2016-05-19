/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GIPCache;
@class NSString, NSMutableDictionary, NSBundle;

@interface GIPResourceLoader : NSObject {

	id<GIPCache> cache_;
	NSString* iPhonePrefix_;
	NSString* iPadPrefix_;
	NSMutableDictionary* bundleContents_;
	NSBundle* bundle_;

}

@property (nonatomic,copy,readonly) NSString * bundleName; 
+(void)setSharedLoader:(id)arg1 forBundle:(id)arg2 ;
+(id)sharedLoaderForBundleNamed:(id)arg1 ;
+(id)sharedLoaderForBundle:(id)arg1 ;
+(id)imageNamed:(id)arg1 fromLoader:(id)arg2 ;
+(id)bundleWithName:(id)arg1 ;
+(id)sharedLoaderKeyForBundle:(id)arg1 ;
+(id)sharedLoaderKeyForBundleNamed:(id)arg1 ;
+(void)setSharedLoader:(id)arg1 forBundleNamed:(id)arg2 ;
+(void)removeSharedLoaderForBundle:(id)arg1 ;
+(id)imageNamed:(id)arg1 fromLoader:(id)arg2 shouldCache:(char)arg3 ;
+(void)initialize;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithCacheSize:(int)arg1 bundle:(id)arg2 iPhonePrefix:(id)arg3 iPadPrefix:(id)arg4 ;
-(id)pathOfImageNamed:(id)arg1 ;
-(id)initWithCacheSize:(int)arg1 bundleName:(id)arg2 ;
-(id)initWithCacheSize:(int)arg1 bundleName:(id)arg2 iPhonePrefix:(id)arg3 iPadPrefix:(id)arg4 ;
-(id)imageNamed:(id)arg1 cache:(char)arg2 ;
-(char)isRetinaScreen;
-(id)pathOfRetinaImage:(id)arg1 ofType:(id)arg2 ;
-(id)imageFromFile:(id)arg1 ;
-(void)put:(id)arg1 forKey:(id)arg2 ;
-(id)pathForResourceNamed:(id)arg1 ;
-(id)contentsOfFileNamed:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 fromBundle:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(id)imageNamed:(id)arg1 ;
-(float)screenScale;
-(char)isPhone;
-(id)initWithBundleName:(id)arg1 ;
-(id)initWithCacheSize:(int)arg1 ;
-(NSString *)bundleName;
@end

