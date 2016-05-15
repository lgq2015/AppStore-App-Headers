/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Yik Yak/Yik Yak-Structs.h>
@class NSString;

@interface FBSDKProfilePictureViewState : NSObject {

	char _imageShouldFit;
	unsigned _pictureMode;
	NSString* _profileID;
	float _scale;
	CGSize _size;

}

@property (nonatomic,readonly) char imageShouldFit;                    //@synthesize imageShouldFit=_imageShouldFit - In the implementation block
@property (nonatomic,readonly) unsigned pictureMode;                   //@synthesize pictureMode=_pictureMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileID;              //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,readonly) float scale;                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
-(char)isValidForState:(id)arg1 ;
-(id)initWithProfileID:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 pictureMode:(unsigned)arg4 imageShouldFit:(char)arg5 ;
-(char)imageShouldFit;
-(unsigned)pictureMode;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(float)scale;
-(char)isEqualToState:(id)arg1 ;
-(NSString *)profileID;
@end

