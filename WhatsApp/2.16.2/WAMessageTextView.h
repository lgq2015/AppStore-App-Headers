/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WAMessageTextViewDelegate;
@class UIImageView, TextBlock, WAMessageFooterView, _WAMessageTextViewInternal, UIView, NSArray;

@interface WAMessageTextView : UIView {

	UIImageView* _listIconImageView;
	TextBlock* _selectedTextBlock;
	char _isHandlingLongPress;
	char _showListIcon;
	char _flippedHorizontally;
	float _dividerWidth;
	id<WAMessageTextViewDelegate> _delegate;
	WAMessageFooterView* _footerView;
	_WAMessageTextViewInternal* _messageTextViewInternal;
	UIView* _listIconSeparatorView;
	NSArray* _textMessages;

}

@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) float dividerWidth;                                                  //@synthesize dividerWidth=_dividerWidth - In the implementation block
@property (assign,nonatomic,__weak) id<WAMessageTextViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WAMessageFooterView * footerView;                                  //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) UIImageView * listIconImageView; 
@property (nonatomic,readonly) _WAMessageTextViewInternal * messageTextViewInternal;              //@synthesize messageTextViewInternal=_messageTextViewInternal - In the implementation block
@property (nonatomic,readonly) UIView * listIconSeparatorView;                                    //@synthesize listIconSeparatorView=_listIconSeparatorView - In the implementation block
@property (nonatomic,readonly) NSArray * textMessages;                                            //@synthesize textMessages=_textMessages - In the implementation block
@property (nonatomic,readonly) char showListIcon;                                                 //@synthesize showListIcon=_showListIcon - In the implementation block
@property (nonatomic,readonly) char flippedHorizontally;                                          //@synthesize flippedHorizontally=_flippedHorizontally - In the implementation block
+(CGSize)preferredSizeForCellData:(id)arg1 maximumWidth:(float)arg2 ;
+(void)initialize;
-(void)setStarIconHidden:(char)arg1 animated:(char)arg2 ;
-(void)configureWithCellData:(id)arg1 animated:(char)arg2 ;
-(id)linkDataForPreviewAtLocation:(CGPoint)arg1 returningLinkDisplayRect:(CGRect*)arg2 ;
-(NSArray *)textMessages;
-(UIImageView *)listIconImageView;
-(char)flippedHorizontally;
-(char)showListIcon;
-(_WAMessageTextViewInternal *)messageTextViewInternal;
-(void)unhighlightAllTextBlocks;
-(id)textBlockAtTouchLocation:(CGPoint)arg1 ;
-(void)highlightTextBlock:(id)arg1 ;
-(void)handleSingleTap;
-(UIView *)listIconSeparatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAMessageTextViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<WAMessageTextViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)contentView;
-(WAMessageFooterView *)footerView;
-(void)handleLongPress;
-(void)setDividerWidth:(float)arg1 ;
-(float)dividerWidth;
@end

