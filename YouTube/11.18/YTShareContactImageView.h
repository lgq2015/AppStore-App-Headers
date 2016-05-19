/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>
#import <YouTube/YTReusableView.h>
#import <YouTube/YTShareContactImageViewProtocol.h>

@class YTImageView, UIView, YTIFormattedString, YTFormattedStringLabel, NSString;

@interface YTShareContactImageView : UIView <YTReusableView, YTShareContactImageViewProtocol> {

	float _imageDiameter;
	YTImageView* _imageView;
	UIView* _selectionHighlightOverlay;
	unsigned _numberOfGroupThumbnails;
	YTIFormattedString* _participantCountString;
	YTImageView* _leftTopImageView;
	YTImageView* _leftBottomImageView;
	YTImageView* _rightImageView;
	UIView* _leftHalfFrame;
	UIView* _rightHalfFrame;
	UIView* _groupCountOverlay;
	YTFormattedStringLabel* _participantsCount;
	int _displayState;
	UIView* _borderView;

}

@property (nonatomic,readonly) UIView * borderView;                 //@synthesize borderView=_borderView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactImageDiameter:(float)arg1 ;
-(id)imageViewForContact:(unsigned)arg1 ;
-(void)sizeToFitContactImageDiameter:(float)arg1 ;
-(id)thumbnailMappingsWithThumbnails:(id)arg1 ;
-(void)setParticipantCountString:(id)arg1 ;
-(UIView *)borderView;
-(void)setDisplayState:(int)arg1 ;
-(void)layoutBorderView;
-(void)applyCircularMaskToView:(id)arg1 size:(float)arg2 ;
-(void)setThumbnailCount:(unsigned)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
@end

