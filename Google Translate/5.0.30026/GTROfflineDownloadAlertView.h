/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOAlertView.h>

@class NITableViewActions, NITableViewModel, GOOTextContentViewObject, GOOCheckboxContentViewObject;

@interface GTROfflineDownloadAlertView : GOOAlertView {

	NITableViewActions* _dialogActions;
	NITableViewModel* _dialogModel;
	GOOTextContentViewObject* _downloadObject;
	GOOCheckboxContentViewObject* _largeObject;
	GOOCheckboxContentViewObject* _smallObject;
	char _isLargeSelected;

}
+(id)downloadDialogWithTitle:(id)arg1 fileSize:(long long)arg2 actionType:(int)arg3 downloadAction:(/*^block*/id)arg4 ;
+(id)wordLensDialogWithTitle:(id)arg1 smallFileSize:(long long)arg2 largeFileSize:(long long)arg3 smallDownloadAction:(/*^block*/id)arg4 largeDownloadAction:(/*^block*/id)arg5 cancelAction:(/*^block*/id)arg6 ;
+(UIEdgeInsets)dialogCellPadding;
-(id)initWithTitle:(id)arg1 smallFileSize:(int)arg2 largeFileSize:(int)arg3 style:(int)arg4 actionType:(int)arg5 smallDownloadAction:(/*^block*/id)arg6 largeDownloadAction:(/*^block*/id)arg7 cancelAction:(/*^block*/id)arg8 ;
-(void)setHyphenatedSubtitle:(id)arg1 ;
-(char)didTapSmall;
-(char)didTapLarge;
-(void)setAttributedSubtitle:(id)arg1 ;
@end

