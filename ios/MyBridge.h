//
//  MyBridge.h
//  reanimated69
//
//  Created by Adrian Hartanto on 23/08/22.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyBridge : NSObject <RCTBridgeDelegate>

+ (instancetype)sharedInstance;

@property (nonatomic, strong) RCTBridge *bridge;

@end

NS_ASSUME_NONNULL_END
