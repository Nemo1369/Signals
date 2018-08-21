#import <Foundation/Foundation.h>

@interface SAtomic : NSObject

- (instancetype)initWithValue:(id)value NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithValue:(id)value recursive:(bool)recursive NS_DESIGNATED_INITIALIZER;

- (id)swap:(id)newValue;

@property(NS_NONATOMIC_IOSONLY, readonly, strong) id value;

- (id)modify:(id (^)(id))f;

- (id)with:(id (^)(id))f;

@end
