/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <MapKit/MKPolyline.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, UIColor;

@interface RCTMapOverlay : MKPolyline <MKAnnotation> {

	NSString* _identifier;
	UIColor* _strokeColor;
	float _lineWidth;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                     //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) float lineWidth;                           //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_RC32 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(NSString *)identifier;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
@end

