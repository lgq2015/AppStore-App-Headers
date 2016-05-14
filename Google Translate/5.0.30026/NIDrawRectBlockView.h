/*
* This header is generated by classdump-dyld 1.0
* on Thursday, May 12, 2016 at 1:01:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E107A69B-5FBA-4958-8D2E-301137467F53/Translate.app/Translate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translate/Translate-Structs.h>
#import <UIKit/UIView.h>

@class UITableViewCell;

@interface NIDrawRectBlockView : UIView {

	/*^block*/id _block;
	id _object;
	UITableViewCell* _cell;

}

@property (nonatomic,copy) id block;                              //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) id object;                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
@end

