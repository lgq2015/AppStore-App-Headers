/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_group;
@class NSObject, NSArray, NSString;

@interface WAMediaPickerLibraryController : NSObject <PHPhotoLibraryChangeObserver> {

	NSObject*<OS_dispatch_group> _loadingDispatchGroup;
	char _assetsLibraryLoadingInProgress;
	NSArray* _albumControllers;
	char _reloadLibraryAfterEnteringForeground;
	char _containsAssets;
	unsigned _mediaType;

}

@property (nonatomic,readonly) NSArray * albumControllers;              //@synthesize albumControllers=_albumControllers - In the implementation block
@property (nonatomic,readonly) char containsAssets;                     //@synthesize containsAssets=_containsAssets - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)containsAssets;
-(void)assetsLibraryChanged:(id)arg1 ;
-(NSArray *)albumControllers;
-(char)isLibraryReady;
-(void)deferredInvalidateAndReload;
-(void)reloadAssetsLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)albumControllerForAssetCollection:(id)arg1 fromAvailableAlbums:(id)arg2 ;
-(unsigned)mediaType;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)dealloc;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 ;
-(void)invalidateAndReload;
@end

