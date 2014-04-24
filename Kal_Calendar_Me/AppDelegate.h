//
//  AppDelegate.h
//  Kal_Calendar_Me
//
//  Created by Paradigm on 24/04/14.
//  Copyright (c) 2014 Paradigm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KalViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(nonatomic,strong)UINavigationController *navController;

@property(nonatomic,strong) KalViewController *kalviewControll;
@property (strong, nonatomic) UIWindow *window;

@end
