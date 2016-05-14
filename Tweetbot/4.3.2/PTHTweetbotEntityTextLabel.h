/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHAttributedLabel.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PTHTweetbotEntityTextLabelDelegate;
@class UILongPressGestureRecognizer, NSMutableCharacterSet, PTHTweetbotEntityTextColorAppearance, PTHTweetbotEntityTextFontAppearance, PTHTweetbotEntity, NSString;

@interface PTHTweetbotEntityTextLabel : PTHAttributedLabel <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	CTFontRef _bodyCTFont;
	CTFontRef _placeCTFont;
	NSMutableCharacterSet* _foreignCharacterSet;
	char _highlightedPlace;
	char _selectedPlace;
	char _ignoresBackgroundTouch;
	char _ignoresPlaceTouch;
	PTHTweetbotEntityTextColorAppearance* _colorAppearance;
	PTHTweetbotEntityTextFontAppearance* _fontAppearance;
	id<PTHTweetbotEntityTextLabelDelegate> _delegate;
	PTHTweetbotEntity* _highlightedEntity;
	PTHTweetbotEntity* _selectedEntity;

}

@property (nonatomic,retain) PTHTweetbotEntityTextColorAppearance * colorAppearance;                   //@synthesize colorAppearance=_colorAppearance - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextFontAppearance * fontAppearance;                     //@synthesize fontAppearance=_fontAppearance - In the implementation block
@property (assign,nonatomic,__weak) id<PTHTweetbotEntityTextLabelDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntity * highlightedEntity;                                    //@synthesize highlightedEntity=_highlightedEntity - In the implementation block
@property (assign,nonatomic) char highlightedPlace;                                                    //@synthesize highlightedPlace=_highlightedPlace - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntity * selectedEntity;                                       //@synthesize selectedEntity=_selectedEntity - In the implementation block
@property (assign,nonatomic) char selectedPlace;                                                       //@synthesize selectedPlace=_selectedPlace - In the implementation block
@property (assign,nonatomic) char ignoresBackgroundTouch;                                              //@synthesize ignoresBackgroundTouch=_ignoresBackgroundTouch - In the implementation block
@property (assign,nonatomic) char ignoresPlaceTouch;                                                   //@synthesize ignoresPlaceTouch=_ignoresPlaceTouch - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(PTHTweetbotEntityTextColorAppearance *)colorAppearance;
-(void)setFontAppearance:(PTHTweetbotEntityTextFontAppearance *)arg1 ;
-(void)setColorAppearance:(PTHTweetbotEntityTextColorAppearance *)arg1 ;
-(void)setIgnoresBackgroundTouch:(char)arg1 ;
-(void)setSelectedEntity:(PTHTweetbotEntity *)arg1 ;
-(char)ignoresPlaceTouch;
-(void)setIgnoresPlaceTouch:(char)arg1 ;
-(id)entityAtPoint:(CGPoint)arg1 ;
-(PTHTweetbotEntity *)selectedEntity;
-(void)_fontAppearanceDidChange;
-(void)_colorAppearanceDidChange;
-(void)setHighlightedPlace:(char)arg1 ;
-(void)setHighlightedEntity:(PTHTweetbotEntity *)arg1 ;
-(char)selectedPlace;
-(PTHTweetbotEntity *)highlightedEntity;
-(char)highlightedPlace;
-(char)ignoresBackgroundTouch;
-(id)newDisplayText;
-(void)_longPress:(id)arg1 ;
-(void)setSelectedPlace:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PTHTweetbotEntityTextLabelDelegate>)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<PTHTweetbotEntityTextLabelDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

