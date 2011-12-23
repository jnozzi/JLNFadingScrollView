//
//  JLNFadingScrollView.h
//  JLNFadingScrollView
//
//  Created by Joshua Nozzi on 12/23/11.
//  Copyright (c) 2011 Joshua Nozzi. All rights reserved.
//


#import <AppKit/AppKit.h>


@class JLNFadeView;


@interface JLNFadingScrollView : NSScrollView
{
	
	JLNFadeView *						_topFadeView;
	JLNFadeView *						_bottomFadeView;
	CGFloat								_fadeHeight;
	NSColor *							_fadeColor;
	
}


- (CGFloat)fadeHeight;
- (void)setFadeHeight:(CGFloat)newHeight;

- (NSColor *)fadeColor;
- (void)setFadeColor:(NSColor *)newColor;

- (void)tileFadeViews;


@end



#pragma mark -

@interface JLNFadeView : NSView
{
	BOOL								_topDown;
	NSGradient *						_fadient;
	NSColor *							_fadeColor;
}

- (NSColor *)fadeColor;
- (void)setFadeColor:(NSColor *)newColor;

@property (assign) BOOL topDown;


@end
