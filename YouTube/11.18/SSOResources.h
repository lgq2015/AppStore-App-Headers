/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface SSOResources : NSObject {

	NSString* _bundleName;
	NSBundle* _bundle;
	NSString* _fullBundleName;

}

@property (nonatomic,copy) NSString * bundleName;                    //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                      //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) NSString * fullBundleName;              //@synthesize fullBundleName=_fullBundleName - In the implementation block
+(id)tintImage:(id)arg1 withColor:(id)arg2 ;
+(id)bundleSearchOrder;
+(id)iconInSquareFromIcon:(id)arg1 ;
+(id)resources;
-(id)stringForID:(int)arg1 ;
-(id)defaultAvatar;
-(id)imageWithResourceName:(id)arg1 ;
-(NSString *)fullBundleName;
-(id)lighterImageWithResourceName:(id)arg1 ;
-(id)checkImage;
-(id)closeImage;
-(id)closeHighlightImage;
-(id)dropDownImage;
-(void)setFullBundleName:(NSString *)arg1 ;
-(id)init;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
@end

