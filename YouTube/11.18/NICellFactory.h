/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:50:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/NITableViewModelDelegate.h>

@class NSMutableDictionary, NSString;

@interface NICellFactory : NSObject <NITableViewModelDelegate> {

	NSMutableDictionary* _objectToCellMap;

}

@property (nonatomic,copy) NSMutableDictionary * objectToCellMap;              //@synthesize objectToCellMap=_objectToCellMap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 model:(id)arg3 ;
+(id)tableViewModel:(id)arg1 cellForTableView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4 ;
+(id)cellWithClass:(Class)arg1 tableView:(id)arg2 object:(id)arg3 ;
+(id)cellWithNib:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 object:(id)arg4 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 model:(id)arg3 ;
-(id)tableViewModel:(id)arg1 cellForTableView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4 ;
-(NSMutableDictionary *)objectToCellMap;
-(Class)cellClassFromObject:(id)arg1 ;
-(void)mapObjectClass:(Class)arg1 toCellClass:(Class)arg2 ;
-(void)setObjectToCellMap:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

