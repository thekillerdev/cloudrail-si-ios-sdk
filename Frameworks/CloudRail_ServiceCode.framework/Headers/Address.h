//
//  Address.h
//  CloudRail_ServiceCode
//
//  Created by Felipe Cesar on 27/05/16.
//  Copyright © 2016 CloudRail. All rights reserved.
//

#import <CloudRail_ServiceCode/CloudRail_ServiceCode.h>

@interface Address : SandboxObject

@property (nonatomic) NSString * country;
@property (nonatomic) NSString * city;
@property (nonatomic) NSString * state;
@property (nonatomic) NSString * line1;
@property (nonatomic) NSString * line2;
@property (nonatomic) NSString * postalCode;



@end
