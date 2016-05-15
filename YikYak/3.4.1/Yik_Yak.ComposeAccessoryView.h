/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <UIKit/UIView.h>

@class YYHandleView, _TtC7Yik_Yak17YYHandleErrorView, UIButton, YYCharacterCountLabel;

@interface Yik_Yak.ComposeAccessoryView : UIView {

	 shouldShowCameraButton.storage;
	 shouldShowLinksButton.storage;
	 shouldShowHandleButton.storage;
	 composeHandleView.storage;
	 composeHandleErrorView.storage;
	 cameraButton.storage;
	 characterCountLabel.storage;

}

@property (assign,nonatomic) char shouldShowCameraButton; 
@property (assign,nonatomic) char shouldShowLinksButton; 
@property (assign,nonatomic) char shouldShowHandleButton; 
@property (retain,nonatomic) YYHandleView * composeHandleView; 
@property (retain,nonatomic) _TtC7Yik_Yak17YYHandleErrorView * composeHandleErrorView; 
@property (retain,nonatomic) UIButton * cameraButton; 
@property (retain,nonatomic) YYCharacterCountLabel * characterCountLabel; 
-(void)addSubviews;
-(UIButton *)cameraButton;
-(void)setCameraButton:(UIButton *)arg1 ;
-(char)shouldShowCameraButton;
-(void)setShouldShowCameraButton:(char)arg1 ;
-(char)shouldShowLinksButton;
-(void)setShouldShowLinksButton:(char)arg1 ;
-(char)shouldShowHandleButton;
-(void)setShouldShowHandleButton:(char)arg1 ;
-(YYHandleView *)composeHandleView;
-(void)setComposeHandleView:(YYHandleView *)arg1 ;
-(_TtC7Yik_Yak17YYHandleErrorView *)composeHandleErrorView;
-(void)setComposeHandleErrorView:(_TtC7Yik_Yak17YYHandleErrorView *)arg1 ;
-(void)addConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)initialize;
-(void)updateFrame;
-(YYCharacterCountLabel *)characterCountLabel;
-(void)setCharacterCountLabel:(YYCharacterCountLabel *)arg1 ;
@end

