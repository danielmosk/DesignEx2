// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <SessionManager.h>

#import <SessionStorage.h>

NS_ASSUME_NONNULL_BEGIN

/// Class responsible for creating, storing, and loading sessions operating on textures.
@interface ImageSessionManager : NSObject <SessionManager>

/// Initialize with the initial image \c image. Sessions are loaded and saved using \c storage.
- (instancetype)initWithImage:(UIImage *)image
           withSessionStorage:(SessionStorage *)storage;

@end

NS_ASSUME_NONNULL_END
