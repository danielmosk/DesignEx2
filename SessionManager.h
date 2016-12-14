// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

/// States of an operation.
typedef NS_ENUM(NSUInteger, OperationState) {
  Create = 0,
  Update = 1,
  Finish = 2,
  OperationStateCount,
};

#include "Feature.h"

/// Protocol for a manager of an array of sessions, each of which contains an array of operations.
@protocol SessionManager <NSObject>

/// Returns the next \c Tool of the current session or the first \c Tool of the next session.
/// Returns \c nil if such a \c Tool does not exist, or if the operation is to be updated or
/// destroyed, as determined by the \c OperationState field.
- (void)redoWithCallback:(void (^)(_Nullable id<Tool>, _Nullable OperationState,
    _Nullable NSError *))callback;;

/// Returns the previous \c Tool of the current session or the final \c Tool of the last session.
/// Returns \c nil if such a \c Tool does not exist.
- (void)undowithCallback:(void (^)(_Nullable id<Tool>, _Nullable OperationState,
    _Nullable NSError *))callback;;

@end

NS_ASSUME_NONNULL_END
