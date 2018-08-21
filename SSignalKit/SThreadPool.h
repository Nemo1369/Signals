#import <Foundation/Foundation.h>

#import <SSignalKit/SThreadPoolTask.h>
#import <SSignalKit/SThreadPoolQueue.h>

@interface SThreadPool : NSObject

- (instancetype)initWithThreadCount:(NSUInteger)threadCount threadPriority:(double)threadPriority NS_DESIGNATED_INITIALIZER;

- (void)addTask:(SThreadPoolTask *)task;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) SThreadPoolQueue *nextQueue;

- (void)_workOnQueue:(SThreadPoolQueue *)queue block:(void (^)(void))block;

@end
