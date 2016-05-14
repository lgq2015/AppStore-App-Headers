/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WAHTTPFetcher;

@interface WAServerStatus : NSObject {

	WAHTTPFetcher* _fetcher;
	char _email;
	char _last;
	char _sync;
	char _chat;
	char _group;
	char _multimedia;
	char _online;
	char _profile;
	char _push;
	char _registration;
	char _status;
	char _broadcast;
	char _version;
	char _requestError;
	char _requestInProgress;
	int _numberOfServicesDown;

}

@property (assign,nonatomic) char email;                              //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) char last;                               //@synthesize last=_last - In the implementation block
@property (assign,nonatomic) char sync;                               //@synthesize sync=_sync - In the implementation block
@property (assign,nonatomic) char chat;                               //@synthesize chat=_chat - In the implementation block
@property (assign,nonatomic) char group;                              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) char multimedia;                         //@synthesize multimedia=_multimedia - In the implementation block
@property (assign,nonatomic) char online;                             //@synthesize online=_online - In the implementation block
@property (assign,nonatomic) char profile;                            //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) char push;                               //@synthesize push=_push - In the implementation block
@property (assign,nonatomic) char registration;                       //@synthesize registration=_registration - In the implementation block
@property (assign,nonatomic) char status;                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char broadcast;                          //@synthesize broadcast=_broadcast - In the implementation block
@property (assign,nonatomic) char version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char requestError;                     //@synthesize requestError=_requestError - In the implementation block
@property (nonatomic,readonly) char requestInProgress;                //@synthesize requestInProgress=_requestInProgress - In the implementation block
@property (nonatomic,readonly) int numberOfServicesDown;              //@synthesize numberOfServicesDown=_numberOfServicesDown - In the implementation block
-(void)setRegistration:(char)arg1 ;
-(void)setBroadcast:(char)arg1 ;
-(id)registrationStatusString;
-(id)servicesStatusString;
-(int)numberOfServicesDown;
-(char)multimedia;
-(char)online;
-(void)requestStatusWithCompletion:(/*^block*/id)arg1 ;
-(char)requestInProgress;
-(void)parseStatusResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSync:(char)arg1 ;
-(void)setMultimedia:(char)arg1 ;
-(void)setPush:(char)arg1 ;
-(char)profile;
-(void)setOnline:(char)arg1 ;
-(id)init;
-(void)setGroup:(char)arg1 ;
-(char)group;
-(void)setVersion:(char)arg1 ;
-(char)version;
-(char)status;
-(void)setStatus:(char)arg1 ;
-(char)chat;
-(void)setChat:(char)arg1 ;
-(void)cancelRequest;
-(char)requestError;
-(char)broadcast;
-(char)last;
-(void)setLast:(char)arg1 ;
-(char)sync;
-(char)email;
-(char)registration;
-(void)setEmail:(char)arg1 ;
-(char)push;
-(void)setProfile:(char)arg1 ;
@end

