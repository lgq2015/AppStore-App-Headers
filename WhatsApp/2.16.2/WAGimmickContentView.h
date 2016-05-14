/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, WAGimmick;

@interface WAGimmickContentView : UIView {

	UIActivityIndicatorView* _progressIndicator;
	WAGimmick* _gimmick;

}

@property (nonatomic,retain) WAGimmick * gimmick;                                                        //@synthesize gimmick=_gimmick - In the implementation block
@property (assign,getter=isProgressIndicatorHidden,nonatomic) char progressIndicatorHidden; 
-(WAGimmick *)gimmick;
-(void)setGimmick:(WAGimmick *)arg1 ;
-(void)reloadContentIfNeeded;
-(char)shouldShowProgressIndicator;
-(void)setProgressIndicatorHidden:(char)arg1 ;
-(void)gimmickContentStatusDidChange:(id)arg1 ;
-(char)isProgressIndicatorHidden;
-(void)reloadContent;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
@end

