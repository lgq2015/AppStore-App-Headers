/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <YouTube/YTGetPhotoResponderProvider.h>
#import <YouTube/YTImageEditorControllerDelegate.h>
#import <YouTube/YTResponder.h>
#import <YouTube/YTTopController.h>

@protocol YTResponder;
@class YTINavigationEndpoint, UIImagePickerController, UIImage, NSString;

@interface YTGetPhotoController : UINavigationController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, YTGetPhotoResponderProvider, YTImageEditorControllerDelegate, YTResponder, YTTopController> {

	YTINavigationEndpoint* _navigationEndpoint;
	UIImagePickerController* _imagePickerController;
	id<YTResponder> _parentResponder;
	UIImage* _selectedPhotoImage;

}

@property (nonatomic,readonly) UIImage * selectedPhotoImage;                        //@synthesize selectedPhotoImage=_selectedPhotoImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(void)loadWithModel:(id)arg1 fromView:(id)arg2 ;
-(void)canBePushedWithBlock:(/*^block*/id)arg1 ;
-(char)isEqualTopController:(id)arg1 ;
-(void)resolveSelectionButton:(id)arg1 ;
-(UIImage *)selectedPhotoImage;
-(void)imageEditorController:(id)arg1 didFinishEditingWithImage:(id)arg2 ;
-(void)imageEditorControllerDidCancel:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)model;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

