/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "RCTPlatform.h"

#import <AppKit/AppKit.h>

#import "RCTUtils.h"
#import "RCTVersion.h"

//static NSString *interfaceIdiom(UIUserInterfaceIdiom idiom) {
//  switch(idiom) {
//    case UIUserInterfaceIdiomPhone:
//      return @"phone";
//    case UIUserInterfaceIdiomPad:
//      return @"pad";
//    case UIUserInterfaceIdiomTV:
//      return @"tv";
//    case UIUserInterfaceIdiomCarPlay:
//      return @"carplay";
//    default:
//      return @"unknown";
//  }
//}

@implementation RCTPlatform

RCT_EXPORT_MODULE(PlatformConstants)

+ (BOOL)requiresMainQueueSetup
{
  return YES;
}

- (NSDictionary<NSString *, id> *)constantsToExport
{

  return @{
    @"forceTouchAvailable": @(RCTForceTouchAvailable()),
    @"osVersion": [[NSProcessInfo processInfo] operatingSystemVersionString],
    @"systemName": [[NSProcessInfo processInfo] operatingSystemVersionString],
    @"interfaceIdiom": @"macos",
    @"isTesting": @(RCTRunningInTestEnvironment()),
    @"reactNativeVersion": RCT_REACT_NATIVE_VERSION,
  };
}

@end
