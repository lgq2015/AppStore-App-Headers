/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, UIImageView, NSString;

@interface WAOverlayView : UIView {

	UILabel* _textLabel;
	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _background;
	double _startTime;

}

@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
+(id)showOverlayInViewController:(id)arg1 ;
-(void)hideWithCompletion:(/*^block*/id)arg1 ;
-(void)loadBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStartTime:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)startTime;
@end

