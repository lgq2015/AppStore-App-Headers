/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 11, 2016 at 2:06:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/57E44ADD-CBC7-4349-9D9F-96F9CA56753B/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaPreloaderItem.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@class NSString, IGPhoto, IGVideo, IGUser, NSURL, IGCommentModel, IGDate, IGDirectResponseInfo;

@interface IGPostItem : NSObject <IGMediaPreloaderItem, NSCoding, IGDKDiffable> {

	NSString* _pk;
	int _mediaType;
	IGPhoto* _photo;
	IGVideo* _video;
	IGUser* _user;
	NSURL* _link;
	NSString* _actionText;
	IGCommentModel* _caption;
	float _captionPosition;
	IGCommentModel* _headline;
	IGDate* _takenAtDate;
	IGDirectResponseInfo* _directResponseInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pk;                                     //@synthesize pk=_pk - In the implementation block
@property (nonatomic,readonly) int mediaType;                                          //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) IGPhoto * photo;                                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) IGVideo * video;                                        //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                          //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSURL * link;                                           //@synthesize link=_link - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionText;                             //@synthesize actionText=_actionText - In the implementation block
@property (nonatomic,readonly) IGCommentModel * caption;                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) float captionPosition;                                  //@synthesize captionPosition=_captionPosition - In the implementation block
@property (nonatomic,readonly) IGCommentModel * headline;                              //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) IGDate * takenAtDate;                                   //@synthesize takenAtDate=_takenAtDate - In the implementation block
@property (nonatomic,readonly) IGDirectResponseInfo * directResponseInfo;              //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
-(NSString *)pk;
-(id)diffIdentifier;
-(IGDate *)takenAtDate;
-(float)captionPosition;
-(IGDirectResponseInfo *)directResponseInfo;
-(NSString *)actionText;
-(id)initWithFeedDictionary:(id)arg1 ;
-(id)initWithType:(int)arg1 photo:(id)arg2 video:(id)arg3 user:(id)arg4 link:(id)arg5 pk:(id)arg6 actionText:(id)arg7 directResponseInfo:(id)arg8 caption:(id)arg9 captionPosition:(float)arg10 headline:(id)arg11 takenAtDate:(id)arg12 ;
-(IGCommentModel *)headline;
-(IGUser *)user;
-(int)mediaType;
-(IGPhoto *)photo;
-(void)setMediaType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSURL *)link;
-(IGCommentModel *)caption;
-(IGVideo *)video;
@end

