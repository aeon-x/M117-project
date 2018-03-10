//
//  SCHomeViewController.h
//  Prototype
//
//  Created by Cao Qian on 2/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;


@end

