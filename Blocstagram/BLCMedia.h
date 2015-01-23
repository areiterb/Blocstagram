//
//  BLCMedia.h
//  Blocstagram
//
//  Created by ALEJANDRO REITER B on 11/21/14.
//  Copyright (c) 2014 Alejandro Reiter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCMedia : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

 - (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;


@end
