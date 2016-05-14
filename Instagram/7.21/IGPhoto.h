/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGImageURLProvider.h>

@class NSString, NSArray;

@interface IGPhoto : NSObject <NSCoding, IGImageURLProvider> {

	NSString* _mediaID;
	NSArray* _imageVersions;
	CGSize _aspectRatio;

}

@property (nonatomic,copy,readonly) NSString * mediaID;              //@synthesize mediaID=_mediaID - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) NSArray * imageVersions;                //@synthesize imageVersions=_imageVersions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)arrayForImageVersions:(id)arg1 ;
+(CGSize)aspectRatioForImageVersions:(id)arg1 ;
+(CGSize)imageSizeForImageVersion:(id)arg1 ;
-(id)imageURLForWidth:(float)arg1 ;
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2 ;
-(id)initWithFeedItemDictionary:(id)arg1 ;
-(id)initWithImageVersions:(id)arg1 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(NSString *)mediaID;
-(id)initWithImageVersions:(id)arg1 mediaID:(id)arg2 originalMediaSize:(CGSize)arg3 ;
-(NSArray *)imageVersions;
-(int)originalAspectRatioImageIndexNearestToWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageURLForImageIndex:(int)arg1 ;
-(int)originalAspectRatioImageIndexNearestToHeight:(float)arg1 scale:(float)arg2 ;
-(int)imageIndexOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(id)imageIndicesOfAtLeastSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)imageURLForHeight:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(int)originalAspectRatioImageIndexNearestToRequestedDimension:(float)arg1 imageInfoKey:(id)arg2 ;
-(void)setImageVersions:(NSArray *)arg1 ;
-(CGSize)aspectRatio;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setAspectRatio:(CGSize)arg1 ;
@end

