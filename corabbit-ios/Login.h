//
//  Login.h
//  corabbit-ios
//
//  Created by Caven Cade Mitchell on 2/23/15.
//  Copyright (c) 2015 Caven Cade Mitchell. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Login : NSObject

@property NSString *email;
@property NSString *password;
@property BOOL success;
@property NSData *session;

@end
