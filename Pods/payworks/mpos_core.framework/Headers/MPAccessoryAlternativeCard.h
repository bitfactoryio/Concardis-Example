//
//  MPAccessoryAlternativeCard.h
//  mpos_core
//
//  Created by Aleix Guri on 17.09.19.
//  Copyright © 2019 payworks GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPAccessoryCardProcessingModule.h"

@class MPMagstripeInformation;

@interface MPAccessoryAlternativeCard : NSObject
/**
 * Wrapper for active card.
 * @since 2.36.0
 */
@property (nonatomic, assign) MPAccessoryCardProcessingCardType cardType;

/**
 * Wrapper for active card.
 * @since 2.36.0
 */
@property (nonatomic, strong, nullable)  MPMagstripeInformation *magstripe;

/**
 * Wrapper for active cards.
 * @since 2.36.0
 */
@property (nonatomic, assign) BOOL isFallback;

- (instancetype _Nonnull)initWithcardType:(MPAccessoryCardProcessingCardType)cardType
                                magStripe:(MPMagstripeInformation *_Nullable)magstripe
                               isFallback:(BOOL)isFallback;

@end

@interface MPAccessoryAlternativeCard (helpers)

/**
 * Wrapper for active card.
 * Use this to initialize a MPAccessoryCardProcessingCardTypeEMV with default false fallback
 * returns a MPAccessoryAlternativeCard with MPAccessoryCardProcessingCardTypeEMV information
 * @since 2.36.0
 */
+ (instancetype _Nonnull)emv;

/**
 * Wrapper for active card.
 * Use this to initialize a MPAccessoryCardProcessingCardTypeMagstripe with default false fallback
 * pass a MPMagstripeInformation to fully initialize the MPAccessoryAlternativeCard
 * returns a MPAccessoryAlternativeCard instance with Magstripe information
 * @since 2.36.0
 */
+ (instancetype _Nonnull)magneticStripe:(MPMagstripeInformation *_Nullable)magstripe;
    


/**
 call this method to enable the fallback flack.
 */
- (void)markAsFallback;

@end
