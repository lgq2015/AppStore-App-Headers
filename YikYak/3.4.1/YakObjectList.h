/*
* This header is generated by classdump-dyld 1.0
* on Friday, April 22, 2016 at 10:58:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D8C1ED38-25E6-459D-9E28-E2C1B463D6A5/Yik Yak.app/Yik Yak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface YakObjectList : NSObject {

	char _canVote;
	char _canSubmit;
	char _canReport;
	NSArray* _all;

}

@property (nonatomic,retain) NSArray * all;                 //@synthesize all=_all - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (assign,nonatomic) char canVote;                  //@synthesize canVote=_canVote - In the implementation block
@property (assign,nonatomic) char canSubmit;                //@synthesize canSubmit=_canSubmit - In the implementation block
@property (assign,nonatomic) char canReport;                //@synthesize canReport=_canReport - In the implementation block
-(void)setCanSubmit:(char)arg1 ;
-(void)setCanVote:(char)arg1 ;
-(char)canSubmit;
-(char)canVote;
-(void)setCanReport:(char)arg1 ;
-(char)canReport;
-(unsigned)count;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)setAll:(NSArray *)arg1 ;
-(NSArray *)all;
@end

