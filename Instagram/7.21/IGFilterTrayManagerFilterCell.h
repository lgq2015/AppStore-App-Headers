/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, UIButton, UIView, NSString, UIImage;

@interface IGFilterTrayManagerFilterCell : UICollectionViewCell {

	Class _filterClass;
	UILabel* _textLabel;
	UIImageView* _visibleIndicator;
	UIButton* _rearrangeControl;
	UIImageView* _filterIconView;
	UIImageView* _filterFrameView;
	UIView* _topLine;
	UIView* _bottomLine;
	NSString* _imageName;

}

@property (nonatomic,retain) UIImage * filterIcon; 
@property (assign,nonatomic) Class filterClass;                           //@synthesize filterClass=_filterClass - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                         //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * visibleIndicator;              //@synthesize visibleIndicator=_visibleIndicator - In the implementation block
@property (nonatomic,retain) UIButton * rearrangeControl;                 //@synthesize rearrangeControl=_rearrangeControl - In the implementation block
@property (nonatomic,retain) UIImageView * filterIconView;                //@synthesize filterIconView=_filterIconView - In the implementation block
@property (nonatomic,retain) UIImageView * filterFrameView;               //@synthesize filterFrameView=_filterFrameView - In the implementation block
@property (nonatomic,retain) UIView * topLine;                            //@synthesize topLine=_topLine - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                         //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,copy) NSString * imageName;                          //@synthesize imageName=_imageName - In the implementation block
-(UIImageView *)visibleIndicator;
-(UIButton *)rearrangeControl;
-(UIImageView *)filterIconView;
-(UIImageView *)filterFrameView;
-(UIImage *)filterIcon;
-(void)setVisibleIndicator:(UIImageView *)arg1 ;
-(void)setRearrangeControl:(UIButton *)arg1 ;
-(void)setFilterIconView:(UIImageView *)arg1 ;
-(void)setFilterFrameView:(UIImageView *)arg1 ;
-(Class)filterClass;
-(void)setFilterIcon:(UIImage *)arg1 ;
-(void)setFilterClass:(Class)arg1 ;
-(UIView *)topLine;
-(void)setTopLine:(UIView *)arg1 ;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(id)LX_snapshotView;
-(CGRect)LX_rearrangeHotspot;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
@end

