/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, IGVideoInfo, IGVideoClip, NSData, NSString;

@interface IGQuickCamOutputVideoAsset : NSObject <IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
	int _devicePosition;
	IGVideoInfo* _videoInfo;

}

@property (nonatomic,retain) IGVideoInfo * videoInfo;               //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,readonly) IGVideoClip * clip; 
@property (nonatomic,readonly) NSData * videoData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * displayImage;                //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImage;                //@synthesize croppedImage=_croppedImage - In the implementation block
@property (assign,nonatomic) char isFromLibrary;                    //@synthesize isFromLibrary=_isFromLibrary - In the implementation block
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
-(void)setVideoInfo:(IGVideoInfo *)arg1 ;
-(IGVideoInfo *)videoInfo;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setCroppedImage:(UIImage *)arg1 ;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
-(UIImage *)croppedImage;
-(void)setIsFromLibrary:(char)arg1 ;
-(NSData *)imageData;
-(char)isPhoto;
-(NSData *)videoData;
-(IGVideoClip *)clip;
-(UIImage *)displayImage;
@end

