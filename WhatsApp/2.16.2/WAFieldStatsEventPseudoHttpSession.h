/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventPseudoHttpSession : WAFieldStatsEvent {

	double _pseudo_http_total_bytes_sent;
	double _pseudo_http_total_bytes_received;
	double _pseudo_http_header_bytes_sent;
	double _pseudo_http_header_bytes_received;
	double _pseudo_http_send_overhead_t;
	double _pseudo_http_receive_overhead_t;

}

@property (assign,nonatomic) double pseudo_http_total_bytes_sent;                   //@synthesize pseudo_http_total_bytes_sent=_pseudo_http_total_bytes_sent - In the implementation block
@property (assign,nonatomic) double pseudo_http_total_bytes_received;               //@synthesize pseudo_http_total_bytes_received=_pseudo_http_total_bytes_received - In the implementation block
@property (assign,nonatomic) double pseudo_http_header_bytes_sent;                  //@synthesize pseudo_http_header_bytes_sent=_pseudo_http_header_bytes_sent - In the implementation block
@property (assign,nonatomic) double pseudo_http_header_bytes_received;              //@synthesize pseudo_http_header_bytes_received=_pseudo_http_header_bytes_received - In the implementation block
@property (assign,nonatomic) double pseudo_http_send_overhead_t;                    //@synthesize pseudo_http_send_overhead_t=_pseudo_http_send_overhead_t - In the implementation block
@property (assign,nonatomic) double pseudo_http_receive_overhead_t;                 //@synthesize pseudo_http_receive_overhead_t=_pseudo_http_receive_overhead_t - In the implementation block
-(double)pseudo_http_total_bytes_sent;
-(void)setPseudo_http_total_bytes_sent:(double)arg1 ;
-(double)pseudo_http_total_bytes_received;
-(void)setPseudo_http_total_bytes_received:(double)arg1 ;
-(double)pseudo_http_header_bytes_sent;
-(void)setPseudo_http_header_bytes_sent:(double)arg1 ;
-(double)pseudo_http_header_bytes_received;
-(void)setPseudo_http_header_bytes_received:(double)arg1 ;
-(double)pseudo_http_send_overhead_t;
-(void)setPseudo_http_send_overhead_t:(double)arg1 ;
-(double)pseudo_http_receive_overhead_t;
-(void)setPseudo_http_receive_overhead_t:(double)arg1 ;
-(id)init;
-(void)submit;
@end

