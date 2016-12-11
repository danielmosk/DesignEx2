// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

NS_ASSUME_NONNULL_BEGIN

@protocol SessionManager <NSObject>

- (void)redo;

- (void)undo;

@end

NS_ASSUME_NONNULL_END
