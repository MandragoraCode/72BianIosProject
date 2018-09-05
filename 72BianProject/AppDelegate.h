//
//  AppDelegate.h
//  72BianProject
//
//  Created by Mandragora on 2018/8/31.
//  Copyright © 2018年 Mandragora. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HTTPServer;
@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
        HTTPServer *httpServer;
}
@property (strong, nonatomic) UIWindow *window;


@end

