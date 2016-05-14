/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol IGLocationHeaderViewDelegate;
@class IGMapView, NSString;

@interface IGLocationHeaderView : UIView <MKMapViewDelegate> {

	id<IGLocationHeaderViewDelegate> _delegate;
	IGMapView* _mapView;

}

@property (assign,nonatomic,__weak) IGMapView * mapView;                                    //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<IGLocationHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapViewDidReceiveTap:(id)arg1 ;
-(id)initWithSuperviewWidth:(float)arg1 location:(id)arg2 ;
-(void)setMapView:(IGMapView *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(IGMapView *)mapView;
-(void)setDelegate:(id<IGLocationHeaderViewDelegate>)arg1 ;
-(id<IGLocationHeaderViewDelegate>)delegate;
@end

