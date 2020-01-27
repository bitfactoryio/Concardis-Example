//
//  MPIngenicoPaymentAccessoryWrapper.h
//  mpos.accessories.ingenico
//
//  Created by Leonid Popescu on 18.04.18.
//  Copyright © 2018 payworks. All rights reserved.
//

#import "MPPaymentAccessory.h"

@interface MPIngenicoPaymentAccessoryWrapper : MPPaymentAccessory

+ (void)runSyncOnMainThread:(void (^)(void))block;

@end
