/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGFollowAllUsersCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGFollowAllHeaderItem, NSString;

@interface IGFollowAllHeaderItemController : IGListItemController <IGFollowAllUsersCellDelegate, IGListItemType> {

	char _followAllButtonEnabled;
	IGFollowAllHeaderItem* _followAllHeaderItem;

}

@property (nonatomic,readonly) IGFollowAllHeaderItem * followAllHeaderItem;              //@synthesize followAllHeaderItem=_followAllHeaderItem - In the implementation block
@property (assign,nonatomic) char followAllButtonEnabled;                                //@synthesize followAllButtonEnabled=_followAllButtonEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellClasses;
-(id)cellForItemAtIndex:(int)arg1 ;
-(IGFollowAllHeaderItem *)followAllHeaderItem;
-(char)followAllButtonEnabled;
-(void)setFollowAllButtonEnabled:(char)arg1 ;
-(void)followAllUsersOnServer;
-(void)followAllUsersCellDidTapFollowAll:(id)arg1 ;
-(id)init;
-(Class)cellClass;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

