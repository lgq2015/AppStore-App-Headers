/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/SSOIdentityContentViewObject.h>

@protocol SSOAccountSelectorIdentityContentViewDelegate;
@class SSOAccountSelectorIdentityContentView;

@interface SSOAccountSelectorIdentityContentViewObject : SSOIdentityContentViewObject {

	char _selected;
	char _editing;
	char _usesSwitchForSelection;
	id<SSOAccountSelectorIdentityContentViewDelegate> _accountDelegate;
	SSOAccountSelectorIdentityContentView* _contentView;

}

@property (assign,nonatomic,__weak) id<SSOAccountSelectorIdentityContentViewDelegate> accountDelegate;              //@synthesize accountDelegate=_accountDelegate - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;                                                       //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                                         //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) char usesSwitchForSelection;                                                           //@synthesize usesSwitchForSelection=_usesSwitchForSelection - In the implementation block
@property (assign,nonatomic,__weak) SSOAccountSelectorIdentityContentView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
+(id)objectWithIdentity:(id)arg1 profileSource:(id)arg2 accountDelegate:(id)arg3 ;
-(Class)contentViewClass;
-(void)setAccountDelegate:(id<SSOAccountSelectorIdentityContentViewDelegate>)arg1 ;
-(id<SSOAccountSelectorIdentityContentViewDelegate>)accountDelegate;
-(char)usesSwitchForSelection;
-(void)setUsesSwitchForSelection:(char)arg1 ;
-(SSOAccountSelectorIdentityContentView *)contentView;
-(void)setContentView:(SSOAccountSelectorIdentityContentView *)arg1 ;
-(char)isEditing;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setEditing:(char)arg1 ;
@end

