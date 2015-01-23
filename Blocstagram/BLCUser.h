//
//  BLCUser.h
//  Blocstagram
//
//  Created by ALEJANDRO REITER B on 11/21/14.
//  Copyright (c) 2014 Alejandro Reiter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCUser : NSObject

@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) UIImage *profilePicture;

 - (instancetype) initWithDictionary:(NSDictionary *)userDictionary;

@end
