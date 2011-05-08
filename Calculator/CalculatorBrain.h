//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Okke Timm on 08.05.11.
//  Copyright 2011 Okke Timm. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CalculatorBrain : NSObject 
{
    double operand;
}

- (void)setOperand:(double)anOperand;
- (double)performOperation:(NSString *)operation;

@end
