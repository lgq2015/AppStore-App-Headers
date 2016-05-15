/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView, UIImageView, UILabel;

@interface Yik_Yak.HandleClaimedCardView : UIView {

	 handle;
	 hasShown;
	 contentViewStartPositionTop;
	 contentViewPresentPositionTop;
	 contentViewFinalPositionTop;
	 contentView.storage;
	 imageView.storage;
	 messageView.storage;
	 handleView.storage;

}

@property (copy,nonatomic) NSString * handle; 
@property (retain,nonatomic) UIView * contentView; 
@property (retain,nonatomic) UIImageView * imageView; 
@property (retain,nonatomic) UILabel * messageView; 
@property (retain,nonatomic) UILabel * handleView; 
-(void)showInWindowAfterShown:(/*^block*/id)arg1 afterDismissed:(/*^block*/id)arg2 ;
-(UILabel *)messageView;
-(void)setMessageView:(UILabel *)arg1 ;
-(UILabel *)handleView;
-(void)setHandleView:(UILabel *)arg1 ;
-(NSString *)handle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
@end

