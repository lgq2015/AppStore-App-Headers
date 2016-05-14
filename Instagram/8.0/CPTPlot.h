/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTAnnotationHostLayer.h>

@protocol CPTPlotDataSource;
@class NSString, NSAttributedString, CPTPlotSpace, NSMutableDictionary, CPTTextStyle, NSFormatter, CPTShadow, NSMutableArray, NSArray, CPTPlotArea;

@interface CPTPlot : CPTAnnotationHostLayer {

	char dataNeedsReloading;
	char needsRelabel;
	char adjustLabelAnchors;
	char showLabels;
	char alignsPointsToPixels;
	char drawLegendSwatchDecoration;
	char inTitleUpdate;
	id<CPTPlotDataSource> dataSource;
	NSString* title;
	NSAttributedString* attributedTitle;
	CPTPlotSpace* plotSpace;
	NSMutableDictionary* cachedData;
	unsigned cachedDataCount;
	int cachePrecision;
	float labelOffset;
	float labelRotation;
	unsigned labelField;
	CPTTextStyle* labelTextStyle;
	NSFormatter* labelFormatter;
	CPTShadow* labelShadow;
	NSMutableArray* labelAnnotations;
	unsigned pointingDeviceDownLabelIndex;
	NSRange labelIndexRange;

}

@property (assign,nonatomic) char dataNeedsReloading; 
@property (nonatomic,retain) NSMutableDictionary * cachedData; 
@property (assign,nonatomic) char needsRelabel; 
@property (assign,nonatomic) NSRange labelIndexRange; 
@property (nonatomic,retain) NSMutableArray * labelAnnotations; 
@property (nonatomic,copy) NSArray * dataLabels; 
@property (assign,nonatomic) unsigned pointingDeviceDownLabelIndex; 
@property (assign,nonatomic) unsigned cachedDataCount; 
@property (assign,nonatomic) char inTitleUpdate; 
@property (nonatomic,readonly) unsigned numberOfRecords; 
@property (assign,nonatomic,__weak) id<CPTPlotDataSource> dataSource; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,retain) CPTPlotSpace * plotSpace; 
@property (nonatomic,readonly) CPTPlotArea * plotArea; 
@property (nonatomic,readonly) char doublePrecisionCache; 
@property (assign,nonatomic) int cachePrecision; 
@property (nonatomic,readonly) CPTNumericDataType doubleDataType; 
@property (nonatomic,readonly) CPTNumericDataType decimalDataType; 
@property (assign,nonatomic) char adjustLabelAnchors; 
@property (assign,nonatomic) char showLabels; 
@property (assign,nonatomic) float labelOffset; 
@property (assign,nonatomic) float labelRotation; 
@property (assign,nonatomic) unsigned labelField; 
@property (nonatomic,copy) CPTTextStyle * labelTextStyle; 
@property (nonatomic,retain) NSFormatter * labelFormatter; 
@property (nonatomic,retain) CPTShadow * labelShadow; 
@property (assign,nonatomic) char alignsPointsToPixels; 
@property (assign,nonatomic) char drawLegendSwatchDecoration; 
+(id)nilData;
+(char)needsDisplayForKey:(id)arg1 ;
-(CPTPlotSpace *)plotSpace;
-(float)labelOffset;
-(float)labelRotation;
-(CPTTextStyle *)labelTextStyle;
-(NSFormatter *)labelFormatter;
-(char)needsRelabel;
-(CPTShadow *)labelShadow;
-(id)plotRangeForCoordinate:(int)arg1 ;
-(void)setNeedsRelabel:(char)arg1 ;
-(void)relabel;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)inTitleUpdate;
-(void)setInTitleUpdate:(char)arg1 ;
-(void)setNeedsRelabel;
-(void)setLabelTextStyle:(CPTTextStyle *)arg1 ;
-(void)setLabelRotation:(float)arg1 ;
-(void)setLabelShadow:(CPTShadow *)arg1 ;
-(void)setPlotSpace:(CPTPlotSpace *)arg1 ;
-(void)setLabelFormatter:(NSFormatter *)arg1 ;
-(SCD_Struct_CP53)cachedDecimalForField:(unsigned)arg1 recordIndex:(unsigned)arg2 ;
-(id)cachedNumberForField:(unsigned)arg1 recordIndex:(unsigned)arg2 ;
-(void)setDataNeedsReloading;
-(id)fieldIdentifiersForCoordinate:(int)arg1 ;
-(int)coordinateForFieldIdentifier:(unsigned)arg1 ;
-(void)setCachePrecision:(int)arg1 ;
-(void)insertDataAtIndex:(unsigned)arg1 numberOfRecords:(unsigned)arg2 ;
-(unsigned)cachedDataCount;
-(void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned)arg2 inRect:(CGRect)arg3 inContext:(CGContextRef)arg4 ;
-(unsigned)numberOfLegendEntries;
-(id)titleForLegendEntryAtIndex:(unsigned)arg1 ;
-(id)attributedTitleForLegendEntryAtIndex:(unsigned)arg1 ;
-(void)setLabelField:(unsigned)arg1 ;
-(void)reloadDataInIndexRange:(NSRange)arg1 ;
-(void)reloadPlotDataInIndexRange:(NSRange)arg1 ;
-(char)loadNumbersForAllFieldsFromDataSourceInRecordIndexRange:(NSRange)arg1 ;
-(id)numbersFromDataSourceForField:(unsigned)arg1 recordIndexRange:(NSRange)arg2 ;
-(void)cacheNumbers:(id)arg1 forField:(unsigned)arg2 atRecordIndex:(unsigned)arg3 ;
-(void)cacheNumbers:(id)arg1 forField:(unsigned)arg2 ;
-(void)deleteDataInIndexRange:(NSRange)arg1 ;
-(id)cachedNumbersForField:(unsigned)arg1 ;
-(char)doublePrecisionCache;
-(void)relabelIndexRange:(NSRange)arg1 ;
-(void)cacheArray:(id)arg1 forKey:(id)arg2 atRecordIndex:(unsigned)arg3 ;
-(char)alignsPointsToPixels;
-(id)cachedArrayForKey:(id)arg1 ;
-(double)cachedDoubleForField:(unsigned)arg1 recordIndex:(unsigned)arg2 ;
-(id)cachedValueForKey:(id)arg1 recordIndex:(unsigned)arg2 ;
-(char)drawLegendSwatchDecoration;
-(unsigned)dataIndexFromInteractionPoint:(CGPoint)arg1 ;
-(void)cacheArray:(id)arg1 forKey:(id)arg2 ;
-(void)repositionAllLabelAnnotations;
-(unsigned)numberOfFields;
-(id)fieldIdentifiers;
-(void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned)arg2 ;
-(int)cachePrecision;
-(char)adjustLabelAnchors;
-(char)showLabels;
-(unsigned)labelField;
-(NSRange)labelIndexRange;
-(NSMutableArray *)labelAnnotations;
-(void)setDataNeedsReloading:(char)arg1 ;
-(void)setCachedDataCount:(unsigned)arg1 ;
-(unsigned)numberOfRecords;
-(char)dataNeedsReloading;
-(void)reloadDataLabelsInIndexRange:(NSRange)arg1 ;
-(CPTNumericDataType)doubleDataType;
-(CPTNumericDataType)decimalDataType;
-(id)numericDataForNumbers:(id)arg1 ;
-(void)setCachedDataType:(CPTNumericDataType)arg1 ;
-(id)plotRangeForField:(unsigned)arg1 ;
-(void)setLabelIndexRange:(NSRange)arg1 ;
-(void)setLabelAnnotations:(NSMutableArray *)arg1 ;
-(void)updateContentAnchorForLabel:(id)arg1 ;
-(void)setPointingDeviceDownLabelIndex:(unsigned)arg1 ;
-(unsigned)pointingDeviceDownLabelIndex;
-(void)reloadPlotData;
-(void)reloadDataLabels;
-(NSArray *)dataLabels;
-(void)setDataLabels:(NSArray *)arg1 ;
-(void)setShowLabels:(char)arg1 ;
-(void)setAlignsPointsToPixels:(char)arg1 ;
-(void)setAdjustLabelAnchors:(char)arg1 ;
-(void)setDrawLegendSwatchDecoration:(char)arg1 ;
-(void)reloadDataIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<CPTPlotDataSource>)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)reloadData;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<CPTPlotDataSource>)dataSource;
-(NSString *)title;
-(NSAttributedString *)attributedTitle;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setLabelOffset:(float)arg1 ;
-(void)setCachedData:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedData;
-(CPTPlotArea *)plotArea;
@end

