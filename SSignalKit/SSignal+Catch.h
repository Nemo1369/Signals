#import <SSignalKit/SSignal.h>

@interface SSignal (Catch)

- (SSignal *)catch:(SSignal *(^)(id error))f;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *restart;

- (SSignal *)retryIf:(bool (^)(id error))predicate;

@end
