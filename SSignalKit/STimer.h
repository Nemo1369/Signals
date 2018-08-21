#import <Foundation/Foundation.h>

@class SQueue;

@interface STimer : NSObject

- (instancetype)initWithTimeout:(NSTimeInterval)timeout repeat:(bool)repeat completion:(dispatch_block_t)completion queue:(SQueue *)queue;

- (instancetype)initWithTimeout:(NSTimeInterval)timeout repeat:(bool)repeat completion:(dispatch_block_t)completion nativeQueue:(dispatch_queue_t)nativeQueue NS_DESIGNATED_INITIALIZER;

- (void)start;

- (void)invalidate;

- (void)fireAndInvalidate;

@end
