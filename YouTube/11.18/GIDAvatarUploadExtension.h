/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/GOOActionSheetDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <YouTube/SSOAccountManagerExtension.h>

@protocol SSOAccountManagerExtensionHost;
@class SSOService, GTLService, GOOActionSheet, NSString;

@interface GIDAvatarUploadExtension : NSObject <GOOActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SSOAccountManagerExtension> {

	SSOService* _ssoService;
	GTLService* _gtlService;
	id<SSOAccountManagerExtensionHost> _host;
	GOOActionSheet* _actionSheet;

}

@property (nonatomic,retain) GOOActionSheet * actionSheet;              //@synthesize actionSheet=_actionSheet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDidDisappear:(id)arg1 ;
-(GOOActionSheet *)actionSheet;
-(void)setActionSheet:(GOOActionSheet *)arg1 ;
-(void)updateProfilePicture:(id)arg1 ;
-(int)numberOfRowsForExtensionHost:(id)arg1 ;
-(id)contentViewObjectForExtensionHost:(id)arg1 row:(int)arg2 ;
-(/*^block*/id)actionForExtensionHost:(id)arg1 row:(int)arg2 ;
-(void)extensionWillAppear:(id)arg1 ;
-(void)extensionWillDisappear:(id)arg1 ;
-(id)authScopes;
-(id)circularImageForIdentity:(id)arg1 ;
-(id)lowResolutionPhotoDataFromImage:(id)arg1 ;
-(void)uploadProfilePictureWithData:(id)arg1 withUserID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)initWithService:(id)arg1 ;
@end

