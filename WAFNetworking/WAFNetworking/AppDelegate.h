//
//  AppDelegate.h
//  WAFNetworking
//
//  Created by wupeige on 2017/5/25.
//  Copyright © 2017年 WPG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

