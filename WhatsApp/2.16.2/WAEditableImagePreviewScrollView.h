/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAEditableImageScrollView.h>

@interface WAEditableImagePreviewScrollView : WAEditableImageScrollView {

	char _performRotationAfterZooming;
	char _suppressLayout;
	double _animationDuration;
	float _springDamping;
	float _initialVelocity;

}

@property (assign,nonatomic,__weak) id<WAEditableImagePreviewScrollViewEditingDelegate> editingDelegate; 
-(void)reallyRotateCounterClockwise;
-(void)rotateCounterClockwise;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
@end

