/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@protocol _WASavedContentSearchResultsTableViewControllerConfigurationDelegate, UIViewControllerPreviewingDelegate;
@class NSArray;

@interface _WASavedContentSearchResultsTableViewController : WATableViewController {

	NSArray* _items;
	id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate> _configurationDelegate;
	id<UIViewControllerPreviewingDelegate> _previewingDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate> configurationDelegate;              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewingDelegate> previewingDelegate;                                                   //@synthesize previewingDelegate=_previewingDelegate - In the implementation block
-(void)setPreviewingDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)previewingDelegate;
-(void)applicationDidChangeStatusBarOrientation:(id)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setConfigurationDelegate:(id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate>)arg1 ;
-(id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate>)configurationDelegate;
@end

