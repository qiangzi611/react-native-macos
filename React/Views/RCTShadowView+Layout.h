/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AppKit/AppKit.h>

#import <React/RCTShadowView.h>

/**
 * Converts float values between Yoga and CoreGraphics representations,
 * especially in terms of edge cases.
 */
RCT_EXTERN float RCTYogaFloatFromCoreGraphicsFloat(CGFloat value);
RCT_EXTERN CGFloat RCTCoreGraphicsFloatFromYogaFloat(float value);

@interface RCTShadowView (Layout)

#pragma mark - Computed Layout-Inferred Metrics

@property (nonatomic, readonly) NSEdgeInsets paddingAsInsets;
@property (nonatomic, readonly) NSEdgeInsets borderAsInsets;
@property (nonatomic, readonly) NSEdgeInsets compoundInsets;
@property (nonatomic, readonly) CGSize availableSize;

#pragma mark - Measuring

/**
 * Measures shadow view without side-effects.
 */
- (CGSize)sizeThatFitsMinimumSize:(CGSize)minimumSize maximumSize:(CGSize)maximumSize;

#pragma mark - Dirty Propagation Control

/**
 * Designated method to control dirty propagation mechanism.
 * Dirties the shadow view (and all affected shadow views, usually a superview)
 * in terms of layout.
 * The default implementaion does nothing.
 */
- (void)dirtyLayout;

/**
 * Designated method to control dirty propagation mechanism.
 * Clears (makes not dirty) the shadow view.
 * The default implementaion does nothing.
 */
- (void)clearLayout;

@end
