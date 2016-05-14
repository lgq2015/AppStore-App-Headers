/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@class NSMutableArray;

@interface WAFAQBrowserViewController : WATableViewController {

	NSMutableArray* _entries;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned numberOfEntriesOpened; 
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(unsigned)numberOfEntriesOpened;
-(id)entriesByReadTime;
-(void)sendEmail:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)initWithEntries:(id)arg1 ;
@end

