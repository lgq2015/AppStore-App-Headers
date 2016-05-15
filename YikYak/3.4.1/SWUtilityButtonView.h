/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Yik Yak/Yik Yak-Structs.h>
#import <UIKit/UIView.h>

@class SWTableViewCell, NSArray, NSLayoutConstraint, NSMutableArray;

@interface SWUtilityButtonView : UIView {

	SWTableViewCell* _parentCell;
	NSArray* _utilityButtons;
	SEL _utilityButtonSelector;
	NSLayoutConstraint* _widthConstraint;
	NSMutableArray* _buttonBackgroundColors;

}

@property (nonatomic,__weak,readonly) SWTableViewCell * parentCell;                //@synthesize parentCell=_parentCell - In the implementation block
@property (nonatomic,copy) NSArray * utilityButtons;                               //@synthesize utilityButtons=_utilityButtons - In the implementation block
@property (assign,nonatomic) SEL utilityButtonSelector;                            //@synthesize utilityButtonSelector=_utilityButtonSelector - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;                 //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttonBackgroundColors;              //@synthesize buttonBackgroundColors=_buttonBackgroundColors - In the implementation block
-(id)initWithFrame:(CGRect)arg1 utilityButtons:(id)arg2 parentCell:(id)arg3 utilityButtonSelector:(SEL)arg4 ;
-(void)setUtilityButtonSelector:(SEL)arg1 ;
-(void)setUtilityButtons:(NSArray *)arg1 ;
-(void)setUtilityButtons:(id)arg1 WithButtonWidth:(float)arg2 ;
-(void)setButtonBackgroundColors:(NSMutableArray *)arg1 ;
-(NSArray *)utilityButtons;
-(NSMutableArray *)buttonBackgroundColors;
-(id)initWithUtilityButtons:(id)arg1 parentCell:(id)arg2 utilityButtonSelector:(SEL)arg3 ;
-(void)pushBackgroundColors;
-(void)popBackgroundColors;
-(SWTableViewCell *)parentCell;
-(SEL)utilityButtonSelector;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

