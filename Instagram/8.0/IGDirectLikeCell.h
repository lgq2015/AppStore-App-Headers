/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGDirectContentUploadCell.h>

@protocol IGDirectContentUpoadCellDelegate;
@class IGDirectContentCellUploadDecorator, UIImageView, UIImage;

@interface IGDirectLikeCell : IGDirectContentCell <IGDirectContentUploadCell> {

	char _isPulsing;
	id<IGDirectContentUpoadCellDelegate> delegate;
	IGDirectContentCellUploadDecorator* _uploadDecorator;
	UIImageView* _likeImageView;
	UIImage* _likeImage;
	CGRect _defaultLikeFrame;

}

@property (nonatomic,retain) UIImageView * likeImageView;                                       //@synthesize likeImageView=_likeImageView - In the implementation block
@property (assign,nonatomic) CGRect defaultLikeFrame;                                           //@synthesize defaultLikeFrame=_defaultLikeFrame - In the implementation block
@property (assign,nonatomic) char isPulsing;                                                    //@synthesize isPulsing=_isPulsing - In the implementation block
@property (nonatomic,retain) UIImage * likeImage;                                               //@synthesize likeImage=_likeImage - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUpoadCellDelegate> delegate; 
@property (nonatomic,retain) IGDirectContentCellUploadDecorator * uploadDecorator;              //@synthesize uploadDecorator=_uploadDecorator - In the implementation block
+(id)likeImage;
+(float)likeCellHeight;
-(void)performDelete;
-(void)handleUploadCellTap;
-(void)performRetry;
-(void)uploadDecoratorShowFailedUI:(id)arg1 ;
-(void)showUploadFailedUI;
-(void)showUploadSendingUI;
-(IGDirectContentCellUploadDecorator *)uploadDecorator;
-(void)setUploadDecorator:(IGDirectContentCellUploadDecorator *)arg1 ;
-(id)timestampText;
-(void)setCellDecorator:(id)arg1 ;
-(CGRect)tapTargetFrame;
-(id)cellDecorator;
-(UIImageView *)likeImageView;
-(UIImage *)likeImage;
-(void)setDefaultLikeFrame:(CGRect)arg1 ;
-(CGRect)defaultLikeFrame;
-(void)setIsPulsing:(char)arg1 ;
-(void)pulseLikeIcon;
-(void)setLikeImageView:(UIImageView *)arg1 ;
-(void)setLikeImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectContentUpoadCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUpoadCellDelegate>)delegate;
-(void)prepareForReuse;
-(char)isPulsing;
@end

