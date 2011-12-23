//
//  AppDelegate.h
//  JLNFadingScrollView
//
//  Created by Joshua Nozzi on 12/23/11.
//  Copyright (c) 2011 Joshua Nozzi. All rights reserved.
//


#import <Cocoa/Cocoa.h>


@class JLNFadingScrollView;


@interface AppDelegate : NSObject <NSApplicationDelegate>


#pragma mark Properties

@property (assign) IBOutlet JLNFadingScrollView *scrollView;
@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSTextField *heightField;
@property (assign) IBOutlet NSStepper *heightStepper;


#pragma mark Actions

- (IBAction)setFadeHeight:(id)sender;
- (IBAction)setFadeColor:(id)sender;


@end
