/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GPUImageTwoInputFilter.h>

@class GPUImagePicture, NSString;

@interface GPUImageMosaicFilter : GPUImageTwoInputFilter {

	int inputTileSizeUniform;
	int numTilesUniform;
	int displayTileSizeUniform;
	int colorOnUniform;
	GPUImagePicture* pic;
	char _colorOn;
	float _numTiles;
	NSString* _tileSet;
	CGSize _inputTileSize;
	CGSize _displayTileSize;

}

@property (assign,nonatomic) CGSize inputTileSize;                //@synthesize inputTileSize=_inputTileSize - In the implementation block
@property (assign,nonatomic) float numTiles;                      //@synthesize numTiles=_numTiles - In the implementation block
@property (assign,nonatomic) CGSize displayTileSize;              //@synthesize displayTileSize=_displayTileSize - In the implementation block
@property (assign,nonatomic) char colorOn;                        //@synthesize colorOn=_colorOn - In the implementation block
@property (nonatomic,copy) NSString * tileSet;                    //@synthesize tileSet=_tileSet - In the implementation block
-(void)setDisplayTileSize:(CGSize)arg1 ;
-(void)setInputTileSize:(CGSize)arg1 ;
-(void)setNumTiles:(float)arg1 ;
-(void)setColorOn:(char)arg1 ;
-(CGSize)inputTileSize;
-(CGSize)displayTileSize;
-(char)colorOn;
-(id)init;
-(void)setTileSet:(NSString *)arg1 ;
-(float)numTiles;
-(NSString *)tileSet;
@end

