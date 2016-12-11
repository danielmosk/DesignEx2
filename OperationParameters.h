// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich and Neria Saada.

NS_ASSUME_NONNULL_BEGIN

@interface OperationParameters : NSObject

@property (strong, nonatomic) NSArray<NSNumber *> *uniforms;

@property (strong, nonatomic) NSArray<UIImage *>  *textures;

@end

NS_ASSUME_NONNULL_END
