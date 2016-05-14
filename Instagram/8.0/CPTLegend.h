/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/CPTBorderedLayer.h>

@class CPTTextStyle, CPTLineStyle, CPTFill, NSArray, NSMutableArray, CPTLegendEntry;

@interface CPTLegend : CPTBorderedLayer {

	char equalRows;
	char equalColumns;
	char layoutChanged;
	CPTTextStyle* textStyle;
	CPTLineStyle* swatchBorderLineStyle;
	float swatchCornerRadius;
	CPTFill* swatchFill;
	CPTLineStyle* entryBorderLineStyle;
	float entryCornerRadius;
	CPTFill* entryFill;
	float entryPaddingLeft;
	float entryPaddingTop;
	float entryPaddingRight;
	float entryPaddingBottom;
	unsigned numberOfRows;
	unsigned numberOfColumns;
	NSArray* rowHeights;
	NSArray* rowHeightsThatFit;
	NSArray* columnWidths;
	NSArray* columnWidthsThatFit;
	float columnMargin;
	float rowMargin;
	float titleOffset;
	NSMutableArray* plots;
	NSMutableArray* legendEntries;
	CPTLegendEntry* pointingDeviceDownEntry;
	CGSize swatchSize;

}

@property (nonatomic,retain) NSMutableArray * plots; 
@property (nonatomic,retain) NSMutableArray * legendEntries; 
@property (nonatomic,retain) NSArray * rowHeightsThatFit; 
@property (nonatomic,retain) NSArray * columnWidthsThatFit; 
@property (assign,nonatomic) char layoutChanged; 
@property (assign,nonatomic,__weak) CPTLegendEntry * pointingDeviceDownEntry; 
@property (nonatomic,copy) CPTTextStyle * textStyle; 
@property (assign,nonatomic) CGSize swatchSize; 
@property (nonatomic,copy) CPTLineStyle * swatchBorderLineStyle; 
@property (assign,nonatomic) float swatchCornerRadius; 
@property (nonatomic,copy) CPTFill * swatchFill; 
@property (nonatomic,copy) CPTLineStyle * entryBorderLineStyle; 
@property (assign,nonatomic) float entryCornerRadius; 
@property (nonatomic,copy) CPTFill * entryFill; 
@property (assign,nonatomic) float entryPaddingLeft; 
@property (assign,nonatomic) float entryPaddingTop; 
@property (assign,nonatomic) float entryPaddingRight; 
@property (assign,nonatomic) float entryPaddingBottom; 
@property (assign,nonatomic) unsigned numberOfRows; 
@property (assign,nonatomic) unsigned numberOfColumns; 
@property (assign,nonatomic) char equalRows; 
@property (assign,nonatomic) char equalColumns; 
@property (nonatomic,copy) NSArray * rowHeights; 
@property (nonatomic,copy) NSArray * columnWidths; 
@property (assign,nonatomic) float columnMargin; 
@property (assign,nonatomic) float rowMargin; 
@property (assign,nonatomic) float titleOffset; 
+(id)legendWithPlots:(id)arg1 ;
+(id)legendWithGraph:(id)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(char)pointingDeviceDownEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(char)pointingDeviceUpEvent:(UIEvent*)arg1 atPoint:(CGPoint)arg2 ;
-(void)setBorderLineStyle:(id)arg1 ;
-(void)renderAsVectorInContext:(CGContextRef)arg1 ;
-(id)initWithPlots:(id)arg1 ;
-(void)addPlot:(id)arg1 ;
-(id)allPlots;
-(NSMutableArray *)plots;
-(char)layoutChanged;
-(CGSize)swatchSize;
-(CPTLineStyle *)swatchBorderLineStyle;
-(float)swatchCornerRadius;
-(CPTFill *)swatchFill;
-(CPTLineStyle *)entryBorderLineStyle;
-(float)entryCornerRadius;
-(CPTFill *)entryFill;
-(float)entryPaddingLeft;
-(float)entryPaddingTop;
-(float)entryPaddingRight;
-(float)entryPaddingBottom;
-(char)equalRows;
-(char)equalColumns;
-(NSArray *)rowHeights;
-(NSArray *)rowHeightsThatFit;
-(NSArray *)columnWidthsThatFit;
-(float)columnMargin;
-(float)rowMargin;
-(void)setLayoutChanged:(char)arg1 ;
-(void)recalculateLayout;
-(void)setRowHeightsThatFit:(NSArray *)arg1 ;
-(void)setColumnWidthsThatFit:(NSArray *)arg1 ;
-(void)legendNeedsRedraw:(id)arg1 ;
-(void)legendNeedsLayout:(id)arg1 ;
-(void)legendNeedsReloadEntries:(id)arg1 ;
-(void)removeLegendEntriesForPlot:(id)arg1 ;
-(id)plotWithIdentifier:(id)arg1 ;
-(void)legendEntryForInteractionPoint:(CGPoint)arg1 row:(unsigned*)arg2 col:(unsigned*)arg3 ;
-(void)setPointingDeviceDownEntry:(CPTLegendEntry *)arg1 ;
-(CPTLegendEntry *)pointingDeviceDownEntry;
-(void)setLayoutChanged;
-(id)plotAtIndex:(unsigned)arg1 ;
-(void)insertPlot:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removePlot:(id)arg1 ;
-(void)removePlotWithIdentifier:(id)arg1 ;
-(void)setSwatchSize:(CGSize)arg1 ;
-(void)setSwatchBorderLineStyle:(CPTLineStyle *)arg1 ;
-(void)setSwatchCornerRadius:(float)arg1 ;
-(void)setSwatchFill:(CPTFill *)arg1 ;
-(void)setEntryBorderLineStyle:(CPTLineStyle *)arg1 ;
-(void)setEntryCornerRadius:(float)arg1 ;
-(void)setEntryFill:(CPTFill *)arg1 ;
-(void)setEntryPaddingLeft:(float)arg1 ;
-(void)setEntryPaddingTop:(float)arg1 ;
-(void)setEntryPaddingRight:(float)arg1 ;
-(void)setEntryPaddingBottom:(float)arg1 ;
-(void)setEqualRows:(char)arg1 ;
-(void)setEqualColumns:(char)arg1 ;
-(void)setRowHeights:(NSArray *)arg1 ;
-(void)setColumnMargin:(float)arg1 ;
-(void)setRowMargin:(float)arg1 ;
-(void)setPlots:(NSMutableArray *)arg1 ;
-(void)setLegendEntries:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)numberOfColumns;
-(unsigned)numberOfRows;
-(void)setNumberOfRows:(unsigned)arg1 ;
-(float)titleOffset;
-(void)setTitleOffset:(float)arg1 ;
-(void)setPaddingTop:(float)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)setPaddingBottom:(float)arg1 ;
-(CPTTextStyle *)textStyle;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(void)setTextStyle:(CPTTextStyle *)arg1 ;
-(id)initWithGraph:(id)arg1 ;
-(NSMutableArray *)legendEntries;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(NSArray *)columnWidths;
@end

