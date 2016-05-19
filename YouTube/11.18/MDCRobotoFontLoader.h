/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/MDCTypographyFontLoading.h>

@class MDCFontDiskLoader, NSBundle, NSString;

@interface MDCRobotoFontLoader : NSObject <MDCTypographyFontLoading> {

	char _disableSanityChecks;
	MDCFontDiskLoader* _lightFontResource;
	MDCFontDiskLoader* _regularFontResource;
	MDCFontDiskLoader* _mediumFontResource;
	MDCFontDiskLoader* _boldFontResource;
	MDCFontDiskLoader* _lightItalicFontResource;
	MDCFontDiskLoader* _italicFontResource;
	MDCFontDiskLoader* _mediumItalicFontResource;
	MDCFontDiskLoader* _boldItalicFontResource;
	NSBundle* _baseBundle;
	NSString* _bundleFileName;

}

@property (nonatomic,retain) NSString * bundleFileName; 
@property (nonatomic,retain) MDCFontDiskLoader * lightFontResource;                     //@synthesize lightFontResource=_lightFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * regularFontResource;                   //@synthesize regularFontResource=_regularFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * mediumFontResource;                    //@synthesize mediumFontResource=_mediumFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * boldFontResource;                      //@synthesize boldFontResource=_boldFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * lightItalicFontResource;               //@synthesize lightItalicFontResource=_lightItalicFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * italicFontResource;                    //@synthesize italicFontResource=_italicFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * mediumItalicFontResource;              //@synthesize mediumItalicFontResource=_mediumItalicFontResource - In the implementation block
@property (nonatomic,retain) MDCFontDiskLoader * boldItalicFontResource;                //@synthesize boldItalicFontResource=_boldItalicFontResource - In the implementation block
@property (nonatomic,retain) NSBundle * baseBundle;                                     //@synthesize baseBundle=_baseBundle - In the implementation block
@property (nonatomic,retain) NSString * bundleFileName;                                 //@synthesize bundleFileName=_bundleFileName - In the implementation block
@property (assign,nonatomic) char disableSanityChecks;                                  //@synthesize disableSanityChecks=_disableSanityChecks - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseBundle;
+(char)isBoldFontName:(id)arg1 ;
+(id)italicFontFromFont:(id)arg1 ;
+(char)isItalicFontName:(id)arg1 ;
+(id)boldFontFromFont:(id)arg1 ;
+(id)sharedInstance;
-(NSBundle *)baseBundle;
-(id)regularFontOfSize:(float)arg1 ;
-(id)italicFontOfSize:(float)arg1 ;
-(id)boldItalicFontOfSize:(float)arg1 ;
-(id)mediumItalicFontOfSize:(float)arg1 ;
-(id)lightItalicFontOfSize:(float)arg1 ;
-(void)resetFontResources;
-(MDCFontDiskLoader *)regularFontResource;
-(MDCFontDiskLoader *)mediumFontResource;
-(MDCFontDiskLoader *)lightFontResource;
-(MDCFontDiskLoader *)boldFontResource;
-(MDCFontDiskLoader *)italicFontResource;
-(MDCFontDiskLoader *)lightItalicFontResource;
-(MDCFontDiskLoader *)mediumItalicFontResource;
-(MDCFontDiskLoader *)boldItalicFontResource;
-(void)setBundleFileName:(NSString *)arg1 ;
-(void)setBaseBundle:(NSBundle *)arg1 ;
-(void)setLightFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setRegularFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setMediumFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setBoldFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setLightItalicFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setItalicFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setMediumItalicFontResource:(MDCFontDiskLoader *)arg1 ;
-(void)setBoldItalicFontResource:(MDCFontDiskLoader *)arg1 ;
-(NSString *)bundleFileName;
-(char)disableSanityChecks;
-(void)setDisableSanityChecks:(char)arg1 ;
-(id)initInternal;
-(id)init;
-(id)lightFontOfSize:(float)arg1 ;
-(id)mediumFontOfSize:(float)arg1 ;
-(id)boldFontOfSize:(float)arg1 ;
@end

