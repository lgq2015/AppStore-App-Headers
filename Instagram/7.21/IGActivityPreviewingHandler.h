/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol UIViewControllerPreviewingDelegate;
@class IGNewsTableViewController, IGUserPreviewingHandler, IGFeedItemPreviewingHandler, NSString;

@interface IGActivityPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGNewsTableViewController* _newsViewController;
	IGUserPreviewingHandler* _userDelegate;
	IGFeedItemPreviewingHandler* _feedItemDelegate;
	id<UIViewControllerPreviewingDelegate> _usedDelegate;

}

@property (nonatomic,__weak,readonly) IGNewsTableViewController * newsViewController;              //@synthesize newsViewController=_newsViewController - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userDelegate;                               //@synthesize userDelegate=_userDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItemPreviewingHandler * feedItemDelegate;                       //@synthesize feedItemDelegate=_feedItemDelegate - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewingDelegate> usedDelegate;                  //@synthesize usedDelegate=_usedDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGNewsTableViewController *)newsViewController;
-(id)initWithNewsTableViewController:(id)arg1 ;
-(IGFeedItemPreviewingHandler *)feedItemDelegate;
-(void)setFeedItemDelegate:(IGFeedItemPreviewingHandler *)arg1 ;
-(IGUserPreviewingHandler *)userDelegate;
-(void)setUsedDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)usedDelegate;
-(void)setUserDelegate:(IGUserPreviewingHandler *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end

