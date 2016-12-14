// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import "CreateOperation.h"

#import "Tool.h"

NS_ASSUME_NONNULL_BEGIN

/// Translates a serializable description of a \c Tool from a \c CreateOperation into that \c Tool.
@interface CreationOperationInterpreter : NSObject

/// Creates a \c tool from its key \c key inside a session.
+ (id<Tool> *)createToolFromKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
