// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#include "Session.h"
NS_ASSUME_NONNULL_BEGIN

/// Object responsible for a file system where arrays of sessions are stored
/// and retrieved with \c key \c NSString objects.
@interface SessionStorage : NSObject

/// Saves array of sessions \c sessions with key \c key. If saving is
/// successful then \c YES is returned, otherwise \c NO is returned.
- (BOOL)saveSessions:(NSArray<id<Session> *> *)sessions
              atStep:(NSUInteger)step withKey:(NSString *)key;

/// Deletes saved sessions with key \c key. If deleting is
/// successful then \c YES is returned, otherwise \c NO is returned.
- (BOOL)deleteSessions:(NSString *)key

/// Returns sessions with key \c key, and \c nil if it is unsuccessful.
- (nullable NSArray<id<Session> *> *)loadSessions:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
