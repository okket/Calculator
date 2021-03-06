//
//  CalculatorAppDelegate.h
//  Calculator
//
//  Created by Okke Timm on 08.05.11.
//  Copyright 2011 Okke Timm. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CalculatorViewController;

@interface CalculatorAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet CalculatorViewController *viewController;

@end
