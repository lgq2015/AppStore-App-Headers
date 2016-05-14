/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UIImage, CLLocation;

@interface IGAssetWriter : NSObject {

	NSMutableDictionary* _metadata;
	UIImage* _image;
	CLLocation* _location;

}

@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(void)writeVideo:(id)arg1 toInstagramAlbum:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)writeVideoToCameraRoll:(id)arg1 ;
+(void)writeVideoToInstagramAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)writeToInstagramAlbum;
-(id)initWithImage:(id)arg1 metadata:(id)arg2 ;
-(void)writeToCameraRoll;
-(void)writeToInstagramAlbum:(char)arg1 ;
-(void)showLibraryAccessMessage;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end

