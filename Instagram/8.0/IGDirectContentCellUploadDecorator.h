/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentUploadInfoObserver.h>
#import <Instagram/IGDirectContentCellDecorator.h>

@protocol IGDirectContentUploadCell, IGDirectCellProtocol, IGDirectContentUploadable;
@class UICollectionViewCell, UIButton, UIView, UIActivityIndicatorView, IGDirectContent, NSString;

@interface IGDirectContentCellUploadDecorator : NSObject <IGDirectContentUploadInfoObserver, IGDirectContentCellDecorator> {

	char _showingFailedUI;
	char _shouldShowProgress;
	char _shouldShowSendingDot;
	char _bottomAlignActionButton;
	id<IGDirectContentUploadCell> _delegate;
	int _layoutStyle;
	UICollectionViewCell*<IGDirectCellProtocol> _cell;
	UIButton* _actionButton;
	UIView* _sendingDot;
	UIActivityIndicatorView* _spinner;
	IGDirectContent*<IGDirectContentUploadable> _upload;
	CGSize _spinnerOffset;

}

@property (assign,nonatomic,__weak) UICollectionViewCell*<IGDirectCellProtocol> cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIView * sendingDot;                                                  //@synthesize sendingDot=_sendingDot - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                    //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGDirectContent*<IGDirectContentUploadable> upload;                   //@synthesize upload=_upload - In the implementation block
@property (assign,nonatomic) char showingFailedUI;                                                 //@synthesize showingFailedUI=_showingFailedUI - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUploadCell> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldShowProgress;                                              //@synthesize shouldShowProgress=_shouldShowProgress - In the implementation block
@property (assign,nonatomic) CGSize spinnerOffset;                                                 //@synthesize spinnerOffset=_spinnerOffset - In the implementation block
@property (nonatomic,readonly) float rightOffset; 
@property (assign,nonatomic) char shouldShowSendingDot;                                            //@synthesize shouldShowSendingDot=_shouldShowSendingDot - In the implementation block
@property (nonatomic,readonly) NSString * timestampText; 
@property (assign,nonatomic) char bottomAlignActionButton;                                         //@synthesize bottomAlignActionButton=_bottomAlignActionButton - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                                      //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notifyStatusChangedForUploadInfo:(id)arg1 ;
-(void)notifyUploadProgressForUploadInfo:(id)arg1 withUploadProgress:(float)arg2 ;
-(char)showingFailedUI;
-(float)rightOffset;
-(NSString *)timestampText;
-(void)showActionMenu;
-(void)showFailedUI;
-(void)showSendingUI;
-(void)detachGestureRecognizers;
-(void)removeSubviewsFromCell;
-(void)addSubviewsToCell;
-(void)attachGestureRecognizers;
-(void)finishLayout;
-(IGDirectContent*<IGDirectContentUploadable>)upload;
-(char)shouldShowProgress;
-(char)shouldShowSendingDot;
-(id)createSendingDot;
-(void)setSendingDot:(UIView *)arg1 ;
-(UIView *)sendingDot;
-(char)bottomAlignActionButton;
-(CGSize)spinnerOffset;
-(void)setShowingFailedUI:(char)arg1 ;
-(void)setShouldShowProgress:(char)arg1 ;
-(void)setSpinnerOffset:(CGSize)arg1 ;
-(void)setShouldShowSendingDot:(char)arg1 ;
-(void)setBottomAlignActionButton:(char)arg1 ;
-(void)setUpload:(IGDirectContent*<IGDirectContentUploadable>)arg1 ;
-(UIButton *)actionButton;
-(void)setDelegate:(id<IGDirectContentUploadCell>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUploadCell>)delegate;
-(void)prepareForReuse;
-(UICollectionViewCell*<IGDirectCellProtocol>)cell;
-(void)setCell:(UICollectionViewCell*<IGDirectCellProtocol>)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setContent:(id)arg1 ;
-(int)layoutStyle;
-(void)setLayoutStyle:(int)arg1 ;
@end

