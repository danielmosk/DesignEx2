// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <Session.h>
#import <Texture.h>

NS_ASSUME_NONNULL_BEGIN

/// A session consisting of a sequence of operations on a given image.
@interface ImageSession : NSObject <Session>

/// Initialize the session with \c image.
- (instancetype)initWithImage:(UIImage *)image;

/// Adds \c texture with key \c key. If saving is successful then \c YES is returned, otherwise
/// \c NO is returned.
- (BOOL)addTexture:(Texture *)texture withKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
