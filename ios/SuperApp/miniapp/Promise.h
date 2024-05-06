//
//  Promise.h
//  SuperApp
//
//  Created by Nguyen Thinh on 06/05/2024.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>

@interface Promise: NSObject {
}

@property RCTPromiseRejectBlock reject;
@property RCTPromiseResolveBlock resolve;


- (instancetype)initWithResolve: (RCTPromiseResolveBlock)resolve reject: (RCTPromiseRejectBlock)reject;
@end
