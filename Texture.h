// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

/// Wrapper for a \c UIImage.
@protocol Texture <NSObject>

/// Create a texture to wrap \c image.
- initWithImage:(UIImage *)image;

/// Returns a serializable key that uniquely identifies the image.
- (NSString *)key;

/// The underlying image.
@property (readonly, nonatomic) UIImage *image;

@end

NS_ASSUME_NONNULL_END
