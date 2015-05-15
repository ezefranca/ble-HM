//
//  BLEDeviceViewController.h
//  HMSoft
//
//  Created by HMSofts on 7/13/12.
//  Copyright (c) 2012 jnhuamao.cn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLEViewController;

@interface BLEAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) BLEViewController *bleViewController;
@property (strong, nonatomic) UINavigationController *navController;

@end
