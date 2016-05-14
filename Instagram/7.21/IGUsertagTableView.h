/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>

@protocol IGUsertagTableViewDelegate;
@class IGUserListLocalDataSource, IGUserListNetworkDataSource, IGAutocompleteDataSource, NSString;

@interface IGUsertagTableView : UITableView <UITableViewDelegate, UITableViewDataSource, IGUserListNetworkDataSourceDelegate> {

	IGUserListLocalDataSource* _localUsersDataSource;
	IGUserListNetworkDataSource* _networkUsersDataSource;
	IGAutocompleteDataSource* _currentDataSource;
	id<IGUsertagTableViewDelegate> _tagDelegate;
	NSString* _query;
	int _usertagTableViewStyle;

}

@property (assign,nonatomic,__weak) id<IGUsertagTableViewDelegate> tagDelegate;              //@synthesize tagDelegate=_tagDelegate - In the implementation block
@property (nonatomic,copy) NSString * query;                                                 //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) int usertagTableViewStyle;                                    //@synthesize usertagTableViewStyle=_usertagTableViewStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 usertagTableViewStyle:(int)arg2 ;
-(void)setTagDelegate:(id<IGUsertagTableViewDelegate>)arg1 ;
-(void)setExcludedUsers:(id)arg1 ;
-(id)tableView:(id)arg1 userCellForRow:(int)arg2 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(int)usertagTableViewStyle;
-(id)searchPromptCellForTableView:(id)arg1 ;
-(id)noResultsCellForTableView:(id)arg1 ;
-(id<IGUsertagTableViewDelegate>)tagDelegate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)performSearch;
@end

