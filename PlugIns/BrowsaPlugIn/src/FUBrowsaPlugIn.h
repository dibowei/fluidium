//  Copyright 2009 Todd Ditchendorf
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Fluidium/FUPlugIn.h>

extern NSString *const FUBrowsaHomeURLStringDidChangeNotification;
extern NSString *const FUBrowsaUserAgentStringDidChangeNotification;

extern NSString *const kFUBrowsaHomeURLStringKey;
extern NSString *const kFUBrowsaNewWindowsOpenWithKey;
extern NSString *const kFUBrowsaUserAgentStringKey;
extern NSString *const kFUBrowsaShowNavBarKey;
extern NSString *const kFUBrowsaSendLinksToKey;

typedef enum {
    FUBrowsaSendLinksToThisPlugIn = 0,
    FUBrowsaSendLinksToCurrentTab,
    FUBrowsaSendLinksToNewTab,
    FUBrowsaSendLinksToDefaultBrowser
} FUBrowsaSendLinksTo;

typedef enum {
    FUBrowsaShowNavBarWhenMousedOver = 0,
    FUBrowsaShowNavBarAlways,
    FUBrowsaShowNavBarNever
} FUBrowsaShowNavBar;

@interface FUBrowsaPlugIn : FUPlugIn {
    id <FUPlugInAPI>plugInAPI;

    NSString *toolbarIconImageNameNormal;
    
    NSInteger tag;
}

- (id)initWithPlugInAPI:(id <FUPlugInAPI>)api;

- (NSString *)taggedKey:(NSString *)inKey;
- (NSString *)makeLocalizedTitle;

- (void)postBrowsaUserAgentStringDidChangeNotification;

@property (nonatomic, readonly, retain) id <FUPlugInAPI>plugInAPI;

// Prefs
@property (nonatomic, copy) NSString *homeURLString;
@property (nonatomic) NSInteger newWindowsOpenWith;
@property (nonatomic, copy) NSString *userAgentString;
@property (nonatomic) NSInteger showNavBar;
@property (nonatomic) NSInteger sendLinksTo;
@end
