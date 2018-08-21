#import <SSignalKit/SSignal.h>

@interface SSignal (Mapping)

- (SSignal *)map:(id (^)(id))f;

- (SSignal *)filter:(bool (^)(id))f;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *ignoreRepeated;

@end
