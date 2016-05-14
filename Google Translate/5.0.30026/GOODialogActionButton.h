/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <Translate/QTMButton.h>
#import <Translate/GOOMultiLineButtonImplementsSizeThatFits.h>

@interface GOODialogActionButton : QTMButton <GOOMultiLineButtonImplementsSizeThatFits> {

	char _disableRTLTextAlignmentForTitle;
	float _minimumContentHeight;
	float _minimumWidth;

}

@property (assign,nonatomic) float minimumContentHeight;                        //@synthesize minimumContentHeight=_minimumContentHeight - In the implementation block
@property (assign,nonatomic) float minimumWidth;                                //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) char disableRTLTextAlignmentForTitle;              //@synthesize disableRTLTextAlignmentForTitle=_disableRTLTextAlignmentForTitle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 colorGroup:(id)arg2 shape:(int)arg3 ;
-(CGSize)sizeOfContentsWithSize:(CGSize)arg1 shouldLayout:(char)arg2 ;
-(CGSize)titleSizeWithWidth:(float)arg1 ;
-(float)minimumContentHeight;
-(void)setMinimumContentHeight:(float)arg1 ;
-(char)disableRTLTextAlignmentForTitle;
-(void)setDisableRTLTextAlignmentForTitle:(char)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMinimumWidth:(float)arg1 ;
-(float)minimumWidth;
@end

