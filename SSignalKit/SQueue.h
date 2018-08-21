#import <Foundation/Foundation.h>

@interface SQueue : NSObject

+ (SQueue *)mainQueue;

+ (SQueue *)concurrentDefaultQueue;

+ (SQueue *)concurrentBackgroundQueue;

+ (SQueue *)wrapConcurrentNativeQueue:(dispatch_queue_t)nativeQueue;

- (void)dispatch:(dispatch_block_t)block;

- (void)dispatchSync:(dispatch_block_t)block;

- (void)dispatch:(dispatch_block_t)block synchronous:(bool)synchronous;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) dispatch_queue_t _dispatch_queue;

@property(NS_NONATOMIC_IOSONLY, getter=isCurrentQueue, readonly) bool currentQueue;

@end
