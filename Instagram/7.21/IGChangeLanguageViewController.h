/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@interface IGChangeLanguageViewController : UITableViewController {

	NSArray* _locales;
	NSString* _currentLanguage;

}

@property (nonatomic,readonly) NSArray * locales;                       //@synthesize locales=_locales - In the implementation block
@property (nonatomic,readonly) NSString * currentLanguage;              //@synthesize currentLanguage=_currentLanguage - In the implementation block
-(id)localeForIndexPath:(id)arg1 ;
-(id)localeNameForIndexPath:(id)arg1 ;
-(char)isCurrentLocale:(id)arg1 ;
-(void)changeLocale:(id)arg1 ;
-(void)relaunchApp;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(NSArray *)locales;
-(NSString *)currentLanguage;
@end

