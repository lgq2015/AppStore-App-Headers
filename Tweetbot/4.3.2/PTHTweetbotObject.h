/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:16:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/E50E682B-1B17-4DC6-B9DF-B10638C3B840/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class PTHTweetbotAccount, NSNumber, PTHTweetbotObjectDescriptor;

@interface PTHTweetbotObject : NSObject <NSCoding> {

	PTHTweetbotAccount* _account;
	long long _tid;
	char _loaded;
	char _dirty;

}

@property (assign,nonatomic,__weak) PTHTweetbotAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long tid;                                                        //@synthesize tid=_tid - In the implementation block
@property (nonatomic,readonly) NSNumber * tidValue; 
@property (assign,getter=isLoaded,nonatomic) char loaded;                                          //@synthesize loaded=_loaded - In the implementation block
@property (assign,getter=isDirty,nonatomic) char dirty;                                            //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,__weak,readonly) PTHTweetbotObjectDescriptor * objectDescriptor; 
+(id)newWithAccount:(id)arg1 dictionary:(id)arg2 ;
+(id)newWithAccount:(id)arg1 tid:(long long)arg2 ;
+(void)initialize;
-(id)initWithAccount:(id)arg1 tid:(long long)arg2 ;
-(char)hasString:(id)arg1 ;
-(NSNumber *)tidValue;
-(PTHTweetbotObjectDescriptor *)objectDescriptor;
-(void)updateFromDictionary:(id)arg1 ;
-(void)setLoaded:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)compare:(id)arg1 ;
-(char)isLoaded;
-(void)setDirty:(char)arg1 ;
-(void)setTid:(long long)arg1 ;
-(long long)tid;
-(char)isDirty;
-(void)setAccount:(PTHTweetbotAccount *)arg1 ;
-(PTHTweetbotAccount *)account;
@end

