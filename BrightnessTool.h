// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich & Neria Saada.

#import "Tool.h"

NS_ASSUME_NONNULL_BEGIN

@interface BrightnessTool : NSObject <Tool>

/// Brightness value to set the image to.
@property (strong, nonatomic) NSNumber *value;

@end

NS_ASSUME_NONNULL_END
