/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseViewController.h>
#import <YouTube/YTScreenManagerViewDelegate.h>

@class MDXScreenManager, YTScreenManagerView, YTButton, NSString;

@interface YTScreenManagerViewController : YTBaseViewController <YTScreenManagerViewDelegate> {

	MDXScreenManager* _screenManager;
	YTScreenManagerView* _screenManagerView;
	YTButton* _doneButton;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParentResponder:(id)arg1 ;
-(void)didPressDoneButton:(id)arg1 ;
-(void)didRemoveScreen:(id)arg1 ;
-(void)didRenameScreen:(id)arg1 toNewName:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
@end

