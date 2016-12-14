// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich and Neria Saada.

#import "Operation.h"

#import "Tool.h"

NS_ASSUME_NONNULL_BEGIN

/// An operation representing conclusion of use of a \c Tool.
@interface FinishingOperation : NSObject <Operation>

/// Create the operation by generating a key uniquely identifying the deactivated \c Tool.
- (instancetype)initWithTool:(id<Tool>)tool;

NS_ASSUME_NONNULL_END
