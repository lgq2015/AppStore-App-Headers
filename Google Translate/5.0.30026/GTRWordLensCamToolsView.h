/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIView.h>

@class QTMButton, GTRWordLensInstantButton, GTRWordLensViewController, QTMColorGroup;

@interface GTRWordLensCamToolsView : UIView {

	int colorScheme;
	char _showRotLockButton;
	QTMButton* _rotLockButton;
	GTRWordLensInstantButton* _instantButton;
	QTMButton* _torchButton;
	QTMButton* _zoomButton;
	GTRWordLensViewController* _parent;
	QTMColorGroup* _colorGroup;

}

@property (nonatomic,retain) QTMButton * rotLockButton;                              //@synthesize rotLockButton=_rotLockButton - In the implementation block
@property (nonatomic,retain) GTRWordLensInstantButton * instantButton;               //@synthesize instantButton=_instantButton - In the implementation block
@property (nonatomic,retain) QTMButton * torchButton;                                //@synthesize torchButton=_torchButton - In the implementation block
@property (nonatomic,retain) QTMButton * zoomButton;                                 //@synthesize zoomButton=_zoomButton - In the implementation block
@property (assign,nonatomic,__weak) GTRWordLensViewController * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) QTMColorGroup * colorGroup;                             //@synthesize colorGroup=_colorGroup - In the implementation block
+(id)createInParent:(id)arg1 colorGroup:(id)arg2 ;
-(void)setColorGroup:(QTMColorGroup *)arg1 ;
-(QTMColorGroup *)colorGroup;
-(void)initToolsUI;
-(void)setRotLockButton:(QTMButton *)arg1 ;
-(QTMButton *)rotLockButton;
-(void)doRotLock;
-(void)setInstantButton:(GTRWordLensInstantButton *)arg1 ;
-(GTRWordLensInstantButton *)instantButton;
-(void)doInstantButton;
-(void)setTorchButton:(QTMButton *)arg1 ;
-(QTMButton *)torchButton;
-(void)doTorchToggle;
-(void)setZoomButton:(QTMButton *)arg1 ;
-(QTMButton *)zoomButton;
-(void)doZoomToggle;
-(void)internalLayoutSubviews;
-(void)updateRotLockUI;
-(void)updateTorchUI;
-(void)updateZoomUI;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)updateUI;
-(GTRWordLensViewController *)parent;
-(void)setParent:(GTRWordLensViewController *)arg1 ;
@end

