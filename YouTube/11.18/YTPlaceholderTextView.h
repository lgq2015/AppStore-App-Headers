/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol YTPlaceholderTextViewDelegate;
@class UILabel, NSString;

@interface YTPlaceholderTextView : UITextView <UITextViewDelegate> {

	UILabel* _placeholderLabel;
	/*^block*/id _updateBlock;
	/*^block*/id _finishedBlock;
	id<YTPlaceholderTextViewDelegate> _placeholderTextViewDelegate;

}

@property (assign,nonatomic,__weak) id<YTPlaceholderTextViewDelegate> placeholderTextViewDelegate;              //@synthesize placeholderTextViewDelegate=_placeholderTextViewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUpdateBlock:(/*^block*/id)arg1 finishedBlock:(/*^block*/id)arg2 ;
-(void)setPlaceholderTextViewDelegate:(id<YTPlaceholderTextViewDelegate>)arg1 ;
-(void)setPlaceholderFont:(id)arg1 ;
-(void)updatePlaceholderTextVisibility;
-(id<YTPlaceholderTextViewDelegate>)placeholderTextViewDelegate;
-(void)setPlaceholderTextColor:(id)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textViewShouldEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(id)accessibilityValue;
@end

