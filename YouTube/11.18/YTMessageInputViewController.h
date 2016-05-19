/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <YouTube/YTController.h>
#import <YouTube/YTMessageInputProtocol.h>

@protocol YTDataServices, YTResponder;
@class YTThumbnailController, YTIMessageInputSectionRenderer, GIMMe, NSString;

@interface YTMessageInputViewController : UIViewController <YTController, YTMessageInputProtocol> {

	id<YTDataServices> _dataServices;
	YTThumbnailController* _thumbnailController;
	YTIMessageInputSectionRenderer* _messageInputRenderer;
	id<YTResponder> _parentResponder;
	GIMMe* _gimme;

}

@property (assign,nonatomic,__weak) GIMMe * gimme;                                  //@synthesize gimme=_gimme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<YTResponder> parentResponder;              //@synthesize parentResponder=_parentResponder - In the implementation block
-(id<YTResponder>)parentResponder;
-(id)initWithParentResponder:(id)arg1 ;
-(GIMMe *)gimme;
-(void)setGimme:(GIMMe *)arg1 ;
-(void)loadWithModel:(id)arg1 ;
-(void)closeKeyboard;
-(id)messageInputView;
-(void)loadView;
-(id)text;
@end

