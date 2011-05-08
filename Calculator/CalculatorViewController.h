//
//  CalculatorViewController.h
//  Calculator
//
//  Created by Okke Timm on 08.05.11.
//  Copyright 2011 Okke Timm. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CalculatorBrain.h"

@interface CalculatorViewController : UIViewController
{
    CalculatorBrain * brain;
    IBOutlet UILabel * display;
}

- (IBAction)digitPressed:(UIButton *)sender;
- (IBAction)operationPressed:(UIButton *)sender;

@end
