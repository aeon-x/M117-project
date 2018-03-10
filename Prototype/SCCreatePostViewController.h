//
//  SCCreatePostViewController.h
//  Prototype
//
//  Created by Cao Qian on 10/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end
