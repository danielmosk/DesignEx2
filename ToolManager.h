// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import <Tool.h>

NS_ASSUME_NONNULL_BEGIN

/// Manages the array of active \c Tool objects in the application.
@interface ToolManager : NSObject

/// Adds \c tool to \c activeTools;
- (BOOL)activateTool:(id<Tool> *)tool;

/// Removes \c tool from \c activeTools;
- (BOOL)deactivateTool:(id<Tool> *)tool;

/// An array containing the currently active tools in the application.
@property (readonly, nonatomic) NSArray<id<Tool> *> *activeTools;

@end

NS_ASSUME_NONNULL_END
