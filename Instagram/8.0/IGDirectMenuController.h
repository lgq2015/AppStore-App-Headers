/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDirectSaveMediaDelegate.h>

@protocol IGDirectViewControllerProtocol;
@class IGDirectContent, IGUser, NSMutableArray, UIViewController;

@interface IGDirectMenuController : NSObject <IGDirectSaveMediaDelegate> {

	IGDirectContent* _item;
	IGUser* _threadViewer;
	NSMutableArray* _directSaveMediaObservers;
	UIViewController*<IGDirectViewControllerProtocol> _viewController;

}

@property (nonatomic,retain) IGUser * threadViewer;                                                                //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) NSMutableArray * directSaveMediaObservers;                                            //@synthesize directSaveMediaObservers=_directSaveMediaObservers - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<IGDirectViewControllerProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) IGDirectContent * item;                                                               //@synthesize item=_item - In the implementation block
-(id)initWithViewController:(id)arg1 threadViewer:(id)arg2 ;
-(IGUser *)threadViewer;
-(void)performDeleteForContent:(id)arg1 ;
-(void)setOrUnsetMenuForContent:(id)arg1 cell:(id)arg2 ;
-(void)unsend:(id)arg1 ;
-(void)unlike:(id)arg1 ;
-(void)flag:(id)arg1 ;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)didHideMenu:(id)arg1 ;
-(void)reportContent:(id)arg1 ;
-(NSMutableArray *)directSaveMediaObservers;
-(void)saveMediaObserverDidFinishSaving:(id)arg1 ;
-(void)performRetyForContent:(id)arg1 onCell:(id)arg2 ;
-(void)setDirectSaveMediaObservers:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(IGDirectContent *)item;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setViewController:(UIViewController*<IGDirectViewControllerProtocol>)arg1 ;
-(UIViewController*<IGDirectViewControllerProtocol>)viewController;
-(void)copy:(id)arg1 ;
-(void)setItem:(IGDirectContent *)arg1 ;
-(void)save:(id)arg1 ;
@end

