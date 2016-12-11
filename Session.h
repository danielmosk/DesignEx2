// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <Foundation/Foundation.h>

#import <Operation.h>
NS_ASSUME_NONNULL_BEGIN

@protocol Session <NSObject>

/// Adds an operation given by \c id<Operation> to the end of the list of operations contained
/// in the session.
- (void)addOperation:id<Operation>;

/// Outputs the current image.
- (UIImage *)currentImage;

/// Outputs the image by undoing the most recent operation on the current image. Returns
/// nil if there is no previous image.
- (nullable UIImage *)previousImage;

/// Outputs the image by performing the next operation on the current image. Returns
/// nil if there is no next image.
- (nullable UIImage *)nextImage;

@end

NS_ASSUME_NONNULL_END
