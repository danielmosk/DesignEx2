// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

@protocol Operation <NSObject>

/// Performs the operation on \c images. If the arity of the operation
/// is greater than the number of images, the operation returns \c nil.
/// If the arity \c k is smaller than the number of images, the operation
/// is performed on the first \c k elements of \c images.
- (void)performOnImages:(NSArray <UIImage *> *)images;

@optional

/// Performs the inverse operation on \c images, behaving the same way
/// as \c performOnImages: when the arity of the operation is different
/// from the count of \c images.
-(void)performInverseOnImages:(NSArray <UIImage *> *)images;

@end

NS_ASSUME_NONNULL_END
