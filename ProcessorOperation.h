// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Daniel Moskovich and Neria Saada.

#import "Operation.h"

#import "Processor.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProcessorOperation : NSObject <Operation>

- (instancetype)initWIthProcessor:Processor *processor
                       withValues:OperationParameters *values;

@property (readonly, nonatomic) Processor *processor;
@property (readonly, nonatomic) OperationParameters *values;

@end

NS_ASSUME_NONNULL_END
