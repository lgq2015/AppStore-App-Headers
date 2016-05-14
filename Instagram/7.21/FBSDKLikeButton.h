/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBSDKButton.h>
#import <Instagram/FBSDKButtonImpressionTracking.h>
#import <Instagram/FBSDKLiking.h>

@class NSString, FBSDKLikeActionController;

@interface FBSDKLikeButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKLiking> {

	char _isExplicitlyDisabled;
	FBSDKLikeActionController* _likeActionController;
	NSString* _objectID;
	unsigned _objectType;
	char _soundEnabled;

}

@property (assign,getter=isSoundEnabled,nonatomic) char soundEnabled;                       //@synthesize soundEnabled=_soundEnabled - In the implementation block
@property (nonatomic,retain) FBSDKLikeActionController * likeActionController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * objectID; 
@property (assign,nonatomic) unsigned objectType; 
+(void)initialize;
-(void)configureButton;
-(id)analyticsParameters;
-(id)impressionTrackingEventName;
-(id)impressionTrackingIdentifier;
-(char)isImplicitlyDisabled;
-(void)_ensureLikeActionController:(char)arg1 ;
-(void)_setLikeActionController:(id)arg1 ;
-(void)_resetLikeActionController;
-(char)isSoundEnabled;
-(void)setSoundEnabled:(char)arg1 ;
-(void)_likeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_likeActionControllerDidResetNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateNotification:(id)arg1 ;
-(void)setLikeActionController:(FBSDKLikeActionController *)arg1 ;
-(FBSDKLikeActionController *)likeActionController;
-(void)_like:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(NSString *)objectID;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setObjectType:(unsigned)arg1 ;
-(unsigned)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end

