/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WAGimmickProperties : NSObject {

	short _version;
	short _type;
	short _displayWidth;
	short _displayHeight;
	short _frameCount;
	short _frameRate;
	short _topInset;
	short _leftInset;
	short _bottomInset;
	short _rightInset;
	NSString* _assetID;

}

@property (nonatomic,copy) NSString * assetID;                          //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) short version;                             //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) short type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) short displayWidth;                        //@synthesize displayWidth=_displayWidth - In the implementation block
@property (assign,nonatomic) short displayHeight;                       //@synthesize displayHeight=_displayHeight - In the implementation block
@property (assign,nonatomic) short frameCount;                          //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) short frameRate;                           //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) short topInset;                            //@synthesize topInset=_topInset - In the implementation block
@property (assign,nonatomic) short leftInset;                           //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) short bottomInset;                         //@synthesize bottomInset=_bottomInset - In the implementation block
@property (assign,nonatomic) short rightInset;                          //@synthesize rightInset=_rightInset - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID; 
-(short)displayWidth;
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(void)setDisplayWidth:(short)arg1 ;
-(void)setDisplayHeight:(short)arg1 ;
-(id)initWithExternalID:(id)arg1 ;
-(NSString *)externalID;
-(short)frameRate;
-(void)setFrameRate:(short)arg1 ;
-(void)setType:(short)arg1 ;
-(short)type;
-(void)setFrameCount:(short)arg1 ;
-(short)frameCount;
-(void)setVersion:(short)arg1 ;
-(short)version;
-(short)displayHeight;
-(short)topInset;
-(short)leftInset;
-(short)bottomInset;
-(short)rightInset;
-(void)setLeftInset:(short)arg1 ;
-(void)setTopInset:(short)arg1 ;
-(void)setRightInset:(short)arg1 ;
-(void)setBottomInset:(short)arg1 ;
@end

