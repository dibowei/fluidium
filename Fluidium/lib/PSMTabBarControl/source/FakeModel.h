//
//  FakeModel.h
//  TabBarControl
//
//  Created by John Pannell on 12/19/05.
//  Copyright 2005 Positive Spin Media. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface FakeModel : NSObject {
    BOOL                    _isProcessing;
    NSImage                 *_icon;
    NSString                *_iconName;
    int                     _objectCount;
    BOOL                    _isEdited;
}

// creation/destruction
- (id)init;

// accessors
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)value;
- (NSImage *)icon;
- (void)setIcon:(NSImage *)icon;
- (NSString *)iconName;
- (void)setIconName:(NSString *)iconName;
- (int)objectCount;
- (void)setObjectCount:(int)value;
- (BOOL)isEdited;
- (void)setIsEdited:(BOOL)value;

@end
