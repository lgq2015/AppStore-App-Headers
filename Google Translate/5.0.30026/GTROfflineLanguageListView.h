/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/GOOTextContentView.h>

@class GTROfflineLanguageListViewObject, QTMButton;

@interface GTROfflineLanguageListView : GOOTextContentView {

	GTROfflineLanguageListViewObject* _modelObject;
	QTMButton* _actionButton;

}
+(UIEdgeInsets)textInsetsFromObject:(id)arg1 ;
+(id)iconImageForActionType:(unsigned char)arg1 ;
+(char)detailTextLabelIsAttributed;
+(id)textFont;
-(void)accessibilityFontAttributesChanged:(id)arg1 ;
-(void)updateViewWithObject:(id)arg1 ;
-(void)didTapAction:(id)arg1 ;
-(void)didTapRemoveButton:(id)arg1 ;
-(void)didTapCancelButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

