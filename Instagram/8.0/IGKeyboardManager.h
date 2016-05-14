/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface IGKeyboardManager : NSObject {

	char _keyboardIsVisible;
	float _keyboardAnimationDuration;
	int _keyboardAnimationCurve;
	float _keyboardHeight;

}

@property (assign,nonatomic) float keyboardHeight;                         //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic) float keyboardAnimationDuration;              //@synthesize keyboardAnimationDuration=_keyboardAnimationDuration - In the implementation block
@property (assign,nonatomic) int keyboardAnimationCurve;                   //@synthesize keyboardAnimationCurve=_keyboardAnimationCurve - In the implementation block
@property (nonatomic,readonly) UIView * keyboard; 
@property (nonatomic,readonly) char keyboardIsVisible;                     //@synthesize keyboardIsVisible=_keyboardIsVisible - In the implementation block
+(id)sharedKeyboardManager;
-(float)keyboardHeight;
-(void)setKeyboardHeight:(float)arg1 ;
-(int)keyboardAnimationCurve;
-(float)keyboardAnimationDuration;
-(void)setKeyboardAnimationCurve:(int)arg1 ;
-(void)setKeyboardAnimationDuration:(float)arg1 ;
-(char)keyboardIsVisible;
-(void)warmKeyboard;
-(void)dealloc;
-(id)init;
-(UIView *)keyboard;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

