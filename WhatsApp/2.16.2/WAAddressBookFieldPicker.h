/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@protocol WAAddressBookFieldPickerDelegate;
@class NSArray;

@interface WAAddressBookFieldPicker : WATableViewController {

	NSArray* _fieldSections;
	NSArray* _fields;
	id<WAAddressBookFieldPickerDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * fields;                                                  //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic,__weak) id<WAAddressBookFieldPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)pickerWithDelegate:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)setupFieldData;
-(void)cancelAction:(id)arg1 ;
-(void)setDelegate:(id<WAAddressBookFieldPickerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<WAAddressBookFieldPickerDelegate>)delegate;
-(void)viewDidLoad;
-(NSArray *)fields;
-(void)setFields:(NSArray *)arg1 ;
@end

