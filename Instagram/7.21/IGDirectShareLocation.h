/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentUploadable.h>
#import <Instagram/IGDirectCommentable.h>
#import <Instagram/IGDirectContentReactable.h>

@class IGDirectContentUploadInfo, NSString, NSArray, IGLocation;

@interface IGDirectShareLocation : IGDirectContent <IGDirectContentUploadable, IGDirectCommentable, IGDirectContentReactable> {

	char _reactionsNeedsReRender;
	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	NSArray* _reactions;
	unsigned _likeCount;
	unsigned _lastReactionType;
	IGLocation* _location;
	NSArray* _previewMedia;

}

@property (nonatomic,retain) IGLocation * location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSArray * previewMedia;                              //@synthesize previewMedia=_previewMedia - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,retain) NSString * uploadComment;                            //@synthesize uploadComment=_uploadComment - In the implementation block
@property (nonatomic,retain) NSArray * reactions;                                 //@synthesize reactions=_reactions - In the implementation block
@property (assign,nonatomic) unsigned likeCount;                                  //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) char reactionsNeedsReRender;                         //@synthesize reactionsNeedsReRender=_reactionsNeedsReRender - In the implementation block
@property (assign,nonatomic) unsigned lastReactionType;                           //@synthesize lastReactionType=_lastReactionType - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(NSArray *)reactions;
-(id)copyOfContentWithReactionFilter:(id)arg1 ;
-(void)setReactions:(NSArray *)arg1 ;
-(char)reactionsNeedsReRender;
-(void)setReactionsNeedsReRender:(char)arg1 ;
-(unsigned)lastReactionType;
-(void)setLastReactionType:(unsigned)arg1 ;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(NSArray *)previewMedia;
-(void)setPreviewMedia:(NSArray *)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 location:(id)arg2 recipient:(id)arg3 ;
-(char)isUploading;
-(unsigned)likeCount;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(id)digestDescription;
-(void)setLikeCount:(unsigned)arg1 ;
@end

