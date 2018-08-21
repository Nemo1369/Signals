#import <Foundation/Foundation.h>

@class SSignal;

@interface SVariable : NSObject

- (instancetype)init;

- (void)set:(SSignal *)signal;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SSignal *signal;

@end
