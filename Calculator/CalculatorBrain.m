//
//  CalculatorBrain.m
//  Calculator
//
//  Created by Okke Timm on 08.05.11.
//  Copyright 2011 Okke Timm. All rights reserved.
//

#import "CalculatorBrain.h"

@implementation CalculatorBrain

@synthesize operand;
@synthesize waitingOperation;
@synthesize waitingOperand;

- (void)performWaitingOperation
{
    if ([waitingOperation isEqual:@"+"]) {
        operand = waitingOperand + operand;
    } else if ([waitingOperation isEqual:@"-"]) {
        operand = waitingOperand - operand;
    } else if ([waitingOperation isEqual:@"*"]) {
        operand = waitingOperand * operand;
    } else if ([waitingOperation isEqual:@"/"]) {
        if (operand) {
            operand = waitingOperand / operand;
        }
    }
}

- (double)performOperation:(NSString *)operation
{
    if ([operation isEqual:@"sqrt"]) {
        operand = sqrt(operand);
    } else {
        [self performWaitingOperation];
        waitingOperation = operation;
        waitingOperand = operand;
    }
    return operand;
}

@end
