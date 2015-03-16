//
//  MainViewController.m
//  corabbit-ios
//
//  Created by Caven Cade Mitchell on 2/22/15.
//  Copyright (c) 2015 Caven Cade Mitchell. All rights reserved.
//

#import "MainViewController.h"
#import "LoginViewController.h"
#import "Login.h"

@interface MainViewController ()

@property NSData *teams;
@property NSData *projects;
@property NSData *designs;
@property NSData *user;
@property NSMutableArray *userInfo;
@property Login *session;

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.teams = [[NSData alloc] init];
    self.projects = [[NSData alloc] init];
    self.designs = [[NSData alloc] init];
    self.user = [[NSData alloc] init];
    
    self.userInfo = [[NSMutableArray alloc] initWithObjects:self.teams, self.projects, self.designs, self.user, nil];
    
    self.session = [[Login alloc] init];
    
    [self loadInitialData];
    
    
    NSString *token = [[NSString alloc] init];
    
    if (token.length < 1) {
        LoginViewController *token = [[LoginViewController alloc] init];
        
        [token unwindToLogin:NULL];
    }
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

- (IBAction)unwindToMain:(UIStoryboardSegue *)segue {
    LoginViewController *source = [segue sourceViewController];
    
    BOOL *success = true;
    
    if (success) {
        NSLog(@"unwindToMain successful");
    }
}

- (void)loadInitialData {
    Login *sessionInfo = [[Login alloc] init];
    
    sessionInfo.success = false;
    
    self.session = sessionInfo;
}


@end
