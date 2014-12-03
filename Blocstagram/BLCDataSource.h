//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by ALEJANDRO REITER B on 11/21/14.
//  Copyright (c) 2014 Alejandro Reiter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCDataSource : NSObject

+(instancetype) sharedInstance;
 @property (nonatomic, strong, readonly) NSArray *mediaItems;
- (void) removeMediaItemAtIndex:(NSUInteger)index;
- (void) addOneMediaItem;

@end
