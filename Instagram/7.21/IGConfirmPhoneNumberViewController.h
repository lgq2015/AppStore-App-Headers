/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGSMSConfirmationControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGConfirmPhoneNumberViewControllerDelegate;
@class IGSMSConfirmationController, IGTextField, NSString, IGConfirmPhoneSettings;

@interface IGConfirmPhoneNumberViewController : IGGroupedTableViewController <IGSMSConfirmationControllerDelegate, IGTextFieldDelegate> {

	char _submitting;
	id<IGConfirmPhoneNumberViewControllerDelegate> _delegate;
	IGSMSConfirmationController* _smsConfirmationController;
	IGTextField* _confirmNumberTextField;
	NSString* _phoneNumber;
	NSString* _confirmationCode;
	IGConfirmPhoneSettings* _confirmPhoneSettings;
	int _confirmationType;

}

@property (assign,nonatomic,__weak) id<IGConfirmPhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSMSConfirmationController * smsConfirmationController;                     //@synthesize smsConfirmationController=_smsConfirmationController - In the implementation block
@property (nonatomic,retain) IGTextField * confirmNumberTextField;                                        //@synthesize confirmNumberTextField=_confirmNumberTextField - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;                                                 //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,retain) IGConfirmPhoneSettings * confirmPhoneSettings;                               //@synthesize confirmPhoneSettings=_confirmPhoneSettings - In the implementation block
@property (assign,nonatomic) char submitting;                                                             //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) int confirmationType;                                                        //@synthesize confirmationType=_confirmationType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupNavigationItems;
-(IGTextField *)confirmNumberTextField;
-(IGSMSConfirmationController *)smsConfirmationController;
-(IGConfirmPhoneSettings *)confirmPhoneSettings;
-(void)callUserWithConfirmationCode;
-(int)confirmationType;
-(char)submitting;
-(id)smsURLForConfirmationType;
-(NSString *)confirmationCode;
-(void)setSubmitting:(char)arg1 ;
-(id)robocallURLForConfirmationType;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)checkConfirmationCode;
-(void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToResendConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToChangePhoneNumber:(id)arg1 ;
-(id)initWithConfirmationType:(int)arg1 confirmPhoneSettings:(id)arg2 phoneNumber:(id)arg3 ;
-(void)setSmsConfirmationController:(IGSMSConfirmationController *)arg1 ;
-(void)setConfirmNumberTextField:(IGTextField *)arg1 ;
-(void)setConfirmPhoneSettings:(IGConfirmPhoneSettings *)arg1 ;
-(void)setConfirmationType:(int)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGConfirmPhoneNumberViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGConfirmPhoneNumberViewControllerDelegate>)delegate;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(void)doneButtonTapped;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

