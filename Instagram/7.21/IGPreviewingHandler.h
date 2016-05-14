/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewing.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIGestureRecognizer, UIView, UIViewController, NSString;

@interface IGPreviewingHandler : NSObject <UIViewControllerPreviewing> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _sourceView;
	UIGestureRecognizer* _previewingGestureRecognizerForFailureRelationship;
	UIViewController* _controller;
	CGRect _sourceRect;
	CGRect _originalSourceRect;

}

@property (nonatomic,readonly) CGRect originalSourceRect;                                                            //@synthesize originalSourceRect=_originalSourceRect - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * controller;                                                 //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship;              //@synthesize previewingGestureRecognizerForFailureRelationship=_previewingGestureRecognizerForFailureRelationship - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                                                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceView:(id)arg2 presentingViewController:(id)arg3 ;
-(CGRect)originalSourceRect;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIViewController *)controller;
@end

