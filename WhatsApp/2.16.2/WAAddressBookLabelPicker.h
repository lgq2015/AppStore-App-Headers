/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol WAAddressBookLabelPickerDelegate;
@class NSArray, UITableViewCell, UITextField, NSString, WAContactProperty;

@interface WAAddressBookLabelPicker : WATableViewController <UITextFieldDelegate, UIScrollViewDelegate> {

	NSArray* _predefinedLabels;
	UITableViewCell* _textFieldCell;
	UITextField* _textField;
	NSString* _textFieldDefaultText;
	WAContactProperty* _contactProperty;
	id<WAAddressBookLabelPickerDelegate> _delegate;

}

@property (nonatomic,retain) WAContactProperty * contactProperty;                               //@synthesize contactProperty=_contactProperty - In the implementation block
@property (assign,nonatomic,__weak) id<WAAddressBookLabelPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pickerWithDelegate:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)doneAction:(id)arg1 ;
-(WAContactProperty *)contactProperty;
-(void)cancelAction:(id)arg1 ;
-(void)setDelegate:(id<WAAddressBookLabelPickerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<WAAddressBookLabelPickerDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)setContactProperty:(WAContactProperty *)arg1 ;
@end

