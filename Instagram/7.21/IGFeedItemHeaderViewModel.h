/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 27, 2016 at 5:25:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/18A47B54-BBB4-452D-8D90-8FE53FA433AA/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IGFeedItem, IGUser, NSDate, CLLocation, IGLocation;

@interface IGFeedItemHeaderViewModel : NSObject {

	char _showSponsoredPostIcon;
	char _editing;
	NSString* _sponsoredPostLabel;
	IGFeedItem* _feedItem;
	IGUser* _user;
	NSDate* _takenAt;
	NSString* _primaryName;
	NSDate* _expiringAt;
	CLLocation* _mediaCoord;
	int _accessoryViewType;
	NSString* _customizableButtonTitle;
	IGLocation* _location;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                           //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) char editing;                                    //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) IGUser * user;                                     //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSDate * takenAt;                                  //@synthesize takenAt=_takenAt - In the implementation block
@property (nonatomic,retain) NSString * primaryName;                            //@synthesize primaryName=_primaryName - In the implementation block
@property (nonatomic,readonly) char canShowExpiringIcon; 
@property (nonatomic,retain) NSDate * expiringAt;                               //@synthesize expiringAt=_expiringAt - In the implementation block
@property (nonatomic,retain) CLLocation * mediaCoord;                           //@synthesize mediaCoord=_mediaCoord - In the implementation block
@property (nonatomic,readonly) NSString * locationName; 
@property (nonatomic,readonly) char showSponsoredPostIcon;                      //@synthesize showSponsoredPostIcon=_showSponsoredPostIcon - In the implementation block
@property (nonatomic,readonly) NSString * sponsoredPostLabel;                   //@synthesize sponsoredPostLabel=_sponsoredPostLabel - In the implementation block
@property (nonatomic,readonly) int accessoryViewType;                           //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (nonatomic,readonly) NSString * customizableButtonTitle;              //@synthesize customizableButtonTitle=_customizableButtonTitle - In the implementation block
@property (nonatomic,retain) IGLocation * location;                             //@synthesize location=_location - In the implementation block
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 configuration:(id)arg2 ;
-(NSDate *)expiringAt;
-(CLLocation *)mediaCoord;
-(id)initWithUser:(id)arg1 location:(id)arg2 takenAt:(id)arg3 expiringAt:(id)arg4 mediaCoord:(id)arg5 editing:(char)arg6 ;
-(char)canShowExpiringIcon;
-(char)showSponsoredPostIcon;
-(NSString *)sponsoredPostLabel;
-(NSDate *)takenAt;
-(void)setTakenAt:(NSDate *)arg1 ;
-(void)setExpiringAt:(NSDate *)arg1 ;
-(void)setMediaCoord:(CLLocation *)arg1 ;
-(int)accessoryViewType;
-(NSString *)customizableButtonTitle;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(NSString *)primaryName;
-(char)editing;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(void)setPrimaryName:(NSString *)arg1 ;
-(char)hasUserLocation;
-(char)hasLocation;
-(NSString *)locationName;
@end

