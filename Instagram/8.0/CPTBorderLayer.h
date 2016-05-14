/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTBorderedLayer;

@interface CPTBorderLayer : CPTLayer {

	CPTBorderedLayer* maskedLayer;

}

@property (nonatomic,retain) CPTBorderedLayer * maskedLayer; 
-(id)sublayersExcludedFromAutomaticLayout;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(CPTBorderedLayer *)maskedLayer;
-(void)setMaskedLayer:(CPTBorderedLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
@end

