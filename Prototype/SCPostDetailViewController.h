//
//  SCPostDetailViewController.h
//  Prototype
//
//  Created by Cao Qian on 10/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
