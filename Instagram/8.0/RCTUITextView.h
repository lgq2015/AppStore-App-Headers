/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextView.h>

@interface RCTUITextView : UITextView {

	char _jsRequestingFirstResponder;
	char _textWasPasted;

}

@property (assign,nonatomic) char textWasPasted;              //@synthesize textWasPasted=_textWasPasted - In the implementation block
-(void)reactWillMakeFirstResponder;
-(void)reactDidMakeFirstResponder;
-(char)textWasPasted;
-(void)setTextWasPasted:(char)arg1 ;
-(char)canBecomeFirstResponder;
-(void)paste:(id)arg1 ;
@end

