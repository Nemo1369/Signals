#import <Foundation/Foundation.h>

@interface SBag : NSObject

- (NSInteger)addItem:(id)item;

- (void)enumerateItems:(void (^)(id))block;

- (void)removeItem:(NSInteger)key;

@property(NS_NONATOMIC_IOSONLY, getter=isEmpty, readonly) bool empty;
@property(NS_NONATOMIC_IOSONLY, readonly, copy) NSArray *copyItems;

@end
