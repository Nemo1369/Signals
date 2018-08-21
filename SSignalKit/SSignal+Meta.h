#import <SSignalKit/SSignal.h>

@class SQueue;

@interface SSignal (Meta)

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *switchToLatest;

- (SSignal *)mapToSignal:(SSignal *(^)(id))f;

- (SSignal *)mapToQueue:(SSignal *(^)(id))f;

- (SSignal *)mapToThrottled:(SSignal *(^)(id))f;

- (SSignal *)then:(SSignal *)signal;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *queue;
@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *throttled;

+ (SSignal *)defer:(SSignal *(^)(void))generator;

@end

@interface SSignalQueue : NSObject

- (SSignal *)enqueue:(SSignal *)signal;

@end
