/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGToastData : NSObject {

	unsigned _comments;
	unsigned _likes;
	unsigned _relationships;
	unsigned _userTags;
	unsigned _photosOfYou;

}

@property (assign,nonatomic) unsigned comments;                   //@synthesize comments=_comments - In the implementation block
@property (assign,nonatomic) unsigned likes;                      //@synthesize likes=_likes - In the implementation block
@property (assign,nonatomic) unsigned relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (assign,nonatomic) unsigned userTags;                   //@synthesize userTags=_userTags - In the implementation block
@property (assign,nonatomic) unsigned photosOfYou;                //@synthesize photosOfYou=_photosOfYou - In the implementation block
+(id)randomTestData;
+(id)simpleTestData;
-(unsigned)photosOfYou;
-(char)isValidToShow;
-(void)setRelationships:(unsigned)arg1 ;
-(void)setPhotosOfYou:(unsigned)arg1 ;
-(unsigned)relationships;
-(void)setUserTags:(unsigned)arg1 ;
-(unsigned)userTags;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)likes;
-(void)setLikes:(unsigned)arg1 ;
-(void)setComments:(unsigned)arg1 ;
-(unsigned)comments;
@end

