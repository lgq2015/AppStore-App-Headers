/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGImageViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGSwitchUsersControllerDelegate;
@class UITableView, NSArray, NSString;

@interface IGSwitchUsersController : NSObject <IGImageViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	char _isSubmitting;
	UITableView* _tableView;
	id<IGSwitchUsersControllerDelegate> _delegate;
	NSArray* _usersArray;
	unsigned _switchUsersMode;

}

@property (nonatomic,retain) NSArray * usersArray;                                             //@synthesize usersArray=_usersArray - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) unsigned switchUsersMode;                                         //@synthesize switchUsersMode=_switchUsersMode - In the implementation block
@property (assign,nonatomic) char isSubmitting;                                                //@synthesize isSubmitting=_isSubmitting - In the implementation block
@property (assign,nonatomic,__weak) id<IGSwitchUsersControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageViewLoadedImage:(id)arg1 ;
-(id)initWithSwitchUsersMode:(unsigned)arg1 ;
-(float)minimumTableViewHeight;
-(void)updateUserData;
-(void)updateBadgeInfo:(id)arg1 ;
-(void)setUsersArray:(NSArray *)arg1 ;
-(unsigned)switchUsersMode;
-(NSArray *)usersArray;
-(id)userCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)addAccountCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)setSwitchUsersMode:(unsigned)arg1 ;
-(char)isSubmitting;
-(void)setIsSubmitting:(char)arg1 ;
-(void)setDelegate:(id<IGSwitchUsersControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGSwitchUsersControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

