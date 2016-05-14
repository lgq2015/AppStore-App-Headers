/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGHighlightButtonDelegate.h>

@class IGAlertAction, IGHighlightButton, UIView, NSString;

@interface IGActionView : UIView <IGHighlightButtonDelegate> {

	IGAlertAction* _action;
	IGHighlightButton* _button;
	UIView* _highlightView;

}

@property (nonatomic,readonly) IGHighlightButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UIView * highlightView;                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) IGAlertAction * action;                    //@synthesize action=_action - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped;
-(void)highlightButton:(id)arg1 didBecomeHighlighted:(char)arg2 ;
-(IGHighlightButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(IGAlertAction *)action;
-(void)setAction:(IGAlertAction *)arg1 ;
-(UIView *)highlightView;
@end

