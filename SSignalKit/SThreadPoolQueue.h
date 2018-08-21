#import <Foundation/Foundation.h>

@class SThreadPool;
@class SThreadPoolTask;

@interface SThreadPoolQueue : NSObject

- (instancetype)initWithThreadPool:(SThreadPool *)threadPool NS_DESIGNATED_INITIALIZER;

- (void)addTask:(SThreadPoolTask *)task;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SThreadPoolTask *_popFirstTask;
@property(NS_NONATOMIC_IOSONLY, readonly) bool _hasTasks;

@end
