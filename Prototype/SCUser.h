//
//  SCUser.h
//  Prototype
//
//  Created by Cao Qian on 2/3/18.
//  Copyright © 2018 Cao Qian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *token;

- (instancetype)initWithUsername:(NSString *)username andPassword:(NSString *)password;

@end