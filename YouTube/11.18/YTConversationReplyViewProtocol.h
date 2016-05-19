/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class YTImageView;


@protocol YTConversationReplyViewProtocol <NSObject>
@property (nonatomic,readonly) YTImageView * userThumbnail; 
@property (nonatomic,readonly) YTImageView * videoThumbnail; 
@optional
-(void)layoutCancelButton;

@required
-(YTImageView *)videoThumbnail;
-(void)setAttachmentViewHidden:(char)arg1;
-(void)setSendButtonTarget:(id)arg1 action:(SEL)arg2;
-(void)setAttachmentButtonTarget:(id)arg1 action:(SEL)arg2;
-(void)setAttachmentDismissButtonTarget:(id)arg1 action:(SEL)arg2;
-(id)inputViewString;
-(void)endInput;
-(void)removeAttachmentButtonTarget;
-(void)removeAttachmentDismissButtonTarget;
-(void)removeSendButtonTarget;
-(YTImageView *)userThumbnail;

@end

