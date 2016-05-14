/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSMutableArray;

@interface WAAlertStyleTableViewCell : UITableViewCell {

	NSMutableArray* _optionViews;
	char _disabled;
	unsigned _selectedAlertStyle;
	/*^block*/id _handler;

}

@property (assign,nonatomic) unsigned selectedAlertStyle;              //@synthesize selectedAlertStyle=_selectedAlertStyle - In the implementation block
@property (assign,nonatomic) char disabled;                            //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) id handler;                                 //@synthesize handler=_handler - In the implementation block
+(int)sizeOption;
-(void)updateSelectionState;
-(void)optionViewTapped:(id)arg1 ;
-(unsigned)selectedAlertStyle;
-(void)setSelectedAlertStyle:(unsigned)arg1 ;
-(void)layoutSubviews;
-(float)rowHeight;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)configure;
@end

