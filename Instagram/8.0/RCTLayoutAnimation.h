/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, RCTAnimation;

@interface RCTLayoutAnimation : NSObject {

	NSDictionary* _config;
	RCTAnimation* _createAnimation;
	RCTAnimation* _updateAnimation;
	RCTAnimation* _deleteAnimation;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSDictionary * config;                         //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) RCTAnimation * createAnimation;              //@synthesize createAnimation=_createAnimation - In the implementation block
@property (nonatomic,retain) RCTAnimation * updateAnimation;              //@synthesize updateAnimation=_updateAnimation - In the implementation block
@property (nonatomic,retain) RCTAnimation * deleteAnimation;              //@synthesize deleteAnimation=_deleteAnimation - In the implementation block
@property (nonatomic,copy) id callback;                                   //@synthesize callback=_callback - In the implementation block
-(id)initWithDictionary:(id)arg1 callback:(/*^block*/id)arg2 ;
-(RCTAnimation *)createAnimation;
-(void)setCreateAnimation:(RCTAnimation *)arg1 ;
-(void)setUpdateAnimation:(RCTAnimation *)arg1 ;
-(RCTAnimation *)deleteAnimation;
-(void)setDeleteAnimation:(RCTAnimation *)arg1 ;
-(RCTAnimation *)updateAnimation;
-(NSDictionary *)config;
-(void)setConfig:(NSDictionary *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

