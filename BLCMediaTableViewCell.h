//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by ALEJANDRO REITER B on 12/1/14.
//  Copyright (c) 2014 Alejandro Reiter. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;
@interface BLCMediaTableViewCell : UITableViewCell
@property (nonatomic,strong) BLCMedia *mediaItem;

 + (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;

@end
