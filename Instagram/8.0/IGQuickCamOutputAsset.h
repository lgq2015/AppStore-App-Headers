/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, NSData;


@protocol IGQuickCamOutputAsset <NSObject>
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,retain) UIImage * croppedImage; 
@property (assign,nonatomic) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition; 
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
@required
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setCroppedImage:(id)arg1;
-(void)setDisplayImage:(id)arg1;
-(void)setDevicePosition:(int)arg1;
-(UIImage *)croppedImage;
-(void)setIsFromLibrary:(char)arg1;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;

@end

