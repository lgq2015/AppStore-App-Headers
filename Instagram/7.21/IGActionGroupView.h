/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>

@class UIView, NSArray, UITableView, NSString;

@interface IGActionGroupView : UIView <UITableViewDataSource> {

	UIView* _headerView;
	NSArray* _actions;
	UIView* _headerBackgroundView;
	UIView* _backgroundView;
	UITableView* _actionsTableView;

}

@property (nonatomic,retain) UIView * headerView;                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * actions;                               //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) UIView * headerBackgroundView;               //@synthesize headerBackgroundView=_headerBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UITableView * actionsTableView;              //@synthesize actionsTableView=_actionsTableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)actionsTableView;
-(void)flashScrollIndicatorsIfNeeded;
-(UIView *)headerBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)actions;
-(UIView *)backgroundView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

