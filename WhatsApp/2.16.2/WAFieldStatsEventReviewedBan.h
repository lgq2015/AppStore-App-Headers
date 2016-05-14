/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@class NSString;

@interface WAFieldStatsEventReviewedBan : WAFieldStatsEvent {

	NSString* _app_version;
	NSString* _ban_origin;
	NSString* _unban_origin;
	NSString* _reviewed_origin;
	NSString* _ban_reason;
	NSString* _watch_reason;
	NSString* _ip;
	double _platform;
	double _bounce_count;
	double _groups_created;
	double _groups_participating;
	double _ban_flag_fake_s40;
	double _ban_flag_pinger;
	double _ban_flag_modded;
	double _ban_flag_was_modded;
	double _ban_flag_needs_legit;
	double _asn;
	double _account_create_ts;
	double _ban_is_compliant;
	double _ban_gen;
	double _temp_ban_gen;
	double _is_unban_on_email;

}

@property (assign,nonatomic) double platform;                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSString * app_version;                   //@synthesize app_version=_app_version - In the implementation block
@property (assign,nonatomic) double bounce_count;                      //@synthesize bounce_count=_bounce_count - In the implementation block
@property (assign,nonatomic) double groups_created;                    //@synthesize groups_created=_groups_created - In the implementation block
@property (assign,nonatomic) double groups_participating;              //@synthesize groups_participating=_groups_participating - In the implementation block
@property (nonatomic,retain) NSString * ban_origin;                    //@synthesize ban_origin=_ban_origin - In the implementation block
@property (nonatomic,retain) NSString * unban_origin;                  //@synthesize unban_origin=_unban_origin - In the implementation block
@property (nonatomic,retain) NSString * reviewed_origin;               //@synthesize reviewed_origin=_reviewed_origin - In the implementation block
@property (nonatomic,retain) NSString * ban_reason;                    //@synthesize ban_reason=_ban_reason - In the implementation block
@property (nonatomic,retain) NSString * watch_reason;                  //@synthesize watch_reason=_watch_reason - In the implementation block
@property (assign,nonatomic) double ban_flag_fake_s40;                 //@synthesize ban_flag_fake_s40=_ban_flag_fake_s40 - In the implementation block
@property (assign,nonatomic) double ban_flag_pinger;                   //@synthesize ban_flag_pinger=_ban_flag_pinger - In the implementation block
@property (assign,nonatomic) double ban_flag_modded;                   //@synthesize ban_flag_modded=_ban_flag_modded - In the implementation block
@property (assign,nonatomic) double ban_flag_was_modded;               //@synthesize ban_flag_was_modded=_ban_flag_was_modded - In the implementation block
@property (assign,nonatomic) double ban_flag_needs_legit;              //@synthesize ban_flag_needs_legit=_ban_flag_needs_legit - In the implementation block
@property (assign,nonatomic) double asn;                               //@synthesize asn=_asn - In the implementation block
@property (nonatomic,retain) NSString * ip;                            //@synthesize ip=_ip - In the implementation block
@property (assign,nonatomic) double account_create_ts;                 //@synthesize account_create_ts=_account_create_ts - In the implementation block
@property (assign,nonatomic) double ban_is_compliant;                  //@synthesize ban_is_compliant=_ban_is_compliant - In the implementation block
@property (assign,nonatomic) double ban_gen;                           //@synthesize ban_gen=_ban_gen - In the implementation block
@property (assign,nonatomic) double temp_ban_gen;                      //@synthesize temp_ban_gen=_temp_ban_gen - In the implementation block
@property (assign,nonatomic) double is_unban_on_email;                 //@synthesize is_unban_on_email=_is_unban_on_email - In the implementation block
-(NSString *)app_version;
-(void)setApp_version:(NSString *)arg1 ;
-(double)bounce_count;
-(void)setBounce_count:(double)arg1 ;
-(double)groups_created;
-(void)setGroups_created:(double)arg1 ;
-(double)groups_participating;
-(void)setGroups_participating:(double)arg1 ;
-(NSString *)ban_origin;
-(void)setBan_origin:(NSString *)arg1 ;
-(NSString *)ban_reason;
-(void)setBan_reason:(NSString *)arg1 ;
-(NSString *)watch_reason;
-(void)setWatch_reason:(NSString *)arg1 ;
-(double)ban_flag_fake_s40;
-(void)setBan_flag_fake_s40:(double)arg1 ;
-(double)ban_flag_pinger;
-(void)setBan_flag_pinger:(double)arg1 ;
-(double)ban_flag_modded;
-(void)setBan_flag_modded:(double)arg1 ;
-(double)ban_flag_was_modded;
-(void)setBan_flag_was_modded:(double)arg1 ;
-(double)ban_flag_needs_legit;
-(void)setBan_flag_needs_legit:(double)arg1 ;
-(double)asn;
-(void)setAsn:(double)arg1 ;
-(double)account_create_ts;
-(void)setAccount_create_ts:(double)arg1 ;
-(double)ban_is_compliant;
-(void)setBan_is_compliant:(double)arg1 ;
-(double)ban_gen;
-(void)setBan_gen:(double)arg1 ;
-(double)temp_ban_gen;
-(void)setTemp_ban_gen:(double)arg1 ;
-(NSString *)unban_origin;
-(void)setUnban_origin:(NSString *)arg1 ;
-(NSString *)reviewed_origin;
-(void)setReviewed_origin:(NSString *)arg1 ;
-(double)is_unban_on_email;
-(void)setIs_unban_on_email:(double)arg1 ;
-(id)init;
-(void)setPlatform:(double)arg1 ;
-(NSString *)ip;
-(void)setIp:(NSString *)arg1 ;
-(double)platform;
-(void)submit;
@end

