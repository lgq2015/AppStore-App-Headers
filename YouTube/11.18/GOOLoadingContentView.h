/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <YouTube/GOOBaseContentView.h>

@class QTMActivityIndicator;

@interface GOOLoadingContentView : GOOBaseContentView {

	QTMActivityIndicator* _activityIndicatorView;

}
+(float)heightForObject:(id)arg1 constrainedToWidth:(float)arg2 ;
-(void)updateViewWithObject:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(char)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
@end

