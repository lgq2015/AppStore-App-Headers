/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:35:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/ABE77428-6C25-43C9-8AD9-E0579EF1E1DA/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventICloudRestore : WAFieldStatsEvent {

	double _icloud_restore_result;
	double _icloud_restore_start_reason;
	double _icloud_restore_integrity_check_result;
	double _icloud_download_t;
	double _icloud_extract_t;
	double _icloud_size;

}

@property (assign,nonatomic) double icloud_restore_result;                              //@synthesize icloud_restore_result=_icloud_restore_result - In the implementation block
@property (assign,nonatomic) double icloud_restore_start_reason;                        //@synthesize icloud_restore_start_reason=_icloud_restore_start_reason - In the implementation block
@property (assign,nonatomic) double icloud_restore_integrity_check_result;              //@synthesize icloud_restore_integrity_check_result=_icloud_restore_integrity_check_result - In the implementation block
@property (assign,nonatomic) double icloud_download_t;                                  //@synthesize icloud_download_t=_icloud_download_t - In the implementation block
@property (assign,nonatomic) double icloud_extract_t;                                   //@synthesize icloud_extract_t=_icloud_extract_t - In the implementation block
@property (assign,nonatomic) double icloud_size;                                        //@synthesize icloud_size=_icloud_size - In the implementation block
-(double)icloud_restore_result;
-(void)setIcloud_restore_result:(double)arg1 ;
-(double)icloud_restore_start_reason;
-(void)setIcloud_restore_start_reason:(double)arg1 ;
-(double)icloud_restore_integrity_check_result;
-(void)setIcloud_restore_integrity_check_result:(double)arg1 ;
-(double)icloud_download_t;
-(void)setIcloud_download_t:(double)arg1 ;
-(double)icloud_extract_t;
-(void)setIcloud_extract_t:(double)arg1 ;
-(double)icloud_size;
-(void)setIcloud_size:(double)arg1 ;
-(id)init;
-(void)submit;
@end

