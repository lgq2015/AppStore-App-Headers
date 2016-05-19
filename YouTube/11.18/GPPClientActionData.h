/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:49:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/FFD4619E-59E7-49B9-AD90-0E28F5807C56/YouTube.app/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSFastEnumeration;
@class GPPClientAclDetails, GPPClientLoggedRHSComponent, NSObject;

@interface GPPClientActionData : NSObject {

	GPPClientAclDetails* _aclDetails;
	GPPClientLoggedRHSComponent* _rhsComponent;
	NSObject*<NSFastEnumeration> _circles;
	NSObject*<NSFastEnumeration> _circleMembers;

}

@property (nonatomic,retain) GPPClientAclDetails * aclDetails;                        //@synthesize aclDetails=_aclDetails - In the implementation block
@property (nonatomic,retain) GPPClientLoggedRHSComponent * rhsComponent;              //@synthesize rhsComponent=_rhsComponent - In the implementation block
@property (nonatomic,retain) NSObject*<NSFastEnumeration> circles;                    //@synthesize circles=_circles - In the implementation block
@property (nonatomic,retain) NSObject*<NSFastEnumeration> circleMembers;              //@synthesize circleMembers=_circleMembers - In the implementation block
-(NSObject*<NSFastEnumeration>)circles;
-(void)setAclDetails:(GPPClientAclDetails *)arg1 ;
-(void)setRhsComponent:(GPPClientLoggedRHSComponent *)arg1 ;
-(GPPClientAclDetails *)aclDetails;
-(GPPClientLoggedRHSComponent *)rhsComponent;
-(NSObject*<NSFastEnumeration>)circleMembers;
-(void)setCircles:(NSObject*<NSFastEnumeration>)arg1 ;
-(void)setCircleMembers:(NSObject*<NSFastEnumeration>)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

