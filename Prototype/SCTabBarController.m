//
//  SCTabBarController.m
//  Prototype
//
//  Created by Cao Qian on 2/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//
#import "SCTabBarController.h"
#import "SCHomeViewController.h"
#import "SCExploreViewController.h"

@interface SCTabBarController ()

@end

@implementation SCTabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.viewControllers = [self viewControllerArray];
    self.selectedIndex = 0;
    [[self tabBar] setTintColor:[UIColor greenColor]];
}

- (NSArray <UIViewController *> *)viewControllerArray
{
    UIViewController *homeController = [self homeViewController];
    UIViewController *exploreController = [self exploreViewController];
    NSArray<UIViewController *> *array = @[homeController, exploreController];
    return array;
}

- (UIViewController *)homeViewController
{
    SCHomeViewController *homeController = [[SCHomeViewController alloc] init];
    homeController.view.backgroundColor = [UIColor whiteColor];
    homeController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Home" image:[UIImage imageNamed:@"Events"] selectedImage:[UIImage imageNamed:@"Events_selected"]];
    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:homeController];
    return navigationController;
}

- (UIViewController *)exploreViewController
{
    SCExploreViewController *exploreController = [SCExploreViewController new];
    exploreController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Explore" image:[UIImage imageNamed:@"Explore"] selectedImage:[UIImage imageNamed:@"Explore_selected"]];
    
    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:exploreController];
    return navigationController;
}

@end
