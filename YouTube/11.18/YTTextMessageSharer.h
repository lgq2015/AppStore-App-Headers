/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTBaseSharer.h>
#import <YouTube/MFMessageComposeViewControllerDelegate.h>

@class NSString;

@interface YTTextMessageSharer : YTBaseSharer <MFMessageComposeViewControllerDelegate> {

	YTTextMessageSharer* _retainedSelf;
	/*^block*/id _successBlock;
	/*^block*/id _errorBlock;

}

@property (nonatomic,readonly) YTTextMessageSharer * retainedSelf;              //@synthesize retainedSelf=_retainedSelf - In the implementation block
@property (nonatomic,readonly) id successBlock;                                 //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,readonly) id errorBlock;                                   //@synthesize errorBlock=_errorBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canShare;
+(id)shareActionText;
+(id)shareActionIcon;
+(char)supportsNavigationEndpoint:(id)arg1 ;
+(id)serviceName;
+(int)serviceId;
-(void)shareObjectWithID:(id)arg1 shareType:(int)arg2 URL:(id)arg3 title:(id)arg4 successBlock:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(void)shareWithText:(id)arg1 title:(id)arg2 recipients:(id)arg3 successBlock:(/*^block*/id)arg4 errorBlock:(/*^block*/id)arg5 ;
-(void)shareWithNavigationEndpoint:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)shareObjectWithID:(id)arg1 shareType:(int)arg2 URL:(id)arg3 title:(id)arg4 recipients:(id)arg5 successBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
-(void)shareObjectWithID:(id)arg1 shareType:(int)arg2 URL:(id)arg3 title:(id)arg4 recipients:(id)arg5 messageController:(id)arg6 successBlock:(/*^block*/id)arg7 errorBlock:(/*^block*/id)arg8 ;
-(void)shareWithText:(id)arg1 title:(id)arg2 recipients:(id)arg3 messageController:(id)arg4 successBlock:(/*^block*/id)arg5 errorBlock:(/*^block*/id)arg6 ;
-(id)successBlock;
-(id)errorBlock;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(YTTextMessageSharer *)retainedSelf;
@end

