// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <Foundation/Foundation.h>

#import <Operation.h>

NS_ASSUME_NONNULL_BEGIN

/// A mutable history of \c Operation events.
@protocol Session <NSObject>

/// Appends \c operation to the end of the list of operations contained in the session.
- (void)addOperation:id<Operation> *operation;

/// Erase all data in the current session.
- (void)clearSession;

/// Outputs the next \c Operation in the session. Returns \c nil if such an \c Operation
/// does not exist.
- (nullable id<Operation> *)nextOperation;

/// Outputs the previous \c Operation in the session. Returns \c nil if such an \c Operation
/// does not exist.
- (nullable id<Operation> *)previousOperation;

@end

NS_ASSUME_NONNULL_END
