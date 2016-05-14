/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAModalNavigationController.h>
#import <WhatsApp/PhoneConfirmationControllerDelegate.h>
#import <WhatsApp/FeedbackInputControllerDelegate.h>
#import <WhatsApp/DeleteConfirmationControllerDelegate.h>

@class NSString;

@interface WADeleteAccountController : WAModalNavigationController <PhoneConfirmationControllerDelegate, FeedbackInputControllerDelegate, DeleteConfirmationControllerDelegate> {

	char _didWarnAboutBackupDeletion;

}

@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate><WADeleteAccountControllerDelegate> delegate; 
@property (nonatomic,readonly) char didWarnAboutBackupDeletion;                                                                  //@synthesize didWarnAboutBackupDeletion=_didWarnAboutBackupDeletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)didWarnAboutBackupDeletion;
-(void)phoneConfirmationControllerDidFinish:(id)arg1 ;
-(void)phoneConfirmationControllerDidCancel:(id)arg1 ;
-(void)feedbackInputController:(id)arg1 didFinishWithFeedbackText:(id)arg2 ;
-(void)feedbackInputControllerDidCancel:(id)arg1 ;
-(void)deleteConfirmationControllerDidFinish:(id)arg1 ;
-(void)deleteConfirmationControllerDidCancel:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

