/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGAlbumAddTextViewControllerDelegate;
@class NSString, UITextView;

@interface IGAlbumAddTextViewController : UIViewController <UITextViewDelegate, UIViewControllerTransitioningDelegate> {

	id<IGAlbumAddTextViewControllerDelegate> _delegate;
	NSString* _text;
	float _position;
	UITextView* _textView;
	float _touchPositionY;

}

@property (nonatomic,__weak,readonly) id<IGAlbumAddTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * text;                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) float position;                                                        //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                   //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) float touchPositionY;                                                    //@synthesize touchPositionY=_touchPositionY - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)touchPositionY;
-(void)setTouchPositionY:(float)arg1 ;
-(id)initWithText:(id)arg1 position:(float)arg2 delegate:(id)arg3 ;
-(void)tappedView:(id)arg1 ;
-(void)finishedEditing;
-(id<IGAlbumAddTextViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(NSString *)text;
-(float)position;
-(void)setTextView:(UITextView *)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(UITextView *)textView;
-(void)pan:(id)arg1 ;
@end

