/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTLayer.h>

@class CPTPlotArea;

@interface CPTGridLineGroup : CPTLayer {

	char major;
	CPTPlotArea* plotArea;

}

@property (assign,nonatomic,__weak) CPTPlotArea * plotArea; 
@property (assign,nonatomic) char major; 
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CPTPlotArea *)plotArea;
-(void)setPlotArea:(CPTPlotArea *)arg1 ;
-(void)setMajor:(char)arg1 ;
-(char)major;
@end

