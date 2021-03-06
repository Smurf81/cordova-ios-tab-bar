/*
 TabBar.h

 Created by Jesse MacFadyen on 10-02-03.
 MIT Licensed

 Originally this code was developed my Michael Nachbaur
 Formerly -> PhoneGap :: UIControls.h
 Created by Michael Nachbaur on 13/04/09.
 Copyright 2009 Decaf Ninja Software. All rights reserved.

 API cleaned up and improved by Andreas Sommer (https://github.com/AndiDog/phonegap-ios-tabbar-plugin).
 */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UITabBar.h>

// For older versions of Cordova, you may have to use: #import "CDVPlugin.h"
#import <Cordova/CDVPlugin.h>

@interface TabBar : CDVPlugin <UITabBarDelegate> {
	UITabBar* tabBar;

	NSMutableDictionary* tabBarItems;

    CGFloat navBarHeight;
    CGFloat tabBarHeight;

    bool tabBarAtBottom;
}

- (void)create:(CDVInvokedUrlCommand*)command;
- (void)show:(CDVInvokedUrlCommand*)command;
- (void)resize:(CDVInvokedUrlCommand*)command;
- (void)hide:(CDVInvokedUrlCommand*)command;
- (void)init:(CDVInvokedUrlCommand*)command;
- (void)showItems:(CDVInvokedUrlCommand*)command;
- (void)createItem:(CDVInvokedUrlCommand*)command;
- (void)updateItem:(CDVInvokedUrlCommand*)command;
- (void)selectItem:(CDVInvokedUrlCommand*)command;
- (void)addBadgeOnItem:(CDVInvokedUrlCommand*)command;
- (void)clearBadgeOnItem:(CDVInvokedUrlCommand*)command;


@end

@interface UITabBar (NavBarCompat)
@property (nonatomic) bool tabBarAtBottom;
@end