/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAForwardPickerViewControllerDelegate <NSObject>
@optional
-(id)forwardPicker:(id)arg1 confirmationTextForContactInfo:(id)arg2;
-(id)forwardPicker:(id)arg1 confirmationButtonTitleForContactInfo:(id)arg2;

@required
-(void)forwardPickerDidCancel:(id)arg1;
-(void)forwardPicker:(id)arg1 didSelectContactInfo:(id)arg2;
-(char)forwardPicker:(id)arg1 shouldProceedWithContactInfo:(id)arg2;

@end

