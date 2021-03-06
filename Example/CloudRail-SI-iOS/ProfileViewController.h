//
//  ProfileViewController.h
//  CloudRail_ServiceCode
//
//  Created by Felipe Cesar on 31/05/16.
//  Copyright © 2016 CloudRail. All rights reserved.
//

//#import "ViewController.h"
#import <CloudRail_ServiceCode/CloudRail_ServiceCode.h>
@interface ProfileViewController : UIViewController
@property (nonatomic) NSString * serviceName;

@property (nonatomic) NSString * clientId;
@property (nonatomic) NSString * clientSecret;
@property (nonatomic) id<ProfileProtocol> service;
@end
