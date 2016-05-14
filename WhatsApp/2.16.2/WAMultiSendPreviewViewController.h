/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAPageableItemBrowserViewDelegate.h>
#import <WhatsApp/WAMultiSendThumbnailBrowserViewDelegate.h>
#import <WhatsApp/WAMediaPickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <WhatsApp/WAMultiSendTitleViewDelegate.h>
#import <WhatsApp/WACaptionBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WACameraViewControllerDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>

@protocol WAMultiSendPreviewViewControllerDelegate;
@class NSMutableArray, NSString, NSArray, UIBarButtonItem, WAMultiSendTitleView, WACaptionBar, UIProgressView, UIView, WARecipientNameView, WAMediaPickerLibraryController, WAMultiSendThumbnailBrowserView, WAPageableItemBrowserView;

@interface WAMultiSendPreviewViewController : WAViewController <WAPageableItemBrowserViewDelegate, WAMultiSendThumbnailBrowserViewDelegate, WAMediaPickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WAMultiSendTitleViewDelegate, WACaptionBarDelegate, UIGestureRecognizerDelegate, WACameraViewControllerDelegate, WAImageToImageTransitioning> {

	int _selectedIndex;
	NSMutableArray* _mediaItems;
	NSString* _selectedItemUUIDBeforePresentingPicker;
	NSArray* _allAssetIdentifiersBeforePresentingPicker;
	double _imagePickerDelayStartTime;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _cancelExportButton;
	UIBarButtonItem* _doneCroppingButton;
	UIBarButtonItem* _sendButton;
	WAMultiSendTitleView* _titleView;
	WACaptionBar* _captionBar;
	float _captionBarAdjustment;
	char _rotateCurrentItemWhenKeyboardHides;
	char _cropCurrentItemWhenKeyboardHides;
	SCD_Struct_WA77 _transformInfoBeforeCropping;
	UIProgressView* _exportProgressView;
	char _cancelExportRequested;
	UIView* _touchTrapperView;
	WARecipientNameView* _recipientView;
	char _recipientUnknown;
	char _exportingItems;
	WAMediaPickerLibraryController* _libraryController;
	id<WAMultiSendPreviewViewControllerDelegate> _delegate;
	unsigned _pickerMode;
	id _lastUsedAssetCollectionIdentifier;
	NSString* _recipientName;
	WAMultiSendThumbnailBrowserView* _thumbnailBrowserView;
	WAPageableItemBrowserView* _pagingBrowserView;

}

@property (nonatomic,retain) WAMediaPickerLibraryController * libraryController;                        //@synthesize libraryController=_libraryController - In the implementation block
@property (assign,nonatomic,__weak) id<WAMultiSendPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned pickerMode;                                                       //@synthesize pickerMode=_pickerMode - In the implementation block
@property (nonatomic,retain) id lastUsedAssetCollectionIdentifier;                                      //@synthesize lastUsedAssetCollectionIdentifier=_lastUsedAssetCollectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                                                    //@synthesize recipientName=_recipientName - In the implementation block
@property (assign,nonatomic) char recipientUnknown;                                                     //@synthesize recipientUnknown=_recipientUnknown - In the implementation block
@property (nonatomic,retain) WAMultiSendThumbnailBrowserView * thumbnailBrowserView;                    //@synthesize thumbnailBrowserView=_thumbnailBrowserView - In the implementation block
@property (nonatomic,retain) WAPageableItemBrowserView * pagingBrowserView;                             //@synthesize pagingBrowserView=_pagingBrowserView - In the implementation block
@property (assign,getter=isCroppingCurrentItem,nonatomic) char croppingCurrentItem; 
@property (assign,getter=isExportingItems,nonatomic) char exportingItems;                               //@synthesize exportingItems=_exportingItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isMixingImagesAndVideosSupported;
-(void)wa_fontSizeDidChange;
-(char)shouldUseImageToImageTransitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)captionBarWillShowKeyboard:(id)arg1 ;
-(void)captionBarWillHideKeyboard:(id)arg1 ;
-(void)captionBarDidHideKeyboard:(id)arg1 ;
-(char)recipientUnknown;
-(void)setRecipientUnknown:(char)arg1 ;
-(void)addMediaItem:(id)arg1 ;
-(void)setLibraryController:(WAMediaPickerLibraryController *)arg1 ;
-(void)cameraViewControllerDidCancel:(id)arg1 ;
-(void)cameraViewController:(id)arg1 didFinishWithMediaItems:(id)arg2 ;
-(void)cameraViewController:(id)arg1 didSelectMediaPickerAsset:(id)arg2 cancelSelectionHandler:(/*^block*/id)arg3 ;
-(WAMediaPickerLibraryController *)libraryController;
-(void)captionBarDidFinishEditing:(id)arg1 ;
-(void)captionBarDidChangeText:(id)arg1 ;
-(void)multiSendTitleViewWillDeleteCurrentItem:(id)arg1 ;
-(void)multiSendTitleViewWillRotateCurrentItem:(id)arg1 ;
-(void)multiSendTitleViewDidChangeCropping:(id)arg1 ;
-(void)multiSendTitleView:(id)arg1 willChangeCroppingWithCompletionHandler:(/*^block*/id)arg2 ;
-(id)lastUsedAssetCollectionIdentifier;
-(void)setLastUsedAssetCollectionIdentifier:(id)arg1 ;
-(void)mediaPickerControllerDidFinishPresenting:(id)arg1 ;
-(void)mediaPickerController:(id)arg1 didFinishWithSelectedItems:(id)arg2 ;
-(void)cancelExport:(id)arg1 ;
-(void)doneCropping:(id)arg1 ;
-(void)resetStats;
-(void)sendAllMediaItems:(id)arg1 ;
-(WAMultiSendThumbnailBrowserView *)thumbnailBrowserView;
-(WAPageableItemBrowserView *)pagingBrowserView;
-(NSString *)recipientName;
-(void)browserViewTapped:(id)arg1 ;
-(void)moveThumbnailBrowserViewToBottom;
-(void)updateContentInsetWithAnimation:(char)arg1 ;
-(void)updateCaption;
-(char)isCroppingCurrentItem;
-(void)mediaItemDidUpdatePreviewContent:(id)arg1 ;
-(unsigned)indexOfMediaItemWithIdentifier:(id)arg1 ;
-(void)cancelExportingAndDisableAutoExportingForAllMediaItems;
-(void)startMonitoringMediaItem:(id)arg1 ;
-(void)cancelCropping;
-(void)cancelAllExport;
-(void)cancelAndExit;
-(void)takeMorePhotos;
-(void)takeAnotherPhoto;
-(void)selectAnotherImageFromPhotoLibrary;
-(void)stopMonitoringMediaItem:(id)arg1 ;
-(char)isExportingItems;
-(void)setCaptionOfCurrentItem:(id)arg1 ;
-(void)sendMediaItems:(id)arg1 fromItems:(id)arg2 atIndex:(int)arg3 saveToCameraRoll:(char)arg4 ;
-(void)updateExportProgress;
-(void)setExportingItems:(char)arg1 ;
-(void)finishWithProcessedItems:(id)arg1 ;
-(void)setCroppingCurrentItem:(char)arg1 ;
-(id)mediaItemWithUUID:(id)arg1 ;
-(void)removeImageAtIndex:(int)arg1 ;
-(void)selectAnotherImage;
-(id)pageableItemBrowserView:(id)arg1 itemAtIndex:(int)arg2 ;
-(int)pageableItemCount:(id)arg1 ;
-(void)pageableItemBrowserViewCurrentIndexDidChange:(id)arg1 ;
-(void)pageableItemBrowserView:(id)arg1 wantsToDeleteItemAtIndex:(int)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 willBeginEditingAnimationForItemAtIndex:(int)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 didEndEditingAnimationForItemAtIndex:(int)arg2 ;
-(void)pageableItemBrowserView:(id)arg1 willAnimateRotationOfItemAtIndex:(int)arg2 angle:(float)arg3 ;
-(void)pageableItemBrowserView:(id)arg1 didFinishRotatingItemAtIndex:(int)arg2 ;
-(void)pageableItemBrowserViewWillBeginFocusedTask:(id)arg1 ;
-(void)pageableItemBrowserViewDidEndFocusedTask:(id)arg1 ;
-(void)pageableItemBrowserViewDidScroll:(id)arg1 ;
-(char)pageableItemBrowserViewKeyboardIsShown:(id)arg1 ;
-(void)pageableItemBrowserView:(id)arg1 didUpdateThumbnailOfItemAtIndex:(int)arg2 ;
-(id)pageableItemBrowserViewContainingViewController:(id)arg1 ;
-(int)multiSendThumbnailBrowserViewItemCount;
-(id)multiSendMediaItemAtIndex:(int)arg1 ;
-(id)indicesOfMultiSendMediaItemsSortedByDate;
-(char)areMultiSendMediaItemsSorted;
-(void)multiSendThumbnailBrowserViewDidRequestAddItem:(id)arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestSend:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestRemovalOfItemAtIndex:(int)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didRequestSelectionOfItemAtIndex:(int)arg2 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 didMoveItemAtIndex:(int)arg2 toIndex:(int)arg3 ;
-(void)multiSendThumbnailBrowserViewDidChangeEditingMode:(id)arg1 ;
-(void)multiSendThumbnailBrowserViewDidRequestItemSort:(id)arg1 ;
-(void)multiSendThumbnailBrowserView:(id)arg1 willChangeFrame:(CGRect)arg2 ;
-(id)mediaItemWithAssetIdentifier:(id)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(void)setThumbnailBrowserView:(WAMultiSendThumbnailBrowserView *)arg1 ;
-(void)setPagingBrowserView:(WAPageableItemBrowserView *)arg1 ;
-(void)setSelectedIndex:(int)arg1 animated:(char)arg2 ;
-(void)setDelegate:(id<WAMultiSendPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reload;
-(id<WAMultiSendPreviewViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(unsigned)pickerMode;
-(void)setPickerMode:(unsigned)arg1 ;
-(void)updateLayout;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(void)updateInterface;
@end

