//
//  SCHomeTableViewCell.h
//  Prototype
//
//  Created by Cao Qian on 9/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell
- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end
