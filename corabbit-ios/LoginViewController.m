//
//  LoginViewController.m
//  corabbit-ios
//
//  Created by Caven Cade Mitchell on 2/22/15.
//  Copyright (c) 2015 Caven Cade Mitchell. All rights reserved.
//

#import "LoginViewController.h"
#import "Login.h"
#import "MainViewController.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)unwindToLogin:(UIStoryboardSegue *)segue {
    MainViewController *source = [segue sourceViewController];
    Login *user;
    
    user.email = @"";
    user.password = @"";
    user.session = NULL;
}


@end
