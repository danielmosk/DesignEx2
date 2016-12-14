// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

#import "Texture.h"

@protocol Tool <NSObject>

/// Applies itself to a \c Texture and returns the result.
- (Texture *)performOnTexture:(Texture *)texture;

/// Returns a unique identifier for the \c Tool.
- (NSString *)key;

@optional

/// Applies its inverse operation to a \c Texture and returns the result.
- (Texture *)performInverseOnTexture:(Texture *)texture;

@end

NS_ASSUME_NONNULL_END
