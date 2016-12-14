// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich and Neria Saada.

#import "Operation.h"

#import "Tool.h"

NS_ASSUME_NONNULL_BEGIN

/// An operation representing use of an active \c Tool.
@interface UpdateOperation : NSObject <Operation>

/// Create the operation by generating a key uniquely identifying the active \c Tool.
- (instancetype)initWithTool:(id<Tool>)tool;

@end

NS_ASSUME_NONNULL_END
