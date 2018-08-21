#import <Foundation/Foundation.h>

@interface SThreadPoolTask : NSObject

- (instancetype)initWithBlock:(void (^)(bool (^)(void)))block NS_DESIGNATED_INITIALIZER;

- (void)execute;

- (void)cancel;

@end
