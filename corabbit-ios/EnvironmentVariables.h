//
//  EnvironmentVariables.h
//  corabbit-ios
//
//  Created by Caven Cade Mitchell on 2/24/15.
//  Copyright (c) 2015 Caven Cade Mitchell. All rights reserved.
//

#import <Foundation/Foundation.h>

#define APP_NAME                        @"corabbit"
#define VERSIONS_URL        APP_URL     @"versions/mac.json"
#define FORGOT_PASSWORD_URL APP_URL     @"forgot_password"
#define SIGN_UP_URL         APP_URL     @"register"
#define API_PATH            APP_URL     @"api/"
#define AUTHORIZE_URL       API_PATH    @"authorize"
#define UNAUTHORIZE_URL     API_PATH    @"authorize/clear"
#define NETWORKS_URL        API_PATH    @"networks/"
#define GROUPS_URL          API_PATH    @"groups"
#define FETCH_DIR_URL       API_PATH    @"contents/fetch"
#define DOWNLOAD_URL        API_PATH    @"files/download"
#define UPLOAD_FILE_URL     API_PATH    @"files/upload"
#define USER_PROFILE_URL    API_PATH    @"users/view"
#define REMOVE_FILE_URL     API_PATH    @"files/delete"
#define RENAME_FILE_URL     API_PATH    @"files/rename"
#define MOVE_FILE_URL       API_PATH    @"files/move"
#define CREATE_FOLDER_URL   API_PATH    @"folders/create"
#define RENAME_FOLDER_URL   API_PATH    @"folders/rename"
#define MOVE_FOLDER_URL     API_PATH    @"folders/move"
#define REMOVE_FOLDER_URL   API_PATH    @"folders/delete"
#define CHANGELOG           API_PATH    @"changelogs?"
#define AVATAR_URL          API_PATH    @"avatar"
#define MY_WORKSPACE_URL    TEAM_URL    @"view/"
#define WORKSPACE_ID_URL                @"network_id="
#define GROUP_ID_URL                    @"&group_id="
#define CHANGELOG_ID_URL                @"&id="

//#ifdef DEBUG
    #define APP_URL                     @"http://corabbit/"
    #define APP_ID                      @"525796ab47af7965120041a7" // local
    #define APP_SECRET                  @"c9f45f2ebbfd6e35f13e" // local
//#else
//    #define APP_URL                     @"https://staging.corabbit.com/"
//    #define APP_ID                      @"53829dee4af846aa1c7d2abd" // production/staging
//    #define APP_SECRET                  @"81e88666b0d4ddbb48a3" // production/staging
//#endif

// User Default Preferences
#define APP_TOKEN                       @"token"
#define APP_TOKENTYPE                   @"bearer"
#define APP_REFRESHTOKEN                @"refreshToken"
#define APP_EXPIRESIN                   @"3600"
#define USER_WORKSPACELIST              @"workspacelist"
#define WORKSPACE_ID                    @"XXXXX"
#define GROUP_ID                        @"XXXXX"
#define HOME_DIR                        @"XXXXX"
#define DATABASE_DIR                    @"XXXXX"

// OS Preferences
#define ENVIRONMENT_VAR \ [Environment sharedVariables];

// Default Folder Titles
#define USER_NAME                       @"Personal"
#define WORKSPACES_NAME                 @"Teams"


@interface EnvironmentVariables : NSObject

@end
