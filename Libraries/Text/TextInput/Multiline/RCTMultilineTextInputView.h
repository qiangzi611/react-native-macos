/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AppKit/AppKit.h>

#import <React/RCTView.h>
#import <React/NSView+React.h>

#import "RCTBaseTextInputView.h"

@class RCTBridge;

@interface RCTMultilineTextInputView : RCTBaseTextInputView

//@property (nonatomic, assign) BOOL blurOnSubmit;
//@property (nonatomic, assign) BOOL clearTextOnFocus;
//@property (nonatomic, assign) BOOL selectTextOnFocus;
@property (nonatomic, assign) NSEdgeInsets contentInset;
@property (nonatomic, assign) BOOL automaticallyAdjustContentInsets;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) NSColor *placeholderTextColor;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, strong) NSFont *font;
// @property (nonatomic, assign) NSInteger mostRecentEventCount;
@property (nonatomic, strong) NSNumber *maxLength;

@property (nonatomic, copy) RCTDirectEventBlock onChange;
@property (nonatomic, copy) RCTDirectEventBlock onTextInput;
@property (nonatomic, copy) RCTDirectEventBlock onScroll;

- (void)performTextUpdate;

@end
