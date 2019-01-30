/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AppKit/AppKit.h>

@protocol RCTBackedTextInputDelegate;

@protocol RCTBackedTextInputViewProtocol <NSTextInput>

@property (nonatomic, copy, nullable) NSString *text;
@property (nonatomic, strong, nullable) NSColor *textColor;
@property (nonatomic, copy, nullable) NSString *placeholder;
@property (nonatomic, strong, nullable) NSColor *placeholderColor;
@property (nonatomic, assign, readonly) BOOL textWasPasted;
@property (nonatomic, strong, nullable) NSFont *font;
@property (nonatomic, assign) NSEdgeInsets textContainerInset;
@property (nonatomic, strong, nullable) NSView *inputAccessoryView;
@property (nonatomic, weak, nullable) id<RCTBackedTextInputDelegate> textInputDelegate;
@property (nonatomic, readonly) CGSize contentSize;

// This protocol disallows direct access to `selectedTextRange` property because
// unwise usage of it can break the `delegate` behavior. So, we always have to
// explicitly specify should `delegate` be notified about the change or not.
// If the change was initiated programmatically, we must NOT notify the delegate.
// If the change was a result of user actions (like typing or touches), we MUST notify the delegate.
- (void)setSelectedTextRange:(NSRange)selectedTextRange NS_UNAVAILABLE;
- (void)setSelectedTextRange:(NSRange)selectedTextRange notifyDelegate:(BOOL)notifyDelegate;

@end
