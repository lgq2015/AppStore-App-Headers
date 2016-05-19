/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:29 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@protocol YTPlayerBarViewResourcesProtocol;
@class UIImageView, UIView, CAGradientLayer, UILabel;

@interface YTStoryboardFrameView : UIView {

	UIImageView* _imageView;
	UIView* _gradientView;
	CAGradientLayer* _gradientLayer;
	UILabel* _scrubbedTimeLabel;
	id<YTPlayerBarViewResourcesProtocol> _playerBarViewResources;
	double _scrubbedTime;

}

@property (assign,nonatomic) double scrubbedTime;                                                      //@synthesize scrubbedTime=_scrubbedTime - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                                                    //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                                          //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) UILabel * scrubbedTimeLabel;                                              //@synthesize scrubbedTimeLabel=_scrubbedTimeLabel - In the implementation block
@property (nonatomic,retain) id<YTPlayerBarViewResourcesProtocol> playerBarViewResources;              //@synthesize playerBarViewResources=_playerBarViewResources - In the implementation block
-(void)setScrubbedTime:(double)arg1 ;
-(void)setStoryboardFrame:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 playerBarViewResources:(id)arg2 ;
-(id)cropImage:(id)arg1 rect:(CGRect)arg2 ;
-(double)scrubbedTime;
-(UILabel *)scrubbedTimeLabel;
-(void)setScrubbedTimeLabel:(UILabel *)arg1 ;
-(id<YTPlayerBarViewResourcesProtocol>)playerBarViewResources;
-(void)setPlayerBarViewResources:(id<YTPlayerBarViewResourcesProtocol>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setGradientView:(UIView *)arg1 ;
-(UIView *)gradientView;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end

