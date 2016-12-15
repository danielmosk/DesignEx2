// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

#include "Operation.h"

/// Protocol for a manager of an array of sessions, each of which contains an array of operations.
@protocol SessionManager <NSObject>

/// Appends \c operation to the end of the list of operations contained
/// in the current session or initializes a new session with that operation.
- (void)addOperation:id<Operation> *operation;

/// Loads sessions, returning \c YES if successful and \c NO otherwise.
- (BOOL)loadSessions;

/// Returns the next \c Operation of the current session or the first \c Operation of the next
/// session. Returns \c nil if such an \c Operation does not exist.
- (void)redoWithCallback:(void (^)(_Nullable id<Operation>, _Nullable NSError *))callback;;

/// Saves current sessions, returning \c YES if successful and \c NO otherwise.
- (BOOL)saveSessions;

/// Returns the previous \c Operation of the current session or the final \c Operation of the
/// previous session. Returns \c nil if such an \c Operation does not exist.
- (void)undowithCallback:(void (^)(_Nullable id<Operation>, _Nullable NSError *))callback;

@end

NS_ASSUME_NONNULL_END
