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
@class IGUserPreviewingHandler, IGHashtagPreviewingHandler, NSString;

@interface IGFeedPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGUserPreviewingHandler* _userDelegate;
	IGHashtagPreviewingHandler* _hashtagDelegate;
	id<UIViewControllerPreviewingDelegate> _usedDelegate;

}

@property (nonatomic,retain) IGUserPreviewingHandler * userDelegate;                           //@synthesize userDelegate=_userDelegate - In the implementation block
@property (nonatomic,retain) IGHashtagPreviewingHandler * hashtagDelegate;                     //@synthesize hashtagDelegate=_hashtagDelegate - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewingDelegate> usedDelegate;              //@synthesize usedDelegate=_usedDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFeedViewController:(id)arg1 ;
-(IGUserPreviewingHandler *)userDelegate;
-(IGHashtagPreviewingHandler *)hashtagDelegate;
-(void)setUsedDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)usedDelegate;
-(void)setUserDelegate:(IGUserPreviewingHandler *)arg1 ;
-(void)setHashtagDelegate:(IGHashtagPreviewingHandler *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end

