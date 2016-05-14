/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAStaticPinControllerDelegate;
#import <WhatsApp/WhatsApp-Structs.h>
@class UIImageView, WAStaticPinCalloutView, WAMapView;

@interface WAStaticPinController : NSObject {

	UIImageView* _imageViewPin;
	UIImageView* _imageViewPinHole;
	UIImageView* _imageViewPinFloating;
	UIImageView* _imageViewPinShadow;
	WAStaticPinCalloutView* _pinCallout;
	char _droppingPinFromTop;
	char _pinHidden;
	char _pinFloating;
	char _pinCalloutVisible;
	id<WAStaticPinControllerDelegate> _delegate;
	WAMapView* _mapView;

}

@property (nonatomic,retain) id<WAStaticPinControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPinHidden,nonatomic) char pinHidden;                              //@synthesize pinHidden=_pinHidden - In the implementation block
@property (assign,getter=isPinFloating,nonatomic) char pinFloating;                          //@synthesize pinFloating=_pinFloating - In the implementation block
@property (assign,getter=isPinCalloutVisible,nonatomic) char pinCalloutVisible;              //@synthesize pinCalloutVisible=_pinCalloutVisible - In the implementation block
@property (nonatomic,retain) WAMapView * mapView;                                            //@synthesize mapView=_mapView - In the implementation block
+(id)controllerAttachedToWAMapView:(id)arg1 ;
-(void)liftPin;
-(char)isPinHidden;
-(void)dropPin;
-(char)isPinFloating;
-(char)isPinCalloutVisible;
-(void)configurePinCalloutWithPlacemark:(id)arg1 showActivity:(char)arg2 animated:(char)arg3 ;
-(void)setPinCalloutVisible:(char)arg1 animated:(char)arg2 ;
-(void)setPinHidden:(char)arg1 animated:(char)arg2 ;
-(void)setPinCalloutVisible:(char)arg1 ;
-(void)pinCalloutTapped;
-(CGPoint)originForFloatingPinWhenFloating:(char)arg1 ;
-(CGPoint)originForFloatingPinShadowWhenFloating:(char)arg1 ;
-(CGPoint)originForFloatingPinShadowWithHeight:(float)arg1 ;
-(void)preparePinToBeDropped;
-(void)dropPinFromTop;
-(void)setPinFloating:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportDropCompletionToDelegate;
-(void)animateFloatingPinWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatePinWithCompletion:(/*^block*/id)arg1 ;
-(void)setPinHidden:(char)arg1 ;
-(void)setPinFloating:(char)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setMapView:(WAMapView *)arg1 ;
-(WAMapView *)mapView;
-(void)setDelegate:(id<WAStaticPinControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<WAStaticPinControllerDelegate>)delegate;
-(void)layout;
-(CGRect)mapBounds;
@end

