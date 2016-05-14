/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Tweetbot/Tweetbot-Structs.h>
@class PTHTweetbotStatus, PTHTweetbotEntityTextFontAppearance;

@interface PTHTweetbotStatusViewLayout : NSObject {

	PTHTweetbotStatus* _status;
	float _width;
	float _height;
	CGRect _profileFrame;
	CGRect _profileViolatorFrame;
	CGRect _titleFrame;
	CGRect _bodyFrame;
	CGRect _imageFrame;
	CGRect _retweetFrame;
	CGRect _quoteFrame;
	CGRect _topSeparatorFrame;
	CGRect _bottomSeparatorFrame;
	PTHTweetbotEntityTextFontAppearance* _fontAppearance;
	int _imageType;

}

@property (nonatomic,__weak,readonly) PTHTweetbotStatus * status;                                 //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) PTHTweetbotEntityTextFontAppearance * fontAppearance;              //@synthesize fontAppearance=_fontAppearance - In the implementation block
@property (nonatomic,readonly) float width;                                                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int imageType;                                                     //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) float height;                                                      //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) CGRect profileFrame;                                               //@synthesize profileFrame=_profileFrame - In the implementation block
@property (nonatomic,readonly) CGRect profileViolatorFrame;                                       //@synthesize profileViolatorFrame=_profileViolatorFrame - In the implementation block
@property (nonatomic,readonly) CGRect titleFrame;                                                 //@synthesize titleFrame=_titleFrame - In the implementation block
@property (nonatomic,readonly) CGRect bodyFrame;                                                  //@synthesize bodyFrame=_bodyFrame - In the implementation block
@property (nonatomic,readonly) CGRect imageFrame;                                                 //@synthesize imageFrame=_imageFrame - In the implementation block
@property (nonatomic,readonly) CGRect retweetFrame;                                               //@synthesize retweetFrame=_retweetFrame - In the implementation block
@property (nonatomic,readonly) CGRect quoteFrame;                                                 //@synthesize quoteFrame=_quoteFrame - In the implementation block
@property (nonatomic,readonly) CGRect topSeparatorFrame;                                          //@synthesize topSeparatorFrame=_topSeparatorFrame - In the implementation block
@property (nonatomic,readonly) CGRect bottomSeparatorFrame;                                       //@synthesize bottomSeparatorFrame=_bottomSeparatorFrame - In the implementation block
@property (nonatomic,readonly) CGSize smallMediaSize; 
@property (nonatomic,readonly) float quoteHeight; 
+(id)bodyTextForStatus:(id)arg1 ;
+(char)showProfile;
+(char)showTitle;
+(char)showRetweet;
+(id)layoutForStatus:(id)arg1 withWidth:(float)arg2 ;
+(char)showQuote;
+(id)layoutForStatus:(id)arg1 fontAppearance:(id)arg2 imageType:(int)arg3 withWidth:(float)arg4 ;
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(CGSize)smallMediaSize;
-(float)heightForBodyWithWidth:(float)arg1 ;
-(float)quoteHeight;
-(CGRect)bottomSeparatorFrame;
-(CGRect)profileFrame;
-(CGRect)titleFrame;
-(CGRect)bodyFrame;
-(CGRect)retweetFrame;
-(CGRect)quoteFrame;
-(CGRect)topSeparatorFrame;
-(id)initWithStatus:(id)arg1 fontAppearance:(id)arg2 imageType:(int)arg3 width:(float)arg4 ;
-(CGRect)profileViolatorFrame;
-(CGRect)imageFrame;
-(char)isEqual:(id)arg1 ;
-(void)reset;
-(float)width;
-(float)height;
-(PTHTweetbotStatus *)status;
-(int)imageType;
@end

