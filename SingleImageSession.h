// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <Foundation/Foundation.h>

#import <Session.h>

NS_ASSUME_NONNULL_BEGIN

/// A session consisting of a sequence of operations on a given image.
@interface ImageSession : NSObject <Session>

/// Initialize the session with \c image.
- (instancetype)initWithImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
