/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDirectShareSheet.h>

@class IGPost, NSString, IGDirectShareSheetExternalShareViewController;

@interface IGDirectPostShareSheet : IGDirectShareSheet {

	IGPost* _post;
	NSString* _warningMessage;
	IGDirectShareSheetExternalShareViewController* _shareController;

}

@property (nonatomic,copy) NSString * warningMessage;                                                      //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,retain) IGDirectShareSheetExternalShareViewController * shareController;              //@synthesize shareController=_shareController - In the implementation block
@property (nonatomic,retain) IGPost * post;                                                                //@synthesize post=_post - In the implementation block
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setWarningMessage:(NSString *)arg1 ;
-(IGDirectShareSheetExternalShareViewController *)shareController;
-(void)setShareController:(IGDirectShareSheetExternalShareViewController *)arg1 ;
-(NSString *)warningMessage;
-(float)externalShareControllerHeight;
-(id)externalShareController;
-(id)sendToTitleString;
-(id)module;
-(id)init;
@end

