//
//  OverflowTestMacAppDelegate.h
//  OverflowTestMac
//
//  Created by Robbie Hanson on 5/10/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface OverflowTestMacAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *__unsafe_unretained window;
}

@property (unsafe_unretained) IBOutlet NSWindow *window;

@end
