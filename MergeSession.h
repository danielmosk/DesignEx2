// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <Foundation/Foundation.h>

#import <Session.h>

NS_ASSUME_NONNULL_BEGIN

/// A session consisting of a sequence of merge operations on an array of image.
@interface MergeSession : NSObject <Session>

/// Initialize the session with an array of \c images. The \c previousImage
/// function on the merge of images with indices \c i and \c j returns the image
/// with index \c min(i,j).
- (instancetype)initWithImages:(NSArray <UIImage *> *)images;

@end

NS_ASSUME_NONNULL_END
