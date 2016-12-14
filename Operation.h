// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

/// Serializable immutable representation of an operation of a \c Tool.
@protocol Operation <NSObject>

/// Returns a serializable key that uniquely identifies the operation.
- (NSString *)key;

@end

NS_ASSUME_NONNULL_END
