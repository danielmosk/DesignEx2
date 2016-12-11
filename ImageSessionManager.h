// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <SessionManager.h>

#import <SessionStorage.h>

NS_ASSUME_NONNULL_BEGIN

@interface ImageSessionManager : NSObject <SessionManager>

- (instancetype)initWithImages:(NSArray <UIImage *> *)images
            withSessionStorage:(SessionStorage *)storage;

- (UIImage *)currentImage;

@end

NS_ASSUME_NONNULL_END
