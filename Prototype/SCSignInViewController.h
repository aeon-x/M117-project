//
//  SCSignInViewController.h
//  Prototype
//
//  Created by Cao Qian on 10/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCSignInViewControllerDelegate <NSObject>

- (void)loginSuccess;

@end

@interface SCSignInViewController : UIViewController

@property (nonatomic, weak) id<SCSignInViewControllerDelegate> delegate;
@end
