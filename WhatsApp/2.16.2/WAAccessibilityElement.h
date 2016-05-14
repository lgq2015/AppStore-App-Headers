/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface WAAccessibilityElement : UIAccessibilityElement {

	id _delegate;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(id)delegate;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
@end

