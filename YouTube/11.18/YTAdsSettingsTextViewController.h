/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTAdsSettingsBaseViewController.h>

@class NSString, YTAdsSettingsTextView, UIButton;

@interface YTAdsSettingsTextViewController : YTAdsSettingsBaseViewController {

	NSString* _navTitle;
	NSString* _textTitle;
	NSString* _text;
	/*^block*/id _textChangeBlock;
	YTAdsSettingsTextView* _settingsTextView;
	UIButton* _addButton;
	UIButton* _cancelButton;

}
-(void)didPressCancelButton:(id)arg1 ;
-(void)didPressSaveButton:(id)arg1 ;
-(id)initWithNavTitle:(id)arg1 textTitle:(id)arg2 text:(id)arg3 textChangeBlock:(/*^block*/id)arg4 parentResponder:(id)arg5 ;
-(void)dealloc;
-(void)loadView;
@end

