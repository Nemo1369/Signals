#import <SSignalKit/SSignalKit.h>

@interface SSignal (Take)

- (SSignal *)take:(NSUInteger)count;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *takeLast;

- (SSignal *)takeUntilReplacement:(SSignal *)replacement;

@end
