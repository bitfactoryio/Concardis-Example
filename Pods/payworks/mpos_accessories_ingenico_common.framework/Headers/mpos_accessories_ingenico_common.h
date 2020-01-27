#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPINGMposErrorType, MPINGMposErrorSource, MPINGKotlinEnum, MPINGLogLevel, MPINGLocale, MPINGHexString, MPINGLocalizationPrompt, NSDate, MPINGDate, MPINGKotlinByteArray, MPINGApduCommand, MPINGAccessoryFamily, MPINGAccessoryState, MPINGIngenicoDisplayModule, MPINGIngenicoSystemModule, MPINGIngenicoCardProcessingModule, MPINGAccessoryConnectionState, MPINGResponseCode, MPINGKotlinPair, MPINGTlvItem, MPINGEmvDolSerialization, MPINGDefaultDolRegistry, MPINGAccessoryCardProcessingModuleActiveInterface, MPINGAccessoryCardProcessingModuleOptOut, MPINGAccessoryCardProcessingModuleCardType, MPINGAccessoryCardProcessingModuleCancelReason, MPINGTransactionInfo, MPINGPaymentData, MPINGAccessoryCardProcessingModuleStartTransactionResult, MPINGAmount, MPINGAccessoryCardProcessingModulePinCancelReason, MPINGOnlineResponseData, MPINGAccessorySystemModuleAccessoryInfo, MPINGImage, MPINGTransactionInfoType, MPINGPaymentDataActiveInterface, MPINGCardholderVerification, MPINGEmvPosEntryModeEntryMode, MPINGPaymentDataEmvData, MPINGResult, MPINGDfsBaseCommand, MPINGResultValue, MPINGDeleteDataFileCommand, MPINGWriteDataFileBlockCommand, MPINGResultError, MPINGRamBaseCommand, MPINGCompleteTransactionCommand, MPINGCompleteTransactionResponseStatus, MPINGConfigureContactlessTransactionProcessingOptionsCommand, MPINGConfigureDolDataCommandType, MPINGConfigureDolDataCommand, MPINGConfigureUserInterfaceOptionsCommand, MPINGDetectCardResponse, MPINGDetectCardResponseSwiped, MPINGDetectCardResponseKeyPressed, MPINGDisplayBitmapCommand, MPINGDisplayControlCommand, MPINGSetDisplayModeCommandMode, MPINGSetBacklightModeState, MPINGSetBacklightModeMaxLevel, MPINGDisplayStyledTextCommandLine, MPINGDisplayStyledTextCommand, MPINGDisplayStyledTextCommandLineFontSize, MPINGKotlinArray, MPINGDisplayTextCommand, MPINGEmvTransactionDataResponse, MPINGEncryptedDataStatusCommandDataMode, MPINGEncryptedDataStatusResponse, MPINGGenericCommand, MPINGTerminalVariables, MPINGGetFeaturesTlvResponse, MPINGKeypadControlCommand, MPINGKeypadControlResponse, MPINGKeypadControlResponseSuccess, MPINGKeypadControlResponseCancel, MPINGReadBuildNumberResponse, MPINGReadCapabilitiesResponse, MPINGReadVersionResponseHwVersion, MPINGReadVersionResponse, MPINGRevokePublicKeyCommand, MPINGSetDateTimeCommand, MPINGSetEncryptionLevelCommandLevel, MPINGSetEncryptionLevelCommand, MPINGSetFeaturesTlvCommand, MPINGStartTransactionConfiguration, MPINGStartTransactionCommand, MPINGStartTransactionResponse, MPINGStartTransactionResponseAmountDol, MPINGStartTransactionResponseContactlessCompletedOffline, MPINGStartTransactionResponseContactlessRequiresOnlineAuth, MPINGStartTransactionResponseAborted, MPINGAccessoryCardProcessingModuleEmvErrorType, MPINGStartTransactionResponseEmvError, MPINGStartTransactionResponseMagstripe, MPINGSubmitAidCommandType, MPINGSubmitAidCommand, MPINGContactlessConfiguration, MPINGContactConfiguration, MPINGSubmitPublicKeyCommand, MPINGPublicKeyConfiguration, MPINGKeyPress, MPINGWaitForEventCommandEvent, MPINGWaitForEventCommand, MPINGCurrency, MPINGTlvPrimitiveItem, MPINGKotlinIntRange, MPINGPaddingStyle, MPINGKotlinNothing, MPINGAccessoryBatteryState, MPINGAccessoryFamilyMiuraType, MPINGAccessoryFamilyMiura, MPINGAccessoryFamilyVerifoneESeriesType, MPINGAccessoryFamilyVerifoneESeries, MPINGAccessoryFamilyVerifoneVipaType, MPINGAccessoryFamilyVerifoneVipa, MPINGAccessoryFamilyBBPOSType, MPINGAccessoryFamilyBBPOS, MPINGAccessoryFamilyIngenicoType, MPINGAccessoryFamilyIngenico, MPINGAccessoryComponentType, MPINGAccessoryCardProcessingModuleCardTypeMagstripe, MPINGAccessoryCardProcessingModuleFallbackStatus, MPINGAccessoryCardProcessingModuleDetectCardResult, MPINGAccessoryCardProcessingModuleDetectCardResultSuccess, MPINGAccessoryCardProcessingModuleDetectCardResultCancel, MPINGAccessoryCardProcessingModuleDetectCardResultFailure, MPINGAccessoryCardProcessingModuleRequestPinResult, MPINGAccessoryCardProcessingModuleRequestPinResultSuccess, MPINGAccessoryCardProcessingModuleRequestPinResultCancel, MPINGAccessoryCardProcessingModuleRequestPinResultFailure, MPINGAccessoryCardProcessingModuleStartTransactionResultApproved, MPINGAccessoryCardProcessingModuleStartTransactionResultDeclined, MPINGAccessoryCardProcessingModuleStartTransactionResultAlternativeCardMagstripe, MPINGAccessoryCardProcessingModuleStartTransactionResultIdentified, MPINGAccessoryCardProcessingModuleStartTransactionResultEmvError, MPINGAccessoryCardProcessingModuleStartTransactionResultAborted, MPINGAccessoryCardProcessingModuleStartTransactionResultFailed, MPINGDecimalNumber, MPINGProviderMode, MPINGAid, MPINGRid, MPINGTransactionType, MPINGTlvTag, MPINGTlvDataLength, MPINGAbstractTlvReference, MPINGGenericTlvReference, MPINGVisaFormFactorIndicator, MPINGMastercardThirdPartyData, MPINGAmericanExpressEnhancedContactlessReaderCapabilities, MPINGVisaCardTransactionQualifier, MPINGMastercardMagstripeApplicationVersionNumberIcc, MPINGVisaCardAuthenticationRelatedData, MPINGMastercardUdol, MPINGEmvTransactionTypeType, MPINGEmvCardholderVerificationMethodResultsCvm, MPINGEmvCryptogramInformationDataType, MPINGIngenicoTerminalDecisionStatus, MPINGIngenicoContactlessInformationOutCvm, MPINGIngenicoContactlessSignatureCheckResultResult, MPINGTlvConstructedItem, MPINGTlvError, MPINGTagClass, MPINGTagType, MPINGKotlinByteIterator, MPINGImageData, MPINGKotlinIntIterator, MPINGKotlinIntProgression;

@protocol MPINGKotlinComparable, MPINGMposError, MPINGTimeZone, MPINGAccessoryDetails, MPINGAccessoryDisplayModule, MPINGAccessorySystemModule, MPINGAccessoryCardProcessingModule, MPINGAccessory, MPINGCommunicationModule, MPINGTlvReference, MPINGDolRegistry, MPINGHandler, MPINGMagstripeInformation, MPINGIngenicoCardProcessingModuleOnlineAuthContinuation, MPINGPinInputProgressReporter, MPINGKotlinSuspendFunction1, MPINGTransactionSequenceHandler, MPINGResponse, MPINGCommand, MPINGConfigurationFactory, MPINGKotlinIterator, MPINGKotlinIterable, MPINGLocalDate, MPINGTlvMapper, MPINGMposErrorBuilder, MPINGLogger, MPINGKotlinx_coroutines_coreCoroutineScope, MPINGSredDataFormatterI, MPINGAccessoryDetailsBuilder, MPINGMagstripeInformationBuilder, MPINGKotlinSuspendFunction, MPINGKotlinClosedRange, MPINGKotlinCoroutineContext, MPINGKotlinCoroutineContextElement, MPINGKotlinCoroutineContextKey;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface MPINGMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPINGMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface MPINGNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface MPINGByte : MPINGNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface MPINGUByte : MPINGNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface MPINGShort : MPINGNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface MPINGUShort : MPINGNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface MPINGInt : MPINGNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface MPINGUInt : MPINGNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface MPINGLong : MPINGNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface MPINGULong : MPINGNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface MPINGFloat : MPINGNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface MPINGDouble : MPINGNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface MPINGBoolean : MPINGNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("MposError")))
@protocol MPINGMposError
@required
@property (readonly) MPINGMposErrorType *type __attribute__((swift_name("type")));
@property (readonly) MPINGMposErrorSource *source __attribute__((swift_name("source")));
@property (readonly) NSString * _Nullable info __attribute__((swift_name("info")));
@property (readonly) NSString * _Nullable developerInfo __attribute__((swift_name("developerInfo")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MPINGKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MPINGKotlinEnum : KotlinBase <MPINGKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(MPINGKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MposErrorSource")))
@interface MPINGMposErrorSource : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGMposErrorSource *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGMposErrorSource *parameter __attribute__((swift_name("parameter")));
@property (class, readonly) MPINGMposErrorSource *transaction __attribute__((swift_name("transaction")));
@property (class, readonly) MPINGMposErrorSource *accessory __attribute__((swift_name("accessory")));
@property (class, readonly) MPINGMposErrorSource *server __attribute__((swift_name("server")));
@property (class, readonly) MPINGMposErrorSource *sdk __attribute__((swift_name("sdk")));
@property (class, readonly) MPINGMposErrorSource *internal __attribute__((swift_name("internal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGMposErrorSource *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MposErrorType")))
@interface MPINGMposErrorType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGMposErrorType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGMposErrorType *parameterMissing __attribute__((swift_name("parameterMissing")));
@property (class, readonly) MPINGMposErrorType *parameterInvalid __attribute__((swift_name("parameterInvalid")));
@property (class, readonly) MPINGMposErrorType *accessoryNotFound __attribute__((swift_name("accessoryNotFound")));
@property (class, readonly) MPINGMposErrorType *accessoryNotConnected __attribute__((swift_name("accessoryNotConnected")));
@property (class, readonly) MPINGMposErrorType *accessoryAlreadyConnected __attribute__((swift_name("accessoryAlreadyConnected")));
@property (class, readonly) MPINGMposErrorType *accessoryAlreadyDisconnected __attribute__((swift_name("accessoryAlreadyDisconnected")));
@property (class, readonly) MPINGMposErrorType *accessoryBusy __attribute__((swift_name("accessoryBusy")));
@property (class, readonly) MPINGMposErrorType *accessoryNotWhitelisted __attribute__((swift_name("accessoryNotWhitelisted")));
@property (class, readonly) MPINGMposErrorType *accessoryDeactivated __attribute__((swift_name("accessoryDeactivated")));
@property (class, readonly) MPINGMposErrorType *accessoryRequiresUpdate __attribute__((swift_name("accessoryRequiresUpdate")));
@property (class, readonly) MPINGMposErrorType *accessoryBatteryLow __attribute__((swift_name("accessoryBatteryLow")));
@property (class, readonly) MPINGMposErrorType *accessoryTampered __attribute__((swift_name("accessoryTampered")));
@property (class, readonly) MPINGMposErrorType *accessoryError __attribute__((swift_name("accessoryError")));
@property (class, readonly) MPINGMposErrorType *accessoryComponentNotFound __attribute__((swift_name("accessoryComponentNotFound")));
@property (class, readonly) MPINGMposErrorType *accessoryComponentPrinterBusy __attribute__((swift_name("accessoryComponentPrinterBusy")));
@property (class, readonly) MPINGMposErrorType *accessoryComponentPrinterPaperLowOrOut __attribute__((swift_name("accessoryComponentPrinterPaperLowOrOut")));
@property (class, readonly) MPINGMposErrorType *accessoryComponentPrinterCoverOpen __attribute__((swift_name("accessoryComponentPrinterCoverOpen")));
@property (class, readonly) MPINGMposErrorType *transactionSessionNotFound __attribute__((swift_name("transactionSessionNotFound")));
@property (class, readonly) MPINGMposErrorType *transactionReferenceNotFound __attribute__((swift_name("transactionReferenceNotFound")));
@property (class, readonly) MPINGMposErrorType *transactionInvalid __attribute__((swift_name("transactionInvalid")));
@property (class, readonly) MPINGMposErrorType *transactionBusy __attribute__((swift_name("transactionBusy")));
@property (class, readonly) MPINGMposErrorType *transactionNoLongerAbortable __attribute__((swift_name("transactionNoLongerAbortable")));
@property (class, readonly) MPINGMposErrorType *transactionDeclined __attribute__((swift_name("transactionDeclined")));
@property (class, readonly) MPINGMposErrorType *transactionAborted __attribute__((swift_name("transactionAborted")));
@property (class, readonly) MPINGMposErrorType *transactionError __attribute__((swift_name("transactionError")));
@property (class, readonly) MPINGMposErrorType *transactionActionError __attribute__((swift_name("transactionActionError")));
@property (class, readonly) MPINGMposErrorType *abortedPinEntryTimedOut __attribute__((swift_name("abortedPinEntryTimedOut")));
@property (class, readonly) MPINGMposErrorType *serverTimeout __attribute__((swift_name("serverTimeout")));
@property (class, readonly) MPINGMposErrorType *serverUnavailable __attribute__((swift_name("serverUnavailable")));
@property (class, readonly) MPINGMposErrorType *serverGatewayUnavailable __attribute__((swift_name("serverGatewayUnavailable")));
@property (class, readonly) MPINGMposErrorType *serverAuthenticationFailed __attribute__((swift_name("serverAuthenticationFailed")));
@property (class, readonly) MPINGMposErrorType *serverPinningWithRemoteFailed __attribute__((swift_name("serverPinningWithRemoteFailed")));
@property (class, readonly) MPINGMposErrorType *serverInvalidResponse __attribute__((swift_name("serverInvalidResponse")));
@property (class, readonly) MPINGMposErrorType *serverError __attribute__((swift_name("serverError")));
@property (class, readonly) MPINGMposErrorType *serverUnknownUsername __attribute__((swift_name("serverUnknownUsername")));
@property (class, readonly) MPINGMposErrorType *serverOfflineBatchMalformed __attribute__((swift_name("serverOfflineBatchMalformed")));
@property (class, readonly) MPINGMposErrorType *sdkResourcesNotFound __attribute__((swift_name("sdkResourcesNotFound")));
@property (class, readonly) MPINGMposErrorType *sdkResourcesModified __attribute__((swift_name("sdkResourcesModified")));
@property (class, readonly) MPINGMposErrorType *sdkConfigurationMissing __attribute__((swift_name("sdkConfigurationMissing")));
@property (class, readonly) MPINGMposErrorType *sdkFeatureNotEnabled __attribute__((swift_name("sdkFeatureNotEnabled")));
@property (class, readonly) MPINGMposErrorType *internalInconsistency __attribute__((swift_name("internalInconsistency")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGMposErrorType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGMposErrorSource *source __attribute__((swift_name("source")));
@property (readonly) NSString *localizationKey __attribute__((swift_name("localizationKey")));
@end;

__attribute__((swift_name("MposErrorBuilder")))
@protocol MPINGMposErrorBuilder
@required
- (id<MPINGMposError>)buildType:(MPINGMposErrorType *)type info:(NSString * _Nullable)info developerInfo:(NSString * _Nullable)developerInfo __attribute__((swift_name("build(type:info:developerInfo:)")));
@end;

__attribute__((swift_name("Logger")))
@protocol MPINGLogger
@required
- (void)logTag:(NSString *)tag message:(NSString *)message level:(MPINGLogLevel *)level __attribute__((swift_name("log(tag:message:level:)")));
- (void)logTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("log(tag:message:)")));
- (void)setLogLevelLevel:(MPINGLogLevel *)level __attribute__((swift_name("setLogLevel(level:)")));
- (MPINGLogLevel *)getLogLevel __attribute__((swift_name("getLogLevel()")));
- (void)verboseTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("verbose(tag:message:)")));
- (void)debugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("debug(tag:message:)")));
- (void)infoTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("info(tag:message:)")));
- (void)warnTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("warn(tag:message:)")));
- (void)errorTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("error(tag:message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface MPINGLogLevel : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) MPINGLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) MPINGLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) MPINGLogLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) MPINGLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) MPINGLogLevel *off __attribute__((swift_name("off")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGLogLevel *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale")))
@interface MPINGLocale : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGLocale *)doCopyLanguage:(NSString *)language __attribute__((swift_name("doCopy(language:)")));
@property (readonly) MPINGHexString *languageCode __attribute__((swift_name("languageCode")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Locale.Companion")))
@interface MPINGLocaleCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGLocale *)fromIsoCodeLanguage:(NSString *)language __attribute__((swift_name("fromIsoCode(language:)")));
@property (readonly) MPINGLocale *English __attribute__((swift_name("English")));
@property (readonly) MPINGLocale *German __attribute__((swift_name("German")));
@property (readonly) MPINGLocale *French __attribute__((swift_name("French")));
@property (readonly) MPINGLocale *Swedish __attribute__((swift_name("Swedish")));
@property (readonly) MPINGLocale *Spanish __attribute__((swift_name("Spanish")));
@property (readonly) MPINGLocale *Italian __attribute__((swift_name("Italian")));
@property (readonly) MPINGLocale *Dutch __attribute__((swift_name("Dutch")));
@property (readonly) MPINGLocale *Polish __attribute__((swift_name("Polish")));
@property (readonly) MPINGLocale *Portuguese __attribute__((swift_name("Portuguese")));
@property (readonly) MPINGLocale *Finnish __attribute__((swift_name("Finnish")));
@property (readonly) MPINGLocale *Default __attribute__((swift_name("Default")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizationPrompt")))
@interface MPINGLocalizationPrompt : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGLocalizationPrompt *none __attribute__((swift_name("none")));
@property (class, readonly) MPINGLocalizationPrompt *accessoryNotWhitelisted __attribute__((swift_name("accessoryNotWhitelisted")));
@property (class, readonly) MPINGLocalizationPrompt *idle __attribute__((swift_name("idle")));
@property (class, readonly) MPINGLocalizationPrompt *idleKeepAlive __attribute__((swift_name("idleKeepAlive")));
@property (class, readonly) MPINGLocalizationPrompt *presentCard __attribute__((swift_name("presentCard")));
@property (class, readonly) MPINGLocalizationPrompt *insertOrSwipeCard __attribute__((swift_name("insertOrSwipeCard")));
@property (class, readonly) MPINGLocalizationPrompt *insertOrSwipeCardActivateNfc __attribute__((swift_name("insertOrSwipeCardActivateNfc")));
@property (class, readonly) MPINGLocalizationPrompt *cardNotSupportedIccMagstripe __attribute__((swift_name("cardNotSupportedIccMagstripe")));
@property (class, readonly) MPINGLocalizationPrompt *cardNotSupportedMagstripe __attribute__((swift_name("cardNotSupportedMagstripe")));
@property (class, readonly) MPINGLocalizationPrompt *cardNotSupportedNfc __attribute__((swift_name("cardNotSupportedNfc")));
@property (class, readonly) MPINGLocalizationPrompt *completedWithStatus __attribute__((swift_name("completedWithStatus")));
@property (class, readonly) MPINGLocalizationPrompt *insertCard __attribute__((swift_name("insertCard")));
@property (class, readonly) MPINGLocalizationPrompt *swipeCard __attribute__((swift_name("swipeCard")));
@property (class, readonly) MPINGLocalizationPrompt *cardBalanceInquiry __attribute__((swift_name("cardBalanceInquiry")));
@property (class, readonly) MPINGLocalizationPrompt *swipeCardWithoutAmount __attribute__((swift_name("swipeCardWithoutAmount")));
@property (class, readonly) MPINGLocalizationPrompt *readingEmvCard __attribute__((swift_name("readingEmvCard")));
@property (class, readonly) MPINGLocalizationPrompt *removeCardWithStatus __attribute__((swift_name("removeCardWithStatus")));
@property (class, readonly) MPINGLocalizationPrompt *removeCard __attribute__((swift_name("removeCard")));
@property (class, readonly) MPINGLocalizationPrompt *removeCardWithSignature __attribute__((swift_name("removeCardWithSignature")));
@property (class, readonly) MPINGLocalizationPrompt *removeCardWithIdentification __attribute__((swift_name("removeCardWithIdentification")));
@property (class, readonly) MPINGLocalizationPrompt *removeCardWithProcessing __attribute__((swift_name("removeCardWithProcessing")));
@property (class, readonly) MPINGLocalizationPrompt *provideSignature __attribute__((swift_name("provideSignature")));
@property (class, readonly) MPINGLocalizationPrompt *provideIdentification __attribute__((swift_name("provideIdentification")));
@property (class, readonly) MPINGLocalizationPrompt *processingTransaction __attribute__((swift_name("processingTransaction")));
@property (class, readonly) MPINGLocalizationPrompt *authorizingTransaction __attribute__((swift_name("authorizingTransaction")));
@property (class, readonly) MPINGLocalizationPrompt *completingTransaction __attribute__((swift_name("completingTransaction")));
@property (class, readonly) MPINGLocalizationPrompt *waitingForProcessorApproval __attribute__((swift_name("waitingForProcessorApproval")));
@property (class, readonly) MPINGLocalizationPrompt *transactionAborting __attribute__((swift_name("transactionAborting")));
@property (class, readonly) MPINGLocalizationPrompt *genericError __attribute__((swift_name("genericError")));
@property (class, readonly) MPINGLocalizationPrompt *pinStatus __attribute__((swift_name("pinStatus")));
@property (class, readonly) MPINGLocalizationPrompt *pinLastTry __attribute__((swift_name("pinLastTry")));
@property (class, readonly) MPINGLocalizationPrompt *pinIncorrect __attribute__((swift_name("pinIncorrect")));
@property (class, readonly) MPINGLocalizationPrompt *pinOk __attribute__((swift_name("pinOk")));
@property (class, readonly) MPINGLocalizationPrompt *askForMotoResultConfirmationAllMatch __attribute__((swift_name("askForMotoResultConfirmationAllMatch")));
@property (class, readonly) MPINGLocalizationPrompt *askForMotoResultConfirmationCvvMatchOnly __attribute__((swift_name("askForMotoResultConfirmationCvvMatchOnly")));
@property (class, readonly) MPINGLocalizationPrompt *askForMotoResultConfirmationAddressMatchOnly __attribute__((swift_name("askForMotoResultConfirmationAddressMatchOnly")));
@property (class, readonly) MPINGLocalizationPrompt *askForMotoResultConfirmationDataNotChecked __attribute__((swift_name("askForMotoResultConfirmationDataNotChecked")));
@property (class, readonly) MPINGLocalizationPrompt *askForMotoResultConfirmationNoDataMatches __attribute__((swift_name("askForMotoResultConfirmationNoDataMatches")));
@property (class, readonly) MPINGLocalizationPrompt *askingForTipConfirmation __attribute__((swift_name("askingForTipConfirmation")));
@property (class, readonly) MPINGLocalizationPrompt *askingForTotalAmountConfirmation __attribute__((swift_name("askingForTotalAmountConfirmation")));
@property (class, readonly) MPINGLocalizationPrompt *askingForCardDataInput __attribute__((swift_name("askingForCardDataInput")));
@property (class, readonly) MPINGLocalizationPrompt *maximumTipAmount __attribute__((swift_name("maximumTipAmount")));
@property (class, readonly) MPINGLocalizationPrompt *maximumTotalAmount __attribute__((swift_name("maximumTotalAmount")));
@property (class, readonly) MPINGLocalizationPrompt *updatingDeviceKeyInjection __attribute__((swift_name("updatingDeviceKeyInjection")));
@property (class, readonly) MPINGLocalizationPrompt *updatingDeviceFirmwareUpdate __attribute__((swift_name("updatingDeviceFirmwareUpdate")));
@property (class, readonly) MPINGLocalizationPrompt *updatingDeviceConfigurationUpdate __attribute__((swift_name("updatingDeviceConfigurationUpdate")));
@property (class, readonly) MPINGLocalizationPrompt *updatingDeviceSoftwareUpdate __attribute__((swift_name("updatingDeviceSoftwareUpdate")));
@property (class, readonly) MPINGLocalizationPrompt *updatingDevice __attribute__((swift_name("updatingDevice")));
@property (class, readonly) MPINGLocalizationPrompt *applicationSelection __attribute__((swift_name("applicationSelection")));
@property (class, readonly) MPINGLocalizationPrompt *paymentOptions __attribute__((swift_name("paymentOptions")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryConnecting __attribute__((swift_name("providerAccessoryConnecting")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryDisconnecting __attribute__((swift_name("providerAccessoryDisconnecting")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryCheckingForUpdate __attribute__((swift_name("providerAccessoryCheckingForUpdate")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryConfiguringConnectionLink __attribute__((swift_name("providerAccessoryConfiguringConnectionLink")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryUpdating __attribute__((swift_name("providerAccessoryUpdating")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryWaitingForReader __attribute__((swift_name("providerAccessoryWaitingForReader")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryConnectingPrinter __attribute__((swift_name("providerAccessoryConnectingPrinter")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccessoryWaitingForPrinter __attribute__((swift_name("providerAccessoryWaitingForPrinter")));
@property (class, readonly) MPINGLocalizationPrompt *providerTransactionQuerying __attribute__((swift_name("providerTransactionQuerying")));
@property (class, readonly) MPINGLocalizationPrompt *providerTransactionRegistering __attribute__((swift_name("providerTransactionRegistering")));
@property (class, readonly) MPINGLocalizationPrompt *providerNotRefundable __attribute__((swift_name("providerNotRefundable")));
@property (class, readonly) MPINGLocalizationPrompt *providerApproved __attribute__((swift_name("providerApproved")));
@property (class, readonly) MPINGLocalizationPrompt *providerApprovedSignatureRequired __attribute__((swift_name("providerApprovedSignatureRequired")));
@property (class, readonly) MPINGLocalizationPrompt *providerApprovedPartially __attribute__((swift_name("providerApprovedPartially")));
@property (class, readonly) MPINGLocalizationPrompt *providerAccepted __attribute__((swift_name("providerAccepted")));
@property (class, readonly) MPINGLocalizationPrompt *providerAcceptedSignatureRequired __attribute__((swift_name("providerAcceptedSignatureRequired")));
@property (class, readonly) MPINGLocalizationPrompt *providerDeclined __attribute__((swift_name("providerDeclined")));
@property (class, readonly) MPINGLocalizationPrompt *providerAborted __attribute__((swift_name("providerAborted")));
@property (class, readonly) MPINGLocalizationPrompt *providerFailed __attribute__((swift_name("providerFailed")));
@property (class, readonly) MPINGLocalizationPrompt *providerInconclusive __attribute__((swift_name("providerInconclusive")));
@property (class, readonly) MPINGLocalizationPrompt *completed __attribute__((swift_name("completed")));
@property (class, readonly) MPINGLocalizationPrompt *failed __attribute__((swift_name("failed")));
@property (class, readonly) MPINGLocalizationPrompt *aborted __attribute__((swift_name("aborted")));
@property (class, readonly) MPINGLocalizationPrompt *barcodeScannerActive __attribute__((swift_name("barcodeScannerActive")));
@property (class, readonly) MPINGLocalizationPrompt *scanCode __attribute__((swift_name("scanCode")));
@property (class, readonly) MPINGLocalizationPrompt *providerComponentPrinterSending __attribute__((swift_name("providerComponentPrinterSending")));
@property (class, readonly) MPINGLocalizationPrompt *providerComponentPrinterSent __attribute__((swift_name("providerComponentPrinterSent")));
@property (class, readonly) MPINGLocalizationPrompt *providerComponentPrinterAborted __attribute__((swift_name("providerComponentPrinterAborted")));
@property (class, readonly) MPINGLocalizationPrompt *providerComponentPrinterFailed __attribute__((swift_name("providerComponentPrinterFailed")));
@property (class, readonly) MPINGLocalizationPrompt *providerComponentTippingAskingForTip __attribute__((swift_name("providerComponentTippingAskingForTip")));
@property (class, readonly) MPINGLocalizationPrompt *dccCurrencySelectionTitle __attribute__((swift_name("dccCurrencySelectionTitle")));
@property (class, readonly) MPINGLocalizationPrompt *creditDebitSelectionTitle __attribute__((swift_name("creditDebitSelectionTitle")));
@property (class, readonly) MPINGLocalizationPrompt *creditDebitSelectionCredit __attribute__((swift_name("creditDebitSelectionCredit")));
@property (class, readonly) MPINGLocalizationPrompt *creditDebitSelectionDebit __attribute__((swift_name("creditDebitSelectionDebit")));
@property (class, readonly) MPINGLocalizationPrompt *waitingForCreditDebitSelection __attribute__((swift_name("waitingForCreditDebitSelection")));
@property (class, readonly) MPINGLocalizationPrompt *waitingForShopperSelection __attribute__((swift_name("waitingForShopperSelection")));
@property (class, readonly) MPINGLocalizationPrompt *verificationResultNotChecked __attribute__((swift_name("verificationResultNotChecked")));
@property (class, readonly) MPINGLocalizationPrompt *verificationResultNotPassed __attribute__((swift_name("verificationResultNotPassed")));
@property (class, readonly) MPINGLocalizationPrompt *verificationResultCvv __attribute__((swift_name("verificationResultCvv")));
@property (class, readonly) MPINGLocalizationPrompt *verificationResultAddressNumber __attribute__((swift_name("verificationResultAddressNumber")));
@property (class, readonly) MPINGLocalizationPrompt *verificationResultPostalCode __attribute__((swift_name("verificationResultPostalCode")));
@property (class, readonly) MPINGLocalizationPrompt *contactlessInteractionSeePhone __attribute__((swift_name("contactlessInteractionSeePhone")));
@property (class, readonly) MPINGLocalizationPrompt *contactlessInteractionOneCardOnly __attribute__((swift_name("contactlessInteractionOneCardOnly")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGLocalizationPrompt *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Date")))
@interface MPINGDate : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithNsDate:(NSDate *)nsDate __attribute__((swift_name("init(nsDate:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDate *nsDate __attribute__((swift_name("nsDate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateFormatter")))
@interface MPINGDateFormatter : KotlinBase
- (instancetype)initWithFormat:(NSString *)format __attribute__((swift_name("init(format:)"))) __attribute__((objc_designated_initializer));
- (NSString *)stringFromDateDate:(MPINGDate *)date __attribute__((swift_name("stringFromDate(date:)")));
- (MPINGDate * _Nullable)dateFromStringString:(NSString *)string __attribute__((swift_name("dateFromString(string:)")));
@end;

__attribute__((swift_name("LocalDate")))
@protocol MPINGLocalDate
@required
@property (readonly) MPINGDate *utcDate __attribute__((swift_name("utcDate")));
@property (readonly) MPINGDate *localDate __attribute__((swift_name("localDate")));
@property (readonly) id<MPINGTimeZone> localTimeZone __attribute__((swift_name("localTimeZone")));
@end;

__attribute__((swift_name("TimeZone")))
@protocol MPINGTimeZone
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApduCommand")))
@interface MPINGApduCommand : KotlinBase
- (instancetype)initWithCla:(int8_t)cla ins:(int8_t)ins p1:(int8_t)p1 p2:(int8_t)p2 data:(MPINGKotlinByteArray *)data __attribute__((swift_name("init(cla:ins:p1:p2:data:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int8_t)component1 __attribute__((swift_name("component1()")));
- (int8_t)component2 __attribute__((swift_name("component2()")));
- (int8_t)component3 __attribute__((swift_name("component3()")));
- (int8_t)component4 __attribute__((swift_name("component4()")));
- (MPINGKotlinByteArray *)component5 __attribute__((swift_name("component5()")));
- (MPINGApduCommand *)doCopyCla:(int8_t)cla ins:(int8_t)ins p1:(int8_t)p1 p2:(int8_t)p2 data:(MPINGKotlinByteArray *)data __attribute__((swift_name("doCopy(cla:ins:p1:p2:data:)")));
@property (readonly) int8_t cla __attribute__((swift_name("cla")));
@property (readonly) int8_t ins __attribute__((swift_name("ins")));
@property (readonly) int8_t p1 __attribute__((swift_name("p1")));
@property (readonly) int8_t p2 __attribute__((swift_name("p2")));
@property (readonly) MPINGKotlinByteArray *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApduSerializer")))
@interface MPINGApduSerializer : KotlinBase
- (instancetype)initWithAddData:(BOOL)addData useTwoBytesForLength:(BOOL)useTwoBytesForLength __attribute__((swift_name("init(addData:useTwoBytesForLength:)"))) __attribute__((objc_designated_initializer));
- (MPINGKotlinByteArray *)serializeCommand:(MPINGApduCommand *)command __attribute__((swift_name("serialize(command:)")));
@property (readonly) BOOL addData __attribute__((swift_name("addData")));
@property (readonly) BOOL useTwoBytesForLength __attribute__((swift_name("useTwoBytesForLength")));
@end;

__attribute__((swift_name("Accessory")))
@protocol MPINGAccessory
@required
- (void)connectSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("connect(success:failure:)")));
- (void)disconnectSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("disconnect(success:failure:)")));
@property (readonly) MPINGAccessoryFamily *family __attribute__((swift_name("family")));
@property (readonly) id<MPINGAccessoryDetails> details __attribute__((swift_name("details")));
@property (readonly) MPINGLocale *locale __attribute__((swift_name("locale")));
@property (readonly) MPINGAccessoryState *state __attribute__((swift_name("state")));
@property (readonly) id<MPINGAccessoryDisplayModule> displayModule __attribute__((swift_name("displayModule")));
@property (readonly) id<MPINGAccessorySystemModule> systemModule __attribute__((swift_name("systemModule")));
@property (readonly) id<MPINGAccessoryCardProcessingModule> cardModule __attribute__((swift_name("cardModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoPaymentAccessory")))
@interface MPINGIngenicoPaymentAccessory : KotlinBase <MPINGAccessory>
- (instancetype)initWithCommunicationModule:(id<MPINGCommunicationModule>)communicationModule locale:(MPINGLocale *)locale __attribute__((swift_name("init(communicationModule:locale:)"))) __attribute__((objc_designated_initializer));
- (void)connectSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("connect(success:failure:)")));
- (void)disconnectSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("disconnect(success:failure:)")));
@property MPINGAccessoryFamily *family __attribute__((swift_name("family")));
@property id<MPINGAccessoryDetails> details __attribute__((swift_name("details")));
@property MPINGAccessoryState *state __attribute__((swift_name("state")));
@property (readonly) MPINGIngenicoDisplayModule *displayModule __attribute__((swift_name("displayModule")));
@property (readonly) MPINGIngenicoSystemModule *systemModule __attribute__((swift_name("systemModule")));
@property (readonly) MPINGIngenicoCardProcessingModule *cardModule __attribute__((swift_name("cardModule")));
@property void (^onConnectionStateChanged)(MPINGAccessoryConnectionState *, MPINGAccessoryConnectionState *) __attribute__((swift_name("onConnectionStateChanged")));
@property (readonly) MPINGLocale *locale __attribute__((swift_name("locale")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoPaymentAccessory.Companion")))
@interface MPINGIngenicoPaymentAccessoryCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseCode")))
@interface MPINGResponseCode : KotlinBase
- (instancetype)initWithCode:(MPINGHexString *)code description:(NSString *)description __attribute__((swift_name("init(code:description:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPINGHexString *code __attribute__((swift_name("code")));
@property (readonly, getter=description_) NSString *description __attribute__((swift_name("description")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoResponseCode")))
@interface MPINGIngenicoResponseCode : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingenicoResponseCode __attribute__((swift_name("init()")));
- (MPINGResponseCode *)swCode:(MPINGHexString *)code __attribute__((swift_name("sw(code:)")));
@property (readonly) MPINGResponseCode *PowerCouldNotBeApplied __attribute__((swift_name("PowerCouldNotBeApplied")));
@property (readonly) MPINGResponseCode *CardIsDrawingTooMuchCurrent __attribute__((swift_name("CardIsDrawingTooMuchCurrent")));
@property (readonly) MPINGResponseCode *ReaderNotResponding __attribute__((swift_name("ReaderNotResponding")));
@property (readonly) MPINGResponseCode *InvalidOverallCommandLength __attribute__((swift_name("InvalidOverallCommandLength")));
@property (readonly) MPINGResponseCode *InvalidTransmittedDataLength __attribute__((swift_name("InvalidTransmittedDataLength")));
@property (readonly) MPINGResponseCode *InvalidInstruction __attribute__((swift_name("InvalidInstruction")));
@property (readonly) MPINGResponseCode *InstructionNotSupported __attribute__((swift_name("InstructionNotSupported")));
@property (readonly) MPINGResponseCode *InvalidParameters __attribute__((swift_name("InvalidParameters")));
@property (readonly) MPINGResponseCode *TransmittedDataLengthDoesNotMatchLc __attribute__((swift_name("TransmittedDataLengthDoesNotMatchLc")));
@property (readonly) MPINGResponseCode *InvalidTransmittedData __attribute__((swift_name("InvalidTransmittedData")));
@property (readonly) MPINGResponseCode *LastTransmittedByteIsNotZero __attribute__((swift_name("LastTransmittedByteIsNotZero")));
@property (readonly) MPINGResponseCode *NothingToDo __attribute__((swift_name("NothingToDo")));
@property (readonly) MPINGResponseCode *Timeout __attribute__((swift_name("Timeout")));
@property (readonly) MPINGResponseCode *CancelledByApplication __attribute__((swift_name("CancelledByApplication")));
@property (readonly) MPINGResponseCode *ReaderGeneralError __attribute__((swift_name("ReaderGeneralError")));
@property (readonly) MPINGResponseCode *ReaderCommunicationsError __attribute__((swift_name("ReaderCommunicationsError")));
@property (readonly) MPINGResponseCode *ReaderRejectedCommand __attribute__((swift_name("ReaderRejectedCommand")));
@property (readonly) MPINGResponseCode *CardNotPresent __attribute__((swift_name("CardNotPresent")));
@property (readonly) MPINGResponseCode *CardNotPoweredUp __attribute__((swift_name("CardNotPoweredUp")));
@property (readonly) MPINGResponseCode *CardInterfaceGeneralError __attribute__((swift_name("CardInterfaceGeneralError")));
@property (readonly) MPINGResponseCode *Successful __attribute__((swift_name("Successful")));
@property (readonly) MPINGResponseCode *MandatoryEmvTlvDataMissing __attribute__((swift_name("MandatoryEmvTlvDataMissing")));
@property (readonly) MPINGResponseCode *StorageFull __attribute__((swift_name("StorageFull")));
@property (readonly) MPINGResponseCode *NonEmvCardOrCardError __attribute__((swift_name("NonEmvCardOrCardError")));
@property (readonly) MPINGResponseCode *NoMutuallySupportedAids __attribute__((swift_name("NoMutuallySupportedAids")));
@property (readonly) MPINGResponseCode *AidNotInListOfMutuallySupportedAids __attribute__((swift_name("AidNotInListOfMutuallySupportedAids")));
@property (readonly) MPINGResponseCode *DolNotConfigured __attribute__((swift_name("DolNotConfigured")));
@property (readonly) MPINGResponseCode *RsaKeyNotFound __attribute__((swift_name("RsaKeyNotFound")));
@property (readonly) MPINGResponseCode *NoRsaKeysAvailable __attribute__((swift_name("NoRsaKeysAvailable")));
@property (readonly) MPINGResponseCode *DuplicateRsaKey __attribute__((swift_name("DuplicateRsaKey")));
@property (readonly) MPINGResponseCode *DuplicateAid __attribute__((swift_name("DuplicateAid")));
@property (readonly) MPINGResponseCode *ApplicationBlocked __attribute__((swift_name("ApplicationBlocked")));
@property (readonly) MPINGResponseCode *CardBlocked __attribute__((swift_name("CardBlocked")));
@property (readonly) MPINGResponseCode *TimedOutWaitingForSsaHandle __attribute__((swift_name("TimedOutWaitingForSsaHandle")));
@property (readonly) MPINGResponseCode *UnableToObtainSsaHandle __attribute__((swift_name("UnableToObtainSsaHandle")));
@property (readonly) MPINGResponseCode *TimedOutWaitingForPeripheralHandle __attribute__((swift_name("TimedOutWaitingForPeripheralHandle")));
@property (readonly) MPINGResponseCode *UnableToObtainPeripheralHandle __attribute__((swift_name("UnableToObtainPeripheralHandle")));
@property (readonly) MPINGResponseCode *ContactlessFailedRetryContact __attribute__((swift_name("ContactlessFailedRetryContact")));
@property (readonly) MPINGResponseCode *IccCardInsertedDuringContactless __attribute__((swift_name("IccCardInsertedDuringContactless")));
@property (readonly) MPINGResponseCode *ContactlessTransactionWasNotAllowedToProceed __attribute__((swift_name("ContactlessTransactionWasNotAllowedToProceed")));
@property (readonly) MPINGResponseCode *ContactlessApplicationError __attribute__((swift_name("ContactlessApplicationError")));
@property (readonly) MPINGResponseCode *OdcvmRequested __attribute__((swift_name("OdcvmRequested")));
@property (readonly) MPINGResponseCode *ErrorsInRiskParameter __attribute__((swift_name("ErrorsInRiskParameter")));
@property (readonly) MPINGResponseCode *ContactlessFailedRetryContactDisabled __attribute__((swift_name("ContactlessFailedRetryContactDisabled")));
@property (readonly) MPINGResponseCode *FallbackToOtherContactlessCard __attribute__((swift_name("FallbackToOtherContactlessCard")));
@property (readonly) MPINGResponseCode *PinCancelled __attribute__((swift_name("PinCancelled")));
@property (readonly) MPINGResponseCode *Cancelled __attribute__((swift_name("Cancelled")));
@property (readonly) MPINGResponseCode *FirstPinEntryPrompt __attribute__((swift_name("FirstPinEntryPrompt")));
@property (readonly) MPINGResponseCode *RetryPinEntryPrompt __attribute__((swift_name("RetryPinEntryPrompt")));
@property (readonly) MPINGResponseCode *LastPinEntryPrompt __attribute__((swift_name("LastPinEntryPrompt")));
@property (readonly) MPINGResponseCode *PinEntryInProgress __attribute__((swift_name("PinEntryInProgress")));
@property (readonly) MPINGResponseCode *PinEntrySuccessful __attribute__((swift_name("PinEntrySuccessful")));
@property (readonly) MPINGResponseCode *PinEntryFailed __attribute__((swift_name("PinEntryFailed")));
@property (readonly) MPINGResponseCode *PinEntryCancelled __attribute__((swift_name("PinEntryCancelled")));
@property (readonly) MPINGResponseCode *FirstNewPinEntryPrompt __attribute__((swift_name("FirstNewPinEntryPrompt")));
@property (readonly) MPINGResponseCode *ValidatePinEntryPrompt __attribute__((swift_name("ValidatePinEntryPrompt")));
@property (readonly) MPINGResponseCode *RetryNewPinEntryPrompt __attribute__((swift_name("RetryNewPinEntryPrompt")));
@property (readonly) MPINGResponseCode *PinChangeFailed __attribute__((swift_name("PinChangeFailed")));
@property (readonly) MPINGResponseCode *PinChangeEnded __attribute__((swift_name("PinChangeEnded")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DolParser")))
@interface MPINGDolParser : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dolParser __attribute__((swift_name("init()")));
- (MPINGKotlinPair *)parseDolDataData:(MPINGHexString *)data tlvReferences:(id)tlvReferences __attribute__((swift_name("parseDolData(data:tlvReferences:)")));
@end;

__attribute__((swift_name("DolRegistry")))
@protocol MPINGDolRegistry
@required
@property (readonly) NSArray<id<MPINGTlvReference>> *amountDol __attribute__((swift_name("amountDol")));
@property (readonly) NSArray<id<MPINGTlvReference>> *onlineDol __attribute__((swift_name("onlineDol")));
@property (readonly) NSArray<id<MPINGTlvReference>> *responseDol __attribute__((swift_name("responseDol")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultDolRegistry")))
@interface MPINGDefaultDolRegistry : KotlinBase <MPINGDolRegistry>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultDolRegistry __attribute__((swift_name("init()")));
@property (readonly) NSArray<id<MPINGTlvReference>> *amountDol __attribute__((swift_name("amountDol")));
@property (readonly) NSArray<id<MPINGTlvReference>> *onlineDol __attribute__((swift_name("onlineDol")));
@property (readonly) NSArray<id<MPINGTlvReference>> *responseDol __attribute__((swift_name("responseDol")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactlessDolRegistry")))
@interface MPINGContactlessDolRegistry : KotlinBase <MPINGDolRegistry>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contactlessDolRegistry __attribute__((swift_name("init()")));
@property (readonly) NSArray<id<MPINGTlvReference>> *amountDol __attribute__((swift_name("amountDol")));
@property (readonly) NSArray<id<MPINGTlvReference>> *onlineDol __attribute__((swift_name("onlineDol")));
@property (readonly) NSArray<id<MPINGTlvReference>> *responseDol __attribute__((swift_name("responseDol")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DolSerializer")))
@interface MPINGDolSerializer : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dolSerializer __attribute__((swift_name("init()")));
- (MPINGHexString *)serializeDolTagsDol:(id)dol __attribute__((swift_name("serializeDolTags(dol:)")));
@end;

__attribute__((swift_name("EmvDolSerialization")))
@interface MPINGEmvDolSerialization : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<MPINGTlvItem *> *)sanitizeTlv:(NSArray<MPINGTlvItem *> *)tlv __attribute__((swift_name("sanitize(tlv:)")));
- (NSArray<MPINGTlvItem *> *)parseAmountDolDataData:(MPINGHexString *)data __attribute__((swift_name("parseAmountDolData(data:)")));
- (MPINGHexString *)serializeAmountDolTags __attribute__((swift_name("serializeAmountDolTags()")));
- (NSArray<MPINGTlvItem *> *)parseOnlineDolDataData:(MPINGHexString *)data __attribute__((swift_name("parseOnlineDolData(data:)")));
- (MPINGHexString *)serializeOnlineDolTags __attribute__((swift_name("serializeOnlineDolTags()")));
- (NSArray<MPINGTlvItem *> *)parseResponseDolDataData:(MPINGHexString *)data __attribute__((swift_name("parseResponseDolData(data:)")));
- (MPINGHexString *)serializeResponseDolTags __attribute__((swift_name("serializeResponseDolTags()")));
@property (readonly) id<MPINGDolRegistry> dolRegistry __attribute__((swift_name("dolRegistry")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactDolSerialization")))
@interface MPINGContactDolSerialization : MPINGEmvDolSerialization
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contactDolSerialization __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<MPINGTlvItem *> *)sanitizeTlv:(NSArray<MPINGTlvItem *> *)tlv __attribute__((swift_name("sanitize(tlv:)")));
@property (readonly) MPINGDefaultDolRegistry *dolRegistry __attribute__((swift_name("dolRegistry")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactlessDolSerialization")))
@interface MPINGContactlessDolSerialization : MPINGEmvDolSerialization
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contactlessDolSerialization __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<MPINGTlvItem *> *)sanitizeTlv:(NSArray<MPINGTlvItem *> *)tlv __attribute__((swift_name("sanitize(tlv:)")));
@property (readonly) id<MPINGDolRegistry> dolRegistry __attribute__((swift_name("dolRegistry")));
@end;

__attribute__((swift_name("AccessoryCardProcessingModule")))
@protocol MPINGAccessoryCardProcessingModule
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoCardProcessingModule")))
@interface MPINGIngenicoCardProcessingModule : KotlinBase <MPINGAccessoryCardProcessingModule>
- (instancetype)initWithCommandResponseHandler:(id<MPINGHandler>)commandResponseHandler locale:(MPINGLocale *)locale __attribute__((swift_name("init(commandResponseHandler:locale:)"))) __attribute__((objc_designated_initializer));
- (void)detectCardActiveInterfaces:(NSSet<MPINGAccessoryCardProcessingModuleActiveInterface *> *)activeInterfaces optOut:(MPINGAccessoryCardProcessingModuleOptOut *)optOut success:(void (^)(MPINGAccessoryCardProcessingModuleCardType *, id<MPINGMagstripeInformation> _Nullable))success cancel:(void (^)(MPINGAccessoryCardProcessingModuleCancelReason *))cancel failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("detectCard(activeInterfaces:optOut:success:cancel:failure:)")));
- (void)startTransactionTransactionInfo:(MPINGTransactionInfo *)transactionInfo interfaces:(NSSet<MPINGAccessoryCardProcessingModuleActiveInterface *> *)interfaces selectedInterface:(void (^)(MPINGAccessoryCardProcessingModuleActiveInterface *))selectedInterface continueAfterIdentification:(MPINGBoolean *(^)(MPINGPaymentData *))continueAfterIdentification onlineAuth:(void (^)(id<MPINGIngenicoCardProcessingModuleOnlineAuthContinuation>))onlineAuth completed:(void (^)(MPINGAccessoryCardProcessingModuleStartTransactionResult *))completed pinEntryProgress:(id<MPINGPinInputProgressReporter>)pinEntryProgress __attribute__((swift_name("startTransaction(transactionInfo:interfaces:selectedInterface:continueAfterIdentification:onlineAuth:completed:pinEntryProgress:)")));
- (void)requestOnlinePinAmount:(MPINGAmount *)amount success:(void (^)(NSString *, NSString *))success cancel:(void (^)(MPINGAccessoryCardProcessingModulePinCancelReason *))cancel failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("requestOnlinePin(amount:success:cancel:failure:)")));
- (void)abortTransactionCompleted:(void (^)(void))completed __attribute__((swift_name("abortTransaction(completed:)")));
@end;

__attribute__((swift_name("IngenicoCardProcessingModuleOnlineAuthContinuation")))
@protocol MPINGIngenicoCardProcessingModuleOnlineAuthContinuation
@required
- (void)continueOnlineAuthOnlineResponseData:(MPINGOnlineResponseData *)onlineResponseData __attribute__((swift_name("continueOnlineAuth(onlineResponseData:)")));
@property (readonly) MPINGPaymentData *requestData __attribute__((swift_name("requestData")));
@end;

__attribute__((swift_name("AccessoryDisplayModule")))
@protocol MPINGAccessoryDisplayModule
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoDisplayModule")))
@interface MPINGIngenicoDisplayModule : KotlinBase <MPINGAccessoryDisplayModule>
- (instancetype)initWithCommandResponseHandler:(id<MPINGHandler>)commandResponseHandler __attribute__((swift_name("init(commandResponseHandler:)"))) __attribute__((objc_designated_initializer));
- (void)displayText:(id)text success:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("display(text:success:failure:)")));
- (void)displayIdleScreenSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("displayIdleScreen(success:failure:)")));
- (void)displayIdleScreenAfterTimeout __attribute__((swift_name("displayIdleScreenAfterTimeout()")));
- (void)cancelDisplayIdleScreenAfterTimeout __attribute__((swift_name("cancelDisplayIdleScreenAfterTimeout()")));
@property NSArray<NSString *> *idleScreenText __attribute__((swift_name("idleScreenText")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoDisplayModule.Companion")))
@interface MPINGIngenicoDisplayModuleCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("AccessorySystemModule")))
@protocol MPINGAccessorySystemModule
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IngenicoSystemModule")))
@interface MPINGIngenicoSystemModule : KotlinBase <MPINGAccessorySystemModule>
- (instancetype)initWithCommandResponseHandler:(id<MPINGHandler>)commandResponseHandler locale:(MPINGLocale *)locale __attribute__((swift_name("init(commandResponseHandler:locale:)"))) __attribute__((objc_designated_initializer));
- (void)getInformationSuccess:(void (^)(MPINGAccessorySystemModuleAccessoryInfo *))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("getInformation(success:failure:)")));
- (void)initializeSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("initialize(success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageData")))
@interface MPINGImageData : KotlinBase
- (instancetype)initWithVersionDescription:(NSString *)versionDescription dataAsString:(NSArray<NSString *> *(^)(void))dataAsString __attribute__((swift_name("init(versionDescription:dataAsString:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MPINGHexString *> *)data __attribute__((swift_name("data()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface MPINGImage : KotlinBase
- (instancetype)initWithName:(NSString *)name dataProvider:(id (^)(void))dataProvider totalFileLength:(int32_t)totalFileLength __attribute__((swift_name("init(name:dataProvider:totalFileLength:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (id (^)(void))component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MPINGImage *)doCopyName:(NSString *)name dataProvider:(id (^)(void))dataProvider totalFileLength:(int32_t)totalFileLength __attribute__((swift_name("doCopy(name:dataProvider:totalFileLength:)")));
@property (readonly) NSString *ramPath __attribute__((swift_name("ramPath")));
@property (readonly) NSString *dfsPath __attribute__((swift_name("dfsPath")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id (^dataProvider)(void) __attribute__((swift_name("dataProvider")));
@property (readonly) int32_t totalFileLength __attribute__((swift_name("totalFileLength")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageRegistry")))
@interface MPINGImageRegistry : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)imageRegistry __attribute__((swift_name("init()")));
@property (readonly) MPINGImage *bambora __attribute__((swift_name("bambora")));
@property (readonly) MPINGImage *payworks __attribute__((swift_name("payworks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionInfo")))
@interface MPINGTransactionInfo : KotlinBase
- (instancetype)initWithAmount:(MPINGAmount *)amount type:(MPINGTransactionInfoType *)type __attribute__((swift_name("init(amount:type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAmount *)component1 __attribute__((swift_name("component1()")));
- (MPINGTransactionInfoType *)component2 __attribute__((swift_name("component2()")));
- (MPINGTransactionInfo *)doCopyAmount:(MPINGAmount *)amount type:(MPINGTransactionInfoType *)type __attribute__((swift_name("doCopy(amount:type:)")));
@property (readonly) MPINGAmount *amount __attribute__((swift_name("amount")));
@property (readonly) MPINGTransactionInfoType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionInfo.Type")))
@interface MPINGTransactionInfoType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGTransactionInfoType *purchase __attribute__((swift_name("purchase")));
@property (class, readonly) MPINGTransactionInfoType *refund __attribute__((swift_name("refund")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGTransactionInfoType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("SredDataFormatterI")))
@protocol MPINGSredDataFormatterI
@required
- (MPINGHexString *)magstripeKsnWithExtension:(MPINGHexString *)ksnWithExtension track2:(MPINGHexString *)track2 __attribute__((swift_name("magstripe(ksnWithExtension:track2:)")));
- (MPINGHexString *)contactKsnWithExtension:(MPINGHexString *)ksnWithExtension track2:(MPINGHexString *)track2 __attribute__((swift_name("contact(ksnWithExtension:track2:)")));
- (MPINGHexString * _Nullable)ksnKsnWithExtension:(MPINGHexString *)ksnWithExtension __attribute__((swift_name("ksn(ksnWithExtension:)")));
@end;

__attribute__((swift_name("Handler")))
@protocol MPINGHandler
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultCommandResponseHandler")))
@interface MPINGDefaultCommandResponseHandler : KotlinBase <MPINGHandler>
- (instancetype)initWithCommModule:(id<MPINGCommunicationModule>)commModule __attribute__((swift_name("init(commModule:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultCommandResponseHandler.Companion")))
@interface MPINGDefaultCommandResponseHandlerCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectCardHandler")))
@interface MPINGDetectCardHandler : KotlinBase
- (instancetype)initWithCommandResponseHandler:(id<MPINGHandler>)commandResponseHandler __attribute__((swift_name("init(commandResponseHandler:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData")))
@interface MPINGPaymentData : KotlinBase
- (instancetype)initWithKsnWithExtension:(MPINGHexString *)ksnWithExtension tlv:(id)tlv activeInterface:(MPINGPaymentDataActiveInterface *)activeInterface __attribute__((swift_name("init(ksnWithExtension:tlv:activeInterface:)"))) __attribute__((objc_designated_initializer));
- (MPINGPaymentData *)byUpdatingTlvTlv:(id)tlv __attribute__((swift_name("byUpdatingTlv(tlv:)")));
@property (readonly) MPINGHexString *panSequenceNumber __attribute__((swift_name("panSequenceNumber")));
@property (readonly) MPINGHexString *applicationExpirationDate __attribute__((swift_name("applicationExpirationDate")));
@property (readonly) MPINGHexString *applicationId __attribute__((swift_name("applicationId")));
@property (readonly) NSString *applicationLabel __attribute__((swift_name("applicationLabel")));
@property (readonly) NSString *applicationPreferredName __attribute__((swift_name("applicationPreferredName")));
@property (readonly) NSString *cardHolderName __attribute__((swift_name("cardHolderName")));
@property (readonly) MPINGHexString *track2EquivalentData __attribute__((swift_name("track2EquivalentData")));
@property (readonly) MPINGHexString *pan __attribute__((swift_name("pan")));
@property (readonly) MPINGHexString *sred __attribute__((swift_name("sred")));
@property (readonly) MPINGHexString *sredKsn __attribute__((swift_name("sredKsn")));
@property (readonly) MPINGHexString * _Nullable pin __attribute__((swift_name("pin")));
@property (readonly) MPINGHexString * _Nullable pinKSN __attribute__((swift_name("pinKSN")));
@property (readonly) MPINGCardholderVerification * _Nullable cardholderVerification __attribute__((swift_name("cardholderVerification")));
@property (readonly) MPINGEmvPosEntryModeEntryMode * _Nullable entryMode __attribute__((swift_name("entryMode")));
@property (readonly) MPINGPaymentDataEmvData *emvData __attribute__((swift_name("emvData")));
@property (readonly) MPINGPaymentDataActiveInterface *activeInterface __attribute__((swift_name("activeInterface")));
@end;

__attribute__((swift_name("PaymentData.EmvData")))
@interface MPINGPaymentDataEmvData : KotlinBase
@property (readonly) NSArray<MPINGTlvItem *> *tags __attribute__((swift_name("tags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData.EmvDataArqc")))
@interface MPINGPaymentDataEmvDataArqc : MPINGPaymentDataEmvData
- (instancetype)initWithTags:(NSArray<MPINGTlvItem *> *)tags __attribute__((swift_name("init(tags:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData.EmvDataTc")))
@interface MPINGPaymentDataEmvDataTc : MPINGPaymentDataEmvData
- (instancetype)initWithTags:(NSArray<MPINGTlvItem *> *)tags __attribute__((swift_name("init(tags:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData.EmvDataAac")))
@interface MPINGPaymentDataEmvDataAac : MPINGPaymentDataEmvData
- (instancetype)initWithTags:(NSArray<MPINGTlvItem *> *)tags __attribute__((swift_name("init(tags:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData.EmvDataNoCryptogram")))
@interface MPINGPaymentDataEmvDataNoCryptogram : MPINGPaymentDataEmvData
- (instancetype)initWithTags:(NSArray<MPINGTlvItem *> *)tags __attribute__((swift_name("init(tags:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData.EmvDataCompanion")))
@interface MPINGPaymentDataEmvDataCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGPaymentDataEmvData *)fromTlvTlv:(id)tlv __attribute__((swift_name("fromTlv(tlv:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentData.ActiveInterface")))
@interface MPINGPaymentDataActiveInterface : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGPaymentDataActiveInterface *contact __attribute__((swift_name("contact")));
@property (class, readonly) MPINGPaymentDataActiveInterface *contactless __attribute__((swift_name("contactless")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGPaymentDataActiveInterface *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnlineResponseData")))
@interface MPINGOnlineResponseData : KotlinBase
- (instancetype)initWithOnlineAuthSuccessful:(BOOL)onlineAuthSuccessful arpc:(NSArray<MPINGTlvItem *> *)arpc __attribute__((swift_name("init(onlineAuthSuccessful:arpc:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSArray<MPINGTlvItem *> *)component2 __attribute__((swift_name("component2()")));
- (MPINGOnlineResponseData *)doCopyOnlineAuthSuccessful:(BOOL)onlineAuthSuccessful arpc:(NSArray<MPINGTlvItem *> *)arpc __attribute__((swift_name("doCopy(onlineAuthSuccessful:arpc:)")));
@property (readonly) BOOL onlineAuthSuccessful __attribute__((swift_name("onlineAuthSuccessful")));
@property (readonly) NSArray<MPINGTlvItem *> *arpc __attribute__((swift_name("arpc")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPinHandler")))
@interface MPINGRequestPinHandler : KotlinBase
- (instancetype)initWithCommandResponseHandler:(id<MPINGHandler>)commandResponseHandler __attribute__((swift_name("init(commandResponseHandler:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionHandler")))
@interface MPINGStartTransactionHandler : KotlinBase
- (instancetype)initWithLocale:(MPINGLocale *)locale commandResponseHandler:(id<MPINGHandler>)commandResponseHandler selectedInterface:(void (^)(MPINGAccessoryCardProcessingModuleActiveInterface *))selectedInterface continueAfterIdentification:(MPINGBoolean *(^)(MPINGPaymentData *))continueAfterIdentification onlineAuthResult:(id<MPINGKotlinSuspendFunction1>)onlineAuthResult pinEntryProgress:(id<MPINGPinInputProgressReporter>)pinEntryProgress __attribute__((swift_name("init(locale:commandResponseHandler:selectedInterface:continueAfterIdentification:onlineAuthResult:pinEntryProgress:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MPINGTransactionSequenceHandler> transactionSequenceHandler __attribute__((swift_name("transactionSequenceHandler")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionHandler.Companion")))
@interface MPINGStartTransactionHandlerCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("TransactionSequenceHandler")))
@protocol MPINGTransactionSequenceHandler
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionSequenceHandlerImpl")))
@interface MPINGTransactionSequenceHandlerImpl : KotlinBase <MPINGTransactionSequenceHandler>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionSequenceHandlerImpl __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Command")))
@protocol MPINGCommand
@required
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)parseResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("parseResponse(responseData:)")));
- (void)processProgressMessageResponseData:(MPINGHexString *)responseData __attribute__((swift_name("processProgressMessage(responseData:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Response")))
@protocol MPINGResponse
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyResponse")))
@interface MPINGEmptyResponse : KotlinBase <MPINGResponse>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)emptyResponse __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("DfsBaseCommand")))
@interface MPINGDfsBaseCommand : KotlinBase <MPINGCommand>
- (instancetype)initWithDfsSubcommand:(int8_t)dfsSubcommand __attribute__((swift_name("init(dfsSubcommand:)"))) __attribute__((objc_designated_initializer));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)parseResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("parseResponse(responseData:)")));
- (void)processProgressMessageResponseData:(MPINGHexString *)responseData __attribute__((swift_name("processProgressMessage(responseData:)")));
- (MPINGHexString *)serializeData __attribute__((swift_name("serializeData()")));
@property (readonly) int8_t dfsSubcommand __attribute__((swift_name("dfsSubcommand")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteDataFileCommand")))
@interface MPINGDeleteDataFileCommand : MPINGDfsBaseCommand
- (instancetype)initWithPath:(NSString *)path __attribute__((swift_name("init(path:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDfsSubcommand:(int8_t)dfsSubcommand __attribute__((swift_name("init(dfsSubcommand:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGHexString *)serializeData __attribute__((swift_name("serializeData()")));
- (MPINGResultValue *)parseResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("parseResponse(responseData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGDeleteDataFileCommand *)doCopyPath:(NSString *)path __attribute__((swift_name("doCopy(path:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DfsBaseCommand.Companion")))
@interface MPINGDfsBaseCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t MaxCommandLength __attribute__((swift_name("MaxCommandLength")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WriteDataFileBlockCommand")))
@interface MPINGWriteDataFileBlockCommand : MPINGDfsBaseCommand
- (instancetype)initWithPath:(NSString *)path totalFileSize:(int32_t)totalFileSize dataBlock:(MPINGHexString *)dataBlock __attribute__((swift_name("init(path:totalFileSize:dataBlock:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDfsSubcommand:(int8_t)dfsSubcommand __attribute__((swift_name("init(dfsSubcommand:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGHexString *)serializeData __attribute__((swift_name("serializeData()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGWriteDataFileBlockCommand *)doCopyPath:(NSString *)path totalFileSize:(int32_t)totalFileSize dataBlock:(MPINGHexString *)dataBlock __attribute__((swift_name("doCopy(path:totalFileSize:dataBlock:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WriteDataFileBlockCommand.Companion")))
@interface MPINGWriteDataFileBlockCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id)commandsForPath:(NSString *)path data:(MPINGHexString *)data blockSize:(int32_t)blockSize __attribute__((swift_name("commandsFor(path:data:blockSize:)")));
@end;

__attribute__((swift_name("RamBaseCommand")))
@interface MPINGRamBaseCommand : KotlinBase <MPINGCommand>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (MPINGResult *)createAccessoryErrorResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("createAccessoryError(responseData:sw1sw2:)")));
- (MPINGResultError *)createAccessoryErrorInfo:(NSString *)info responseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode * _Nullable)sw1sw2 __attribute__((swift_name("createAccessoryError(info:responseData:sw1sw2:)")));
- (MPINGResult *)parseResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("parseResponse(responseData:)")));
- (void)processProgressMessageResponseData:(MPINGHexString *)responseData __attribute__((swift_name("processProgressMessage(responseData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelWaitCommand")))
@interface MPINGCancelWaitCommand : MPINGRamBaseCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelWaitCommand __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClearAidsListCommand")))
@interface MPINGClearAidsListCommand : MPINGRamBaseCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)clearAidsListCommand __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClearPublicKeysCommand")))
@interface MPINGClearPublicKeysCommand : MPINGRamBaseCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)clearPublicKeysCommand __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompleteTransactionCommand")))
@interface MPINGCompleteTransactionCommand : MPINGRamBaseCommand
- (instancetype)initWithData:(MPINGOnlineResponseData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGOnlineResponseData *)component1 __attribute__((swift_name("component1()")));
- (MPINGCompleteTransactionCommand *)doCopyData:(MPINGOnlineResponseData *)data __attribute__((swift_name("doCopy(data:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGOnlineResponseData *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompleteTransactionResponse")))
@interface MPINGCompleteTransactionResponse : KotlinBase <MPINGResponse>
- (instancetype)initWithUnfilteredTlv:(id)unfilteredTlv status:(MPINGCompleteTransactionResponseStatus *)status __attribute__((swift_name("init(unfilteredTlv:status:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MPINGTlvItem *> *tlv __attribute__((swift_name("tlv")));
@property (readonly) MPINGCompleteTransactionResponseStatus *status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompleteTransactionResponse.Status")))
@interface MPINGCompleteTransactionResponseStatus : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGCompleteTransactionResponseStatus *approved __attribute__((swift_name("approved")));
@property (class, readonly) MPINGCompleteTransactionResponseStatus *declined __attribute__((swift_name("declined")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGCompleteTransactionResponseStatus *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigureContactlessTransactionProcessingOptionsCommand")))
@interface MPINGConfigureContactlessTransactionProcessingOptionsCommand : MPINGRamBaseCommand
- (instancetype)initWithContactlessOutcomeDisplayTime:(double)contactlessOutcomeDisplayTime __attribute__((swift_name("init(contactlessOutcomeDisplayTime:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (double)component1 __attribute__((swift_name("component1()")));
- (MPINGConfigureContactlessTransactionProcessingOptionsCommand *)doCopyContactlessOutcomeDisplayTime:(double)contactlessOutcomeDisplayTime __attribute__((swift_name("doCopy(contactlessOutcomeDisplayTime:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) double contactlessOutcomeDisplayTime __attribute__((swift_name("contactlessOutcomeDisplayTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigureDolDataCommand")))
@interface MPINGConfigureDolDataCommand : MPINGRamBaseCommand
- (instancetype)initWithType:(MPINGConfigureDolDataCommandType *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGConfigureDolDataCommandType *)component1 __attribute__((swift_name("component1()")));
- (MPINGConfigureDolDataCommand *)doCopyType:(MPINGConfigureDolDataCommandType *)type __attribute__((swift_name("doCopy(type:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGConfigureDolDataCommandType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigureDolDataCommand.Type")))
@interface MPINGConfigureDolDataCommandType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGConfigureDolDataCommandType *amount __attribute__((swift_name("amount")));
@property (class, readonly) MPINGConfigureDolDataCommandType *online __attribute__((swift_name("online")));
@property (class, readonly) MPINGConfigureDolDataCommandType *response __attribute__((swift_name("response")));
@property (class, readonly) MPINGConfigureDolDataCommandType *contactlessresponse __attribute__((swift_name("contactlessresponse")));
@property (class, readonly) MPINGConfigureDolDataCommandType *contactlessonline __attribute__((swift_name("contactlessonline")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGConfigureDolDataCommandType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t p2 __attribute__((swift_name("p2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigureUserInterfaceOptionsCommand")))
@interface MPINGConfigureUserInterfaceOptionsCommand : MPINGRamBaseCommand
- (instancetype)initWithLocale:(MPINGLocale *)locale presentCardTimeout:(double)presentCardTimeout __attribute__((swift_name("init(locale:presentCardTimeout:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGLocale *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (MPINGConfigureUserInterfaceOptionsCommand *)doCopyLocale:(MPINGLocale *)locale presentCardTimeout:(double)presentCardTimeout __attribute__((swift_name("doCopy(locale:presentCardTimeout:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGLocale *locale __attribute__((swift_name("locale")));
@property (readonly) double presentCardTimeout __attribute__((swift_name("presentCardTimeout")));
@end;

__attribute__((swift_name("DetectCardResponse")))
@interface MPINGDetectCardResponse : KotlinBase <MPINGResponse>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectCardResponse.Inserted")))
@interface MPINGDetectCardResponseInserted : MPINGDetectCardResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inserted __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectCardResponse.Swiped")))
@interface MPINGDetectCardResponseSwiped : MPINGDetectCardResponse
- (instancetype)initWithTrack2:(MPINGHexString *)track2 __attribute__((swift_name("init(track2:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGDetectCardResponseSwiped *)doCopyTrack2:(MPINGHexString *)track2 __attribute__((swift_name("doCopy(track2:)")));
@property (readonly) MPINGHexString *track2 __attribute__((swift_name("track2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectCardResponse.KeyPressed")))
@interface MPINGDetectCardResponseKeyPressed : MPINGDetectCardResponse
- (instancetype)initWithKey:(int8_t)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int8_t)component1 __attribute__((swift_name("component1()")));
- (MPINGDetectCardResponseKeyPressed *)doCopyKey:(int8_t)key __attribute__((swift_name("doCopy(key:)")));
@property (readonly) int8_t key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayBitmapCommand")))
@interface MPINGDisplayBitmapCommand : MPINGRamBaseCommand
- (instancetype)initWithPath:(NSString *)path __attribute__((swift_name("init(path:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGDisplayBitmapCommand *)doCopyPath:(NSString *)path __attribute__((swift_name("doCopy(path:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("DisplayControlCommand")))
@interface MPINGDisplayControlCommand : MPINGRamBaseCommand
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TurnBacklightOffCommand")))
@interface MPINGTurnBacklightOffCommand : MPINGDisplayControlCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)turnBacklightOffCommand __attribute__((swift_name("init()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TurnBacklightOnCommand")))
@interface MPINGTurnBacklightOnCommand : MPINGDisplayControlCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)turnBacklightOnCommand __attribute__((swift_name("init()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClearDisplayCommand")))
@interface MPINGClearDisplayCommand : MPINGDisplayControlCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)clearDisplayCommand __attribute__((swift_name("init()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetDisplayModeCommand")))
@interface MPINGSetDisplayModeCommand : MPINGDisplayControlCommand
- (instancetype)initWithMode:(MPINGSetDisplayModeCommandMode *)mode __attribute__((swift_name("init(mode:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetDisplayModeCommand.Mode")))
@interface MPINGSetDisplayModeCommandMode : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGSetDisplayModeCommandMode *lines4columns16 __attribute__((swift_name("lines4columns16")));
@property (class, readonly) MPINGSetDisplayModeCommandMode *lines8columns16 __attribute__((swift_name("lines8columns16")));
@property (class, readonly) MPINGSetDisplayModeCommandMode *lines8columns21 __attribute__((swift_name("lines8columns21")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGSetDisplayModeCommandMode *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBacklightMode")))
@interface MPINGSetBacklightMode : MPINGDisplayControlCommand
- (instancetype)initWithStateAtStartup:(MPINGSetBacklightModeState *)stateAtStartup maxLevel:(MPINGSetBacklightModeMaxLevel *)maxLevel __attribute__((swift_name("init(stateAtStartup:maxLevel:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBacklightMode.State")))
@interface MPINGSetBacklightModeState : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGSetBacklightModeState *on __attribute__((swift_name("on")));
@property (class, readonly) MPINGSetBacklightModeState *off __attribute__((swift_name("off")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGSetBacklightModeState *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetBacklightMode.MaxLevel")))
@interface MPINGSetBacklightModeMaxLevel : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGSetBacklightModeMaxLevel *percent50 __attribute__((swift_name("percent50")));
@property (class, readonly) MPINGSetBacklightModeMaxLevel *percent75 __attribute__((swift_name("percent75")));
@property (class, readonly) MPINGSetBacklightModeMaxLevel *percent100 __attribute__((swift_name("percent100")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGSetBacklightModeMaxLevel *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayStyledTextCommand")))
@interface MPINGDisplayStyledTextCommand : MPINGRamBaseCommand
- (instancetype)initWithContent:(NSArray<MPINGDisplayStyledTextCommandLine *> *)content title:(MPINGDisplayStyledTextCommandLine *)title __attribute__((swift_name("init(content:title:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSArray<MPINGDisplayStyledTextCommandLine *> *)component1 __attribute__((swift_name("component1()")));
- (MPINGDisplayStyledTextCommandLine *)component2 __attribute__((swift_name("component2()")));
- (MPINGDisplayStyledTextCommand *)doCopyContent:(NSArray<MPINGDisplayStyledTextCommandLine *> *)content title:(MPINGDisplayStyledTextCommandLine *)title __attribute__((swift_name("doCopy(content:title:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MPINGDisplayStyledTextCommandLine *> *content __attribute__((swift_name("content")));
@property (readonly) MPINGDisplayStyledTextCommandLine *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayStyledTextCommand.Line")))
@interface MPINGDisplayStyledTextCommandLine : KotlinBase
- (instancetype)initWithMessage:(NSString *)message fontSize:(MPINGDisplayStyledTextCommandLineFontSize *)fontSize __attribute__((swift_name("init(message:fontSize:)"))) __attribute__((objc_designated_initializer));
- (MPINGKotlinByteArray *)serialize __attribute__((swift_name("serialize()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGDisplayStyledTextCommandLineFontSize *)component2 __attribute__((swift_name("component2()")));
- (MPINGDisplayStyledTextCommandLine *)doCopyMessage:(NSString *)message fontSize:(MPINGDisplayStyledTextCommandLineFontSize *)fontSize __attribute__((swift_name("doCopy(message:fontSize:)")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) MPINGDisplayStyledTextCommandLineFontSize *fontSize __attribute__((swift_name("fontSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayStyledTextCommand.LineFontSize")))
@interface MPINGDisplayStyledTextCommandLineFontSize : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGDisplayStyledTextCommandLineFontSize *small __attribute__((swift_name("small")));
@property (class, readonly) MPINGDisplayStyledTextCommandLineFontSize *medium __attribute__((swift_name("medium")));
@property (class, readonly) MPINGDisplayStyledTextCommandLineFontSize *large __attribute__((swift_name("large")));
@property (class, readonly) MPINGDisplayStyledTextCommandLineFontSize *xlarge __attribute__((swift_name("xlarge")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGDisplayStyledTextCommandLineFontSize *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t byte __attribute__((swift_name("byte")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayStyledTextCommand.LineCompanion")))
@interface MPINGDisplayStyledTextCommandLineCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) MPINGDisplayStyledTextCommandLine *BlankLine __attribute__((swift_name("BlankLine")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayStyledTextCommand.Companion")))
@interface MPINGDisplayStyledTextCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGDisplayStyledTextCommand *)displayLocale:(MPINGLocale *)locale prompt:(MPINGLocalizationPrompt *)prompt arguments:(MPINGKotlinArray *)arguments __attribute__((swift_name("display(locale:prompt:arguments:)")));
- (MPINGDisplayStyledTextCommand *)displayLines:(id)lines __attribute__((swift_name("display(lines:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayTextCommand")))
@interface MPINGDisplayTextCommand : MPINGRamBaseCommand
- (instancetype)initWithRow:(int32_t)row message:(NSString *)message __attribute__((swift_name("init(row:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGDisplayTextCommand *)doCopyRow:(int32_t)row message:(NSString *)message __attribute__((swift_name("doCopy(row:message:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmvTransactionDataCommand")))
@interface MPINGEmvTransactionDataCommand : MPINGRamBaseCommand
- (instancetype)initWithPinEntryListener:(id<MPINGPinInputProgressReporter>)pinEntryListener __attribute__((swift_name("init(pinEntryListener:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (void)processProgressMessageResponseData:(MPINGHexString *)responseData __attribute__((swift_name("processProgressMessage(responseData:)")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmvTransactionDataCommand.Companion")))
@interface MPINGEmvTransactionDataCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("EmvTransactionDataResponse")))
@interface MPINGEmvTransactionDataResponse : KotlinBase <MPINGResponse>
@property (readonly) id tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmvTransactionDataResponse.TransactionApproved")))
@interface MPINGEmvTransactionDataResponseTransactionApproved : MPINGEmvTransactionDataResponse
- (instancetype)initWithTlv:(id)tlv __attribute__((swift_name("init(tlv:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmvTransactionDataResponse.TransactionDeclined")))
@interface MPINGEmvTransactionDataResponseTransactionDeclined : MPINGEmvTransactionDataResponse
- (instancetype)initWithTlv:(id)tlv __attribute__((swift_name("init(tlv:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmvTransactionDataResponse.PleaseCheckDocumentationForThisOne")))
@interface MPINGEmvTransactionDataResponsePleaseCheckDocumentationForThisOne : MPINGEmvTransactionDataResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pleaseCheckDocumentationForThisOne __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmvTransactionDataResponse.CardRequestsOnlineAuth")))
@interface MPINGEmvTransactionDataResponseCardRequestsOnlineAuth : MPINGEmvTransactionDataResponse
- (instancetype)initWithTlv:(id)tlv __attribute__((swift_name("init(tlv:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptedDataStatusCommand")))
@interface MPINGEncryptedDataStatusCommand : MPINGRamBaseCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encryptedDataStatusCommand __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (void)processProgressMessageResponseData:(MPINGHexString *)responseData __attribute__((swift_name("processProgressMessage(responseData:)")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptedDataStatusCommand.DataMode")))
@interface MPINGEncryptedDataStatusCommandDataMode : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGEncryptedDataStatusCommandDataMode *encrypted __attribute__((swift_name("encrypted")));
@property (class, readonly) MPINGEncryptedDataStatusCommandDataMode *encryptedrelaxed __attribute__((swift_name("encryptedrelaxed")));
@property (class, readonly) MPINGEncryptedDataStatusCommandDataMode *clear __attribute__((swift_name("clear")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGEncryptedDataStatusCommandDataMode *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptedDataStatusResponse")))
@interface MPINGEncryptedDataStatusResponse : KotlinBase <MPINGResponse>
- (instancetype)initWithKsnWithExtension:(MPINGHexString *)ksnWithExtension __attribute__((swift_name("init(ksnWithExtension:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGEncryptedDataStatusResponse *)doCopyKsnWithExtension:(MPINGHexString *)ksnWithExtension __attribute__((swift_name("doCopy(ksnWithExtension:)")));
@property (readonly) MPINGHexString *ksnWithExtension __attribute__((swift_name("ksnWithExtension")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericCommand")))
@interface MPINGGenericCommand : MPINGRamBaseCommand
- (instancetype)initWithData:(MPINGHexString *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGGenericCommand *)doCopyData:(MPINGHexString *)data __attribute__((swift_name("doCopy(data:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGHexString *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFeaturesTlvCommand")))
@interface MPINGGetFeaturesTlvCommand : MPINGRamBaseCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getFeaturesTlvCommand __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TerminalVariables")))
@interface MPINGTerminalVariables : KotlinBase
- (instancetype)initWithTerminalConfigurationVersion:(MPINGHexString * _Nullable)terminalConfigurationVersion terminalGraphicsVersion:(MPINGHexString * _Nullable)terminalGraphicsVersion terminalKeysAndAidsVersion:(MPINGHexString * _Nullable)terminalKeysAndAidsVersion transactionSequenceCounter:(MPINGLong * _Nullable)transactionSequenceCounter __attribute__((swift_name("init(terminalConfigurationVersion:terminalGraphicsVersion:terminalKeysAndAidsVersion:transactionSequenceCounter:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MPINGLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MPINGTerminalVariables *)doCopyTerminalConfigurationVersion:(MPINGHexString * _Nullable)terminalConfigurationVersion terminalGraphicsVersion:(MPINGHexString * _Nullable)terminalGraphicsVersion terminalKeysAndAidsVersion:(MPINGHexString * _Nullable)terminalKeysAndAidsVersion transactionSequenceCounter:(MPINGLong * _Nullable)transactionSequenceCounter __attribute__((swift_name("doCopy(terminalConfigurationVersion:terminalGraphicsVersion:terminalKeysAndAidsVersion:transactionSequenceCounter:)")));
@property (readonly) MPINGHexString * _Nullable terminalConfigurationVersion __attribute__((swift_name("terminalConfigurationVersion")));
@property (readonly) MPINGHexString * _Nullable terminalGraphicsVersion __attribute__((swift_name("terminalGraphicsVersion")));
@property (readonly) MPINGHexString * _Nullable terminalKeysAndAidsVersion __attribute__((swift_name("terminalKeysAndAidsVersion")));
@property (readonly) MPINGLong * _Nullable transactionSequenceCounter __attribute__((swift_name("transactionSequenceCounter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFeaturesTlvResponse")))
@interface MPINGGetFeaturesTlvResponse : KotlinBase <MPINGResponse>
- (instancetype)initWithVariables:(MPINGTerminalVariables *)variables __attribute__((swift_name("init(variables:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGTerminalVariables *)component1 __attribute__((swift_name("component1()")));
- (MPINGGetFeaturesTlvResponse *)doCopyVariables:(MPINGTerminalVariables *)variables __attribute__((swift_name("doCopy(variables:)")));
@property (readonly) MPINGTerminalVariables *variables __attribute__((swift_name("variables")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFeaturesTlvResponse.Companion")))
@interface MPINGGetFeaturesTlvResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGGetFeaturesTlvResponse *)fromTlvItems:(NSArray<MPINGTlvItem *> *)tlvItems __attribute__((swift_name("from(tlvItems:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeypadControlCommand")))
@interface MPINGKeypadControlCommand : MPINGRamBaseCommand
- (instancetype)initWithAmount:(MPINGAmount *)amount locale:(MPINGLocale *)locale __attribute__((swift_name("init(amount:locale:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGKeypadControlCommand *)doCopyAmount:(MPINGAmount *)amount locale:(MPINGLocale *)locale __attribute__((swift_name("doCopy(amount:locale:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeypadControlCommand.Companion")))
@interface MPINGKeypadControlCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t KSN_LENGTH __attribute__((swift_name("KSN_LENGTH")));
@property (readonly) int32_t PIN_BLOCK_LENGTH __attribute__((swift_name("PIN_BLOCK_LENGTH")));
@end;

__attribute__((swift_name("KeypadControlResponse")))
@interface MPINGKeypadControlResponse : KotlinBase <MPINGResponse>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeypadControlResponse.Success")))
@interface MPINGKeypadControlResponseSuccess : MPINGKeypadControlResponse
- (instancetype)initWithPinBlock:(MPINGHexString *)pinBlock ksn:(MPINGHexString *)ksn __attribute__((swift_name("init(pinBlock:ksn:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGKeypadControlResponseSuccess *)doCopyPinBlock:(MPINGHexString *)pinBlock ksn:(MPINGHexString *)ksn __attribute__((swift_name("doCopy(pinBlock:ksn:)")));
@property (readonly) MPINGHexString *pinBlock __attribute__((swift_name("pinBlock")));
@property (readonly) MPINGHexString *ksn __attribute__((swift_name("ksn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeypadControlResponse.Cancel")))
@interface MPINGKeypadControlResponseCancel : MPINGKeypadControlResponse
- (instancetype)initWithCancelReason:(MPINGAccessoryCardProcessingModulePinCancelReason *)cancelReason __attribute__((swift_name("init(cancelReason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModulePinCancelReason *)component1 __attribute__((swift_name("component1()")));
- (MPINGKeypadControlResponseCancel *)doCopyCancelReason:(MPINGAccessoryCardProcessingModulePinCancelReason *)cancelReason __attribute__((swift_name("doCopy(cancelReason:)")));
@property (readonly) MPINGAccessoryCardProcessingModulePinCancelReason *cancelReason __attribute__((swift_name("cancelReason")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RamBaseCommand.Companion")))
@interface MPINGRamBaseCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadBuildNumberCommand")))
@interface MPINGReadBuildNumberCommand : MPINGRamBaseCommand
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadBuildNumberResponse")))
@interface MPINGReadBuildNumberResponse : KotlinBase <MPINGResponse>
- (instancetype)initWithBuildNumber:(NSString *)buildNumber __attribute__((swift_name("init(buildNumber:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGReadBuildNumberResponse *)doCopyBuildNumber:(NSString *)buildNumber __attribute__((swift_name("doCopy(buildNumber:)")));
@property (readonly) NSString *buildNumber __attribute__((swift_name("buildNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadCapabilitiesCommand")))
@interface MPINGReadCapabilitiesCommand : MPINGRamBaseCommand
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadCapabilitiesResponse")))
@interface MPINGReadCapabilitiesResponse : KotlinBase <MPINGResponse>
- (instancetype)initWithSerialNumber:(NSString *)serialNumber __attribute__((swift_name("init(serialNumber:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGReadCapabilitiesResponse *)doCopySerialNumber:(NSString *)serialNumber __attribute__((swift_name("doCopy(serialNumber:)")));
@property (readonly) NSString *serialNumber __attribute__((swift_name("serialNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadCapabilitiesResponse.Companion")))
@interface MPINGReadCapabilitiesResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGReadCapabilitiesResponse *)fromData:(MPINGHexString *)data __attribute__((swift_name("from(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadVersionCommand")))
@interface MPINGReadVersionCommand : MPINGRamBaseCommand
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadVersionResponse")))
@interface MPINGReadVersionResponse : KotlinBase <MPINGResponse>
- (instancetype)initWithHwIdentifier:(NSString *)hwIdentifier hwVersion:(MPINGReadVersionResponseHwVersion * _Nullable)hwVersion osVersion:(NSString *)osVersion softwareVersion:(NSString *)softwareVersion __attribute__((swift_name("init(hwIdentifier:hwVersion:osVersion:softwareVersion:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGReadVersionResponseHwVersion * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (MPINGReadVersionResponse *)doCopyHwIdentifier:(NSString *)hwIdentifier hwVersion:(MPINGReadVersionResponseHwVersion * _Nullable)hwVersion osVersion:(NSString *)osVersion softwareVersion:(NSString *)softwareVersion __attribute__((swift_name("doCopy(hwIdentifier:hwVersion:osVersion:softwareVersion:)")));
@property (readonly) NSString *hwIdentifier __attribute__((swift_name("hwIdentifier")));
@property (readonly) MPINGReadVersionResponseHwVersion * _Nullable hwVersion __attribute__((swift_name("hwVersion")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) NSString *softwareVersion __attribute__((swift_name("softwareVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadVersionResponse.HwVersion")))
@interface MPINGReadVersionResponseHwVersion : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGReadVersionResponseHwVersion *ipp350 __attribute__((swift_name("ipp350")));
@property (class, readonly) MPINGReadVersionResponseHwVersion *link2500 __attribute__((swift_name("link2500")));
@property (class, readonly) MPINGReadVersionResponseHwVersion *lane3000 __attribute__((swift_name("lane3000")));
@property (class, readonly) MPINGReadVersionResponseHwVersion *lane5000 __attribute__((swift_name("lane5000")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGReadVersionResponseHwVersion *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSSet<NSString *> *hwIdentifiers __attribute__((swift_name("hwIdentifiers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadVersionResponse.HwVersionCompanion")))
@interface MPINGReadVersionResponseHwVersionCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGReadVersionResponseHwVersion * _Nullable)fromHwIdentifierHwIdentifier:(NSString *)hwIdentifier __attribute__((swift_name("fromHwIdentifier(hwIdentifier:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadVersionResponse.Companion")))
@interface MPINGReadVersionResponseCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGReadVersionResponse *)fromData:(MPINGHexString *)data __attribute__((swift_name("from(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RevokePublicKeyCommand")))
@interface MPINGRevokePublicKeyCommand : MPINGRamBaseCommand
- (instancetype)initWithRegisteredApplicationProviderId:(MPINGHexString *)registeredApplicationProviderId keyIndex:(MPINGHexString *)keyIndex __attribute__((swift_name("init(registeredApplicationProviderId:keyIndex:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGRevokePublicKeyCommand *)doCopyRegisteredApplicationProviderId:(MPINGHexString *)registeredApplicationProviderId keyIndex:(MPINGHexString *)keyIndex __attribute__((swift_name("doCopy(registeredApplicationProviderId:keyIndex:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MPINGHexString *> *data __attribute__((swift_name("data")));
@property (readonly) MPINGHexString *registeredApplicationProviderId __attribute__((swift_name("registeredApplicationProviderId")));
@property (readonly) MPINGHexString *keyIndex __attribute__((swift_name("keyIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetDateTimeCommand")))
@interface MPINGSetDateTimeCommand : MPINGRamBaseCommand
- (instancetype)initWithDate:(MPINGDate *)date __attribute__((swift_name("init(date:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGDate *)component1 __attribute__((swift_name("component1()")));
- (MPINGSetDateTimeCommand *)doCopyDate:(MPINGDate *)date __attribute__((swift_name("doCopy(date:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGDate *date __attribute__((swift_name("date")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetEncryptionLevelCommand")))
@interface MPINGSetEncryptionLevelCommand : MPINGRamBaseCommand
- (instancetype)initWithLevel:(MPINGSetEncryptionLevelCommandLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGSetEncryptionLevelCommand *)doCopyLevel:(MPINGSetEncryptionLevelCommandLevel *)level __attribute__((swift_name("doCopy(level:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetEncryptionLevelCommand.Level")))
@interface MPINGSetEncryptionLevelCommandLevel : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGSetEncryptionLevelCommandLevel *relaxedtestdevice __attribute__((swift_name("relaxedtestdevice")));
@property (class, readonly) MPINGSetEncryptionLevelCommandLevel *relaxedlivedevice __attribute__((swift_name("relaxedlivedevice")));
@property (class, readonly) MPINGSetEncryptionLevelCommandLevel *full __attribute__((swift_name("full")));
@property (class, readonly) MPINGSetEncryptionLevelCommandLevel *relaxedextended __attribute__((swift_name("relaxedextended")));
@property (class, readonly) MPINGSetEncryptionLevelCommandLevel *extended __attribute__((swift_name("extended")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGSetEncryptionLevelCommandLevel *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t p2 __attribute__((swift_name("p2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetFeaturesTlvCommand")))
@interface MPINGSetFeaturesTlvCommand : MPINGRamBaseCommand
- (instancetype)initWithVariables:(MPINGTerminalVariables *)variables __attribute__((swift_name("init(variables:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGTerminalVariables *)component1 __attribute__((swift_name("component1()")));
- (MPINGSetFeaturesTlvCommand *)doCopyVariables:(MPINGTerminalVariables *)variables __attribute__((swift_name("doCopy(variables:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGTerminalVariables *variables __attribute__((swift_name("variables")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionCommand")))
@interface MPINGStartTransactionCommand : MPINGRamBaseCommand
- (instancetype)initWithTransactionInfo:(MPINGTransactionInfo *)transactionInfo interfaces:(NSSet<MPINGAccessoryCardProcessingModuleActiveInterface *> *)interfaces date:(MPINGDate *)date transactionSequenceCounter:(int64_t)transactionSequenceCounter transactionConfiguration:(MPINGStartTransactionConfiguration *)transactionConfiguration __attribute__((swift_name("init(transactionInfo:interfaces:date:transactionSequenceCounter:transactionConfiguration:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGStartTransactionCommand *)doCopyTransactionInfo:(MPINGTransactionInfo *)transactionInfo interfaces:(NSSet<MPINGAccessoryCardProcessingModuleActiveInterface *> *)interfaces date:(MPINGDate *)date transactionSequenceCounter:(int64_t)transactionSequenceCounter transactionConfiguration:(MPINGStartTransactionConfiguration *)transactionConfiguration __attribute__((swift_name("doCopy(transactionInfo:interfaces:date:transactionSequenceCounter:transactionConfiguration:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionCommand.Companion")))
@interface MPINGStartTransactionCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((swift_name("StartTransactionResponse")))
@interface MPINGStartTransactionResponse : KotlinBase <MPINGResponse>
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.AmountDol")))
@interface MPINGStartTransactionResponseAmountDol : MPINGStartTransactionResponse
- (instancetype)initWithTlv:(id)tlv __attribute__((swift_name("init(tlv:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id)component1 __attribute__((swift_name("component1()")));
- (MPINGStartTransactionResponseAmountDol *)doCopyTlv:(id)tlv __attribute__((swift_name("doCopy(tlv:)")));
@property (readonly) id tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.AidsList")))
@interface MPINGStartTransactionResponseAidsList : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aidsList __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.ContactlessCompletedOffline")))
@interface MPINGStartTransactionResponseContactlessCompletedOffline : MPINGStartTransactionResponse
- (instancetype)initWithTlv:(id)tlv __attribute__((swift_name("init(tlv:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id)component1 __attribute__((swift_name("component1()")));
- (MPINGStartTransactionResponseContactlessCompletedOffline *)doCopyTlv:(id)tlv __attribute__((swift_name("doCopy(tlv:)")));
@property (readonly) id tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.ContactlessRequiresOnlineAuth")))
@interface MPINGStartTransactionResponseContactlessRequiresOnlineAuth : MPINGStartTransactionResponse
- (instancetype)initWithTlv:(id)tlv __attribute__((swift_name("init(tlv:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id)component1 __attribute__((swift_name("component1()")));
- (MPINGStartTransactionResponseContactlessRequiresOnlineAuth *)doCopyTlv:(id)tlv __attribute__((swift_name("doCopy(tlv:)")));
@property (readonly) id tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.KeyedCardData")))
@interface MPINGStartTransactionResponseKeyedCardData : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)keyedCardData __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.MifareCardData")))
@interface MPINGStartTransactionResponseMifareCardData : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mifareCardData __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.AlternativeCardIcc")))
@interface MPINGStartTransactionResponseAlternativeCardIcc : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alternativeCardIcc __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.OdcvmRequested")))
@interface MPINGStartTransactionResponseOdcvmRequested : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)odcvmRequested __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.Aborted")))
@interface MPINGStartTransactionResponseAborted : MPINGStartTransactionResponse
- (instancetype)initWithReason:(MPINGAccessoryCardProcessingModuleCancelReason *)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModuleCancelReason *)component1 __attribute__((swift_name("component1()")));
- (MPINGStartTransactionResponseAborted *)doCopyReason:(MPINGAccessoryCardProcessingModuleCancelReason *)reason __attribute__((swift_name("doCopy(reason:)")));
@property (readonly) MPINGAccessoryCardProcessingModuleCancelReason *reason __attribute__((swift_name("reason")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.Timeout")))
@interface MPINGStartTransactionResponseTimeout : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timeout __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.TerminalCrashed")))
@interface MPINGStartTransactionResponseTerminalCrashed : MPINGStartTransactionResponse
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalCrashed __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.EmvError")))
@interface MPINGStartTransactionResponseEmvError : MPINGStartTransactionResponse
- (instancetype)initWithErrorType:(MPINGAccessoryCardProcessingModuleEmvErrorType *)errorType __attribute__((swift_name("init(errorType:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModuleEmvErrorType *)component1 __attribute__((swift_name("component1()")));
- (MPINGStartTransactionResponseEmvError *)doCopyErrorType:(MPINGAccessoryCardProcessingModuleEmvErrorType *)errorType __attribute__((swift_name("doCopy(errorType:)")));
@property (readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *errorType __attribute__((swift_name("errorType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.Magstripe")))
@interface MPINGStartTransactionResponseMagstripe : MPINGStartTransactionResponse
@property (readonly) MPINGHexString *track2 __attribute__((swift_name("track2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionResponse.MagstripeCompanion")))
@interface MPINGStartTransactionResponseMagstripeCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGStartTransactionResponseMagstripe * _Nullable)fromRawResponse:(MPINGHexString *)rawResponse __attribute__((swift_name("from(rawResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopTransactionCommand")))
@interface MPINGStopTransactionCommand : MPINGRamBaseCommand
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)stopTransactionCommand __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitAidCommand")))
@interface MPINGSubmitAidCommand : MPINGRamBaseCommand
- (instancetype)initWithType:(MPINGSubmitAidCommandType *)type aid:(MPINGHexString *)aid applicationVersion:(MPINGHexString *)applicationVersion minApplicationVersion:(MPINGHexString *)minApplicationVersion priorityIndex:(int32_t)priorityIndex applicationSelectionFlags:(MPINGHexString *)applicationSelectionFlags contactlessFloorLimit:(MPINGHexString * _Nullable)contactlessFloorLimit contactlessCvmLimit:(MPINGHexString * _Nullable)contactlessCvmLimit contactlessTransactionLimit:(MPINGHexString * _Nullable)contactlessTransactionLimit contactlessTerminalCapabilities:(MPINGHexString * _Nullable)contactlessTerminalCapabilities tlvData:(MPINGHexString *)tlvData __attribute__((swift_name("init(type:aid:applicationVersion:minApplicationVersion:priorityIndex:applicationSelectionFlags:contactlessFloorLimit:contactlessCvmLimit:contactlessTransactionLimit:contactlessTerminalCapabilities:tlvData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGSubmitAidCommandType *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString *)component3 __attribute__((swift_name("component3()")));
- (MPINGHexString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (MPINGHexString *)component6 __attribute__((swift_name("component6()")));
- (MPINGHexString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MPINGHexString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MPINGHexString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MPINGHexString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MPINGHexString *)component11 __attribute__((swift_name("component11()")));
- (MPINGSubmitAidCommand *)doCopyType:(MPINGSubmitAidCommandType *)type aid:(MPINGHexString *)aid applicationVersion:(MPINGHexString *)applicationVersion minApplicationVersion:(MPINGHexString *)minApplicationVersion priorityIndex:(int32_t)priorityIndex applicationSelectionFlags:(MPINGHexString *)applicationSelectionFlags contactlessFloorLimit:(MPINGHexString * _Nullable)contactlessFloorLimit contactlessCvmLimit:(MPINGHexString * _Nullable)contactlessCvmLimit contactlessTransactionLimit:(MPINGHexString * _Nullable)contactlessTransactionLimit contactlessTerminalCapabilities:(MPINGHexString * _Nullable)contactlessTerminalCapabilities tlvData:(MPINGHexString *)tlvData __attribute__((swift_name("doCopy(type:aid:applicationVersion:minApplicationVersion:priorityIndex:applicationSelectionFlags:contactlessFloorLimit:contactlessCvmLimit:contactlessTransactionLimit:contactlessTerminalCapabilities:tlvData:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MPINGSubmitAidCommandType *type __attribute__((swift_name("type")));
@property (readonly) MPINGHexString *aid __attribute__((swift_name("aid")));
@property (readonly) MPINGHexString *applicationVersion __attribute__((swift_name("applicationVersion")));
@property (readonly) MPINGHexString *minApplicationVersion __attribute__((swift_name("minApplicationVersion")));
@property (readonly) int32_t priorityIndex __attribute__((swift_name("priorityIndex")));
@property (readonly) MPINGHexString *applicationSelectionFlags __attribute__((swift_name("applicationSelectionFlags")));
@property (readonly) MPINGHexString * _Nullable contactlessFloorLimit __attribute__((swift_name("contactlessFloorLimit")));
@property (readonly) MPINGHexString * _Nullable contactlessCvmLimit __attribute__((swift_name("contactlessCvmLimit")));
@property (readonly) MPINGHexString * _Nullable contactlessTransactionLimit __attribute__((swift_name("contactlessTransactionLimit")));
@property (readonly) MPINGHexString * _Nullable contactlessTerminalCapabilities __attribute__((swift_name("contactlessTerminalCapabilities")));
@property (readonly) MPINGHexString *tlvData __attribute__((swift_name("tlvData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitAidCommand.Type")))
@interface MPINGSubmitAidCommandType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGSubmitAidCommandType *contactless32bit __attribute__((swift_name("contactless32bit")));
@property (class, readonly) MPINGSubmitAidCommandType *contactwithtlvdata __attribute__((swift_name("contactwithtlvdata")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGSubmitAidCommandType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t p2 __attribute__((swift_name("p2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitAidCommand.Companion")))
@interface MPINGSubmitAidCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGSubmitAidCommand *)contactlessConfiguration:(MPINGContactlessConfiguration *)configuration __attribute__((swift_name("contactless(configuration:)")));
- (MPINGSubmitAidCommand *)contactConfiguration:(MPINGContactConfiguration *)configuration __attribute__((swift_name("contact(configuration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitPublicKeyCommand")))
@interface MPINGSubmitPublicKeyCommand : MPINGRamBaseCommand
- (instancetype)initWithRid:(MPINGHexString *)rid index:(MPINGHexString *)index modulus:(MPINGHexString *)modulus exponent:(MPINGHexString *)exponent checksum:(MPINGHexString *)checksum __attribute__((swift_name("init(rid:index:modulus:exponent:checksum:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResultValue *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString *)component3 __attribute__((swift_name("component3()")));
- (MPINGHexString *)component4 __attribute__((swift_name("component4()")));
- (MPINGHexString *)component5 __attribute__((swift_name("component5()")));
- (MPINGSubmitPublicKeyCommand *)doCopyRid:(MPINGHexString *)rid index:(MPINGHexString *)index modulus:(MPINGHexString *)modulus exponent:(MPINGHexString *)exponent checksum:(MPINGHexString *)checksum __attribute__((swift_name("doCopy(rid:index:modulus:exponent:checksum:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<MPINGHexString *> *data __attribute__((swift_name("data")));
@property (readonly) MPINGHexString *rid __attribute__((swift_name("rid")));
@property (readonly) MPINGHexString *index __attribute__((swift_name("index")));
@property (readonly) MPINGHexString *modulus __attribute__((swift_name("modulus")));
@property (readonly) MPINGHexString *exponent __attribute__((swift_name("exponent")));
@property (readonly) MPINGHexString *checksum __attribute__((swift_name("checksum")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubmitPublicKeyCommand.Companion")))
@interface MPINGSubmitPublicKeyCommandCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGSubmitPublicKeyCommand *)capkeyConfiguration:(MPINGPublicKeyConfiguration *)configuration __attribute__((swift_name("capkey(configuration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyPress")))
@interface MPINGKeyPress : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGKeyPress *enter __attribute__((swift_name("enter")));
@property (class, readonly) MPINGKeyPress *cancel __attribute__((swift_name("cancel")));
@property (class, readonly) MPINGKeyPress *clear __attribute__((swift_name("clear")));
@property (class, readonly) MPINGKeyPress *f1 __attribute__((swift_name("f1")));
@property (class, readonly) MPINGKeyPress *f2 __attribute__((swift_name("f2")));
@property (class, readonly) MPINGKeyPress *f3 __attribute__((swift_name("f3")));
@property (class, readonly) MPINGKeyPress *f4 __attribute__((swift_name("f4")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGKeyPress *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitForEventCommand")))
@interface MPINGWaitForEventCommand : MPINGRamBaseCommand
- (instancetype)initWithEvents:(NSSet<MPINGWaitForEventCommandEvent *> *)events timeout:(double)timeout __attribute__((swift_name("init(events:timeout:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MPINGHexString *)serialize __attribute__((swift_name("serialize()")));
- (MPINGResult *)handleSuccessfulResponseResponseData:(MPINGHexString *)responseData __attribute__((swift_name("handleSuccessfulResponse(responseData:)")));
- (MPINGResult *)handleErrorResponseResponseData:(MPINGHexString *)responseData sw1sw2:(MPINGResponseCode *)sw1sw2 __attribute__((swift_name("handleErrorResponse(responseData:sw1sw2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGWaitForEventCommand *)doCopyEvents:(NSSet<MPINGWaitForEventCommandEvent *> *)events timeout:(double)timeout __attribute__((swift_name("doCopy(events:timeout:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitForEventCommand.Event")))
@interface MPINGWaitForEventCommandEvent : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGWaitForEventCommandEvent *cardinsert __attribute__((swift_name("cardinsert")));
@property (class, readonly) MPINGWaitForEventCommandEvent *cardswipe __attribute__((swift_name("cardswipe")));
@property (class, readonly) MPINGWaitForEventCommandEvent *keypress __attribute__((swift_name("keypress")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGWaitForEventCommandEvent *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t bitFlag __attribute__((swift_name("bitFlag")));
@end;

__attribute__((swift_name("ConfigurationFactory")))
@protocol MPINGConfigurationFactory
@required
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactConfiguration")))
@interface MPINGContactConfiguration : KotlinBase
- (instancetype)initWithAid:(MPINGHexString *)aid applicationVersion:(MPINGHexString *)applicationVersion terminalCapabilities:(MPINGHexString *)terminalCapabilities tacDefault:(MPINGHexString *)tacDefault tacDenial:(MPINGHexString *)tacDenial tacOnline:(MPINGHexString *)tacOnline tlvData:(id)tlvData __attribute__((swift_name("init(aid:applicationVersion:terminalCapabilities:tacDefault:tacDenial:tacOnline:tlvData:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString *)component3 __attribute__((swift_name("component3()")));
- (MPINGHexString *)component4 __attribute__((swift_name("component4()")));
- (MPINGHexString *)component5 __attribute__((swift_name("component5()")));
- (MPINGHexString *)component6 __attribute__((swift_name("component6()")));
- (id)component7 __attribute__((swift_name("component7()")));
- (MPINGContactConfiguration *)doCopyAid:(MPINGHexString *)aid applicationVersion:(MPINGHexString *)applicationVersion terminalCapabilities:(MPINGHexString *)terminalCapabilities tacDefault:(MPINGHexString *)tacDefault tacDenial:(MPINGHexString *)tacDenial tacOnline:(MPINGHexString *)tacOnline tlvData:(id)tlvData __attribute__((swift_name("doCopy(aid:applicationVersion:terminalCapabilities:tacDefault:tacDenial:tacOnline:tlvData:)")));
@property (readonly) MPINGHexString *aid __attribute__((swift_name("aid")));
@property (readonly) MPINGHexString *applicationVersion __attribute__((swift_name("applicationVersion")));
@property (readonly) MPINGHexString *terminalCapabilities __attribute__((swift_name("terminalCapabilities")));
@property (readonly) MPINGHexString *tacDefault __attribute__((swift_name("tacDefault")));
@property (readonly) MPINGHexString *tacDenial __attribute__((swift_name("tacDenial")));
@property (readonly) MPINGHexString *tacOnline __attribute__((swift_name("tacOnline")));
@property (readonly) id tlvData __attribute__((swift_name("tlvData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContactlessConfiguration")))
@interface MPINGContactlessConfiguration : KotlinBase
- (instancetype)initWithAid:(MPINGHexString *)aid applicationVersion:(MPINGHexString *)applicationVersion cvmRequiredLimit:(MPINGHexString *)cvmRequiredLimit transactionLimit:(MPINGHexString *)transactionLimit terminalCapabilities:(MPINGHexString *)terminalCapabilities tlvData:(id)tlvData __attribute__((swift_name("init(aid:applicationVersion:cvmRequiredLimit:transactionLimit:terminalCapabilities:tlvData:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString *)component3 __attribute__((swift_name("component3()")));
- (MPINGHexString *)component4 __attribute__((swift_name("component4()")));
- (MPINGHexString *)component5 __attribute__((swift_name("component5()")));
- (id)component6 __attribute__((swift_name("component6()")));
- (MPINGContactlessConfiguration *)doCopyAid:(MPINGHexString *)aid applicationVersion:(MPINGHexString *)applicationVersion cvmRequiredLimit:(MPINGHexString *)cvmRequiredLimit transactionLimit:(MPINGHexString *)transactionLimit terminalCapabilities:(MPINGHexString *)terminalCapabilities tlvData:(id)tlvData __attribute__((swift_name("doCopy(aid:applicationVersion:cvmRequiredLimit:transactionLimit:terminalCapabilities:tlvData:)")));
@property (readonly) MPINGHexString *aid __attribute__((swift_name("aid")));
@property (readonly) MPINGHexString *applicationVersion __attribute__((swift_name("applicationVersion")));
@property (readonly) MPINGHexString *cvmRequiredLimit __attribute__((swift_name("cvmRequiredLimit")));
@property (readonly) MPINGHexString *transactionLimit __attribute__((swift_name("transactionLimit")));
@property (readonly) MPINGHexString *terminalCapabilities __attribute__((swift_name("terminalCapabilities")));
@property (readonly) id tlvData __attribute__((swift_name("tlvData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PublicKeyConfiguration")))
@interface MPINGPublicKeyConfiguration : KotlinBase
- (instancetype)initWithRid:(MPINGHexString *)rid index:(MPINGHexString *)index modulus:(MPINGHexString *)modulus checksum:(MPINGHexString *)checksum exponent:(MPINGHexString *)exponent __attribute__((swift_name("init(rid:index:modulus:checksum:exponent:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString *)component3 __attribute__((swift_name("component3()")));
- (MPINGHexString *)component4 __attribute__((swift_name("component4()")));
- (MPINGHexString *)component5 __attribute__((swift_name("component5()")));
- (MPINGPublicKeyConfiguration *)doCopyRid:(MPINGHexString *)rid index:(MPINGHexString *)index modulus:(MPINGHexString *)modulus checksum:(MPINGHexString *)checksum exponent:(MPINGHexString *)exponent __attribute__((swift_name("doCopy(rid:index:modulus:checksum:exponent:)")));
@property (readonly) MPINGHexString *rid __attribute__((swift_name("rid")));
@property (readonly) MPINGHexString *index __attribute__((swift_name("index")));
@property (readonly) MPINGHexString *modulus __attribute__((swift_name("modulus")));
@property (readonly) MPINGHexString *checksum __attribute__((swift_name("checksum")));
@property (readonly) MPINGHexString *exponent __attribute__((swift_name("exponent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartTransactionConfiguration")))
@interface MPINGStartTransactionConfiguration : KotlinBase
- (instancetype)initWithTerminalCountryCode:(int64_t)terminalCountryCode locale:(MPINGLocale *)locale terminalCapabilities:(MPINGHexString *)terminalCapabilities contactlessTransactionLimit:(MPINGHexString *)contactlessTransactionLimit __attribute__((swift_name("init(terminalCountryCode:locale:terminalCapabilities:contactlessTransactionLimit:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (MPINGLocale *)component2 __attribute__((swift_name("component2()")));
- (MPINGHexString *)component3 __attribute__((swift_name("component3()")));
- (MPINGHexString *)component4 __attribute__((swift_name("component4()")));
- (MPINGStartTransactionConfiguration *)doCopyTerminalCountryCode:(int64_t)terminalCountryCode locale:(MPINGLocale *)locale terminalCapabilities:(MPINGHexString *)terminalCapabilities contactlessTransactionLimit:(MPINGHexString *)contactlessTransactionLimit __attribute__((swift_name("doCopy(terminalCountryCode:locale:terminalCapabilities:contactlessTransactionLimit:)")));
@property (readonly) int64_t terminalCountryCode __attribute__((swift_name("terminalCountryCode")));
@property (readonly) MPINGLocale *locale __attribute__((swift_name("locale")));
@property (readonly) MPINGHexString *terminalCapabilities __attribute__((swift_name("terminalCapabilities")));
@property (readonly) MPINGHexString *contactlessTransactionLimit __attribute__((swift_name("contactlessTransactionLimit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TerminalConfiguration")))
@interface MPINGTerminalConfiguration : KotlinBase
- (instancetype)initWithCommandResponseHandler:(id<MPINGHandler>)commandResponseHandler __attribute__((swift_name("init(commandResponseHandler:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TerminalConfiguration.Companion")))
@interface MPINGTerminalConfigurationCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MPINGConfigurationFactory>)fromCurrencyCurrency:(MPINGCurrency *)currency test:(BOOL)test __attribute__((swift_name("fromCurrency(currency:test:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpressContactlessTlvs")))
@interface MPINGAmericanExpressContactlessTlvs : KotlinBase
- (instancetype)initWithTacDenial:(MPINGHexString *)tacDenial tacOnline:(MPINGHexString *)tacOnline tacDefault:(MPINGHexString *)tacDefault enhancedContactlessReaderCapabilities:(MPINGHexString *)enhancedContactlessReaderCapabilities __attribute__((swift_name("init(tacDenial:tacOnline:tacDefault:enhancedContactlessReaderCapabilities:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MPINGTlvPrimitiveItem *> *tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChinaUnionPayContactlessTlvs")))
@interface MPINGChinaUnionPayContactlessTlvs : KotlinBase
- (instancetype)initWithTerminalTransactionQualifiers:(MPINGHexString *)terminalTransactionQualifiers __attribute__((swift_name("init(terminalTransactionQualifiers:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MPINGTlvPrimitiveItem *> *tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscoverContactlessTlvs")))
@interface MPINGDiscoverContactlessTlvs : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<MPINGTlvPrimitiveItem *> *tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JcbContactlessTlvs")))
@interface MPINGJcbContactlessTlvs : KotlinBase
- (instancetype)initWithTacDenial:(MPINGHexString *)tacDenial tacOnline:(MPINGHexString *)tacOnline tacDefault:(MPINGHexString *)tacDefault merchantNameAndLocation:(NSString *)merchantNameAndLocation combinationOptions:(MPINGHexString *)combinationOptions terminalInterchangeProfile:(MPINGHexString *)terminalInterchangeProfile __attribute__((swift_name("init(tacDenial:tacOnline:tacDefault:merchantNameAndLocation:combinationOptions:terminalInterchangeProfile:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MPINGTlvPrimitiveItem *> *tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MastercardContactlessTlvs")))
@interface MPINGMastercardContactlessTlvs : KotlinBase
- (instancetype)initWithTerminalCapabilities:(MPINGHexString *)terminalCapabilities tacDenial:(MPINGHexString *)tacDenial tacOnline:(MPINGHexString *)tacOnline tacDefault:(MPINGHexString *)tacDefault terminalRiskManagementData:(MPINGHexString *)terminalRiskManagementData cvmCapabilityCvmRequired:(MPINGHexString *)cvmCapabilityCvmRequired cvmCapabilityNoCvmRequired:(MPINGHexString *)cvmCapabilityNoCvmRequired transactionLimitOdcvm:(MPINGHexString *)transactionLimitOdcvm __attribute__((swift_name("init(terminalCapabilities:tacDenial:tacOnline:tacDefault:terminalRiskManagementData:cvmCapabilityCvmRequired:cvmCapabilityNoCvmRequired:transactionLimitOdcvm:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<MPINGTlvPrimitiveItem *> *tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VisaContactlessTlvs")))
@interface MPINGVisaContactlessTlvs : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<MPINGTlvPrimitiveItem *> *tlv __attribute__((swift_name("tlv")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationFactoryEnglishLive")))
@interface MPINGConfigurationFactoryEnglishLive : KotlinBase <MPINGConfigurationFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationFactoryEnglishLive __attribute__((swift_name("init()")));
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationFactoryEnglishTest")))
@interface MPINGConfigurationFactoryEnglishTest : KotlinBase <MPINGConfigurationFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationFactoryEnglishTest __attribute__((swift_name("init()")));
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationFactoryFrenchLive")))
@interface MPINGConfigurationFactoryFrenchLive : KotlinBase <MPINGConfigurationFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationFactoryFrenchLive __attribute__((swift_name("init()")));
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationFactoryFrenchTest")))
@interface MPINGConfigurationFactoryFrenchTest : KotlinBase <MPINGConfigurationFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationFactoryFrenchTest __attribute__((swift_name("init()")));
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationFactorySwedishLive")))
@interface MPINGConfigurationFactorySwedishLive : KotlinBase <MPINGConfigurationFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationFactorySwedishLive __attribute__((swift_name("init()")));
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationFactorySwedishTest")))
@interface MPINGConfigurationFactorySwedishTest : KotlinBase <MPINGConfigurationFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configurationFactorySwedishTest __attribute__((swift_name("init()")));
@property (readonly) MPINGStartTransactionConfiguration *startTransaction __attribute__((swift_name("startTransaction")));
@property (readonly) NSArray<MPINGSubmitPublicKeyCommand *> *publicKeyCommands __attribute__((swift_name("publicKeyCommands")));
@property (readonly) NSArray<MPINGSubmitAidCommand *> *aidCommands __attribute__((swift_name("aidCommands")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeysLive")))
@interface MPINGKeysLive : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)keysLive __attribute__((swift_name("init()")));
@property (readonly) NSArray<MPINGPublicKeyConfiguration *> *all __attribute__((swift_name("all")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeysTest")))
@interface MPINGKeysTest : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)keysTest __attribute__((swift_name("init()")));
@property (readonly) NSArray<MPINGPublicKeyConfiguration *> *all __attribute__((swift_name("all")));
@end;

__attribute__((swift_name("KotlinIterable")))
@protocol MPINGKotlinIterable
@required
- (id<MPINGKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexString")))
@interface MPINGHexString : KotlinBase <MPINGKotlinIterable>
- (id<MPINGKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPINGHexString *)substringRange:(MPINGKotlinIntRange *)range __attribute__((swift_name("substring(range:)")));
- (MPINGHexString *)substringFromIndex:(int32_t)index __attribute__((swift_name("substringFrom(index:)")));
- (MPINGHexString *)substringUpToIndex:(int32_t)index __attribute__((swift_name("substringUpTo(index:)")));
- (MPINGKotlinPair *)splitFromStartLeftSideLength:(int32_t)leftSideLength __attribute__((swift_name("splitFromStart(leftSideLength:)")));
- (MPINGKotlinPair *)splitFromEndRightSideLength:(int32_t)rightSideLength __attribute__((swift_name("splitFromEnd(rightSideLength:)")));
- (MPINGKotlinPair * _Nullable)splitOnFirstDelimiter:(MPINGHexString *)delimiter __attribute__((swift_name("splitOnFirst(delimiter:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)toPrettyString __attribute__((swift_name("toPrettyString()")));
- (MPINGHexString *)stringAdjustedToLengthLength:(int32_t)length padByte:(int8_t)padByte paddingStyle:(MPINGPaddingStyle *)paddingStyle __attribute__((swift_name("stringAdjustedToLength(length:padByte:paddingStyle:)")));
- (MPINGHexString *)validateMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("validate(minLength:maxLength:)")));
- (MPINGHexString *)validateExactLength:(int32_t)exactLength __attribute__((swift_name("validate(exactLength:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (MPINGHexString *)plusRight:(MPINGHexString *)right __attribute__((swift_name("plus(right:)")));
- (MPINGHexString *)trimEndSuffix:(MPINGHexString *)suffix __attribute__((swift_name("trimEnd(suffix:)")));
- (BOOL)startsWithPrefix:(MPINGHexString *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (MPINGHexString *)doCopyStr:(NSString *)str orig:(NSString *)orig __attribute__((swift_name("doCopy(str:orig:)")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexString.Companion")))
@interface MPINGHexStringCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGHexString * _Nullable)createString:(NSString *)string __attribute__((swift_name("create(string:)")));
- (MPINGHexString *)fromAsciiString:(NSString *)string __attribute__((swift_name("fromAscii(string:)")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@property (readonly) MPINGHexString *empty __attribute__((swift_name("empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaddingStyle")))
@interface MPINGPaddingStyle : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGPaddingStyle *front __attribute__((swift_name("front")));
@property (class, readonly) MPINGPaddingStyle *back __attribute__((swift_name("back")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGPaddingStyle *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringBuffer")))
@interface MPINGHexStringBuffer : KotlinBase
- (instancetype)initWithHexString:(MPINGHexString *)hexString __attribute__((swift_name("init(hexString:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (MPINGHexString *)nextLength:(int32_t)length __attribute__((swift_name("next(length:)")));
- (MPINGHexString *)nextUpToLength:(int32_t)length __attribute__((swift_name("nextUpTo(length:)")));
- (MPINGHexString *)remaining __attribute__((swift_name("remaining()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringDelimiterBuffer")))
@interface MPINGHexStringDelimiterBuffer : KotlinBase
- (instancetype)initWithHexString:(MPINGHexString *)hexString delimiter:(MPINGHexString *)delimiter __attribute__((swift_name("init(hexString:delimiter:)"))) __attribute__((objc_designated_initializer));
- (MPINGHexString * _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Result")))
@interface MPINGResult : KotlinBase
- (MPINGResult *)andOther:(MPINGResult *)other f:(id _Nullable (^)(id _Nullable, id _Nullable))f __attribute__((swift_name("and(other:f:)")));
- (MPINGResult *)mapValueF:(id _Nullable (^)(id _Nullable))f __attribute__((swift_name("mapValue(f:)")));
- (MPINGResult *)flatMapValueF:(MPINGResult *(^)(id _Nullable))f __attribute__((swift_name("flatMapValue(f:)")));
- (MPINGResult *)mapErrorF:(id<MPINGMposError> (^)(id<MPINGMposError>))f __attribute__((swift_name("mapError(f:)")));
- (MPINGResult *)flatMapErrorF:(MPINGResultError *(^)(id<MPINGMposError>))f __attribute__((swift_name("flatMapError(f:)")));
- (MPINGResult *)ifIsErrorF:(void (^)(MPINGResultError *))f __attribute__((swift_name("ifIsError(f:)")));
- (MPINGResult *)ifIsValueF:(void (^)(MPINGResultValue *))f __attribute__((swift_name("ifIsValue(f:)")));
- (id _Nullable)unwrapValue __attribute__((swift_name("unwrapValue()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Value")))
@interface MPINGResultValue : MPINGResult
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGResultValue *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Error")))
@interface MPINGResultError : MPINGResult
- (instancetype)initWithError:(id<MPINGMposError>)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (MPINGResult *)andOther:(MPINGResult *)other f:(id _Nullable (^)(MPINGKotlinNothing *, id _Nullable))f __attribute__((swift_name("and(other:f:)")));
- (MPINGResult *)mapValueF:(id _Nullable (^)(MPINGKotlinNothing *))f __attribute__((swift_name("mapValue(f:)")));
- (MPINGResult *)flatMapValueF:(MPINGResult *(^)(MPINGKotlinNothing *))f __attribute__((swift_name("flatMapValue(f:)")));
- (MPINGKotlinNothing * _Nullable)unwrapValue __attribute__((swift_name("unwrapValue()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGMposError>)component1 __attribute__((swift_name("component1()")));
- (MPINGResultError *)doCopyError:(id<MPINGMposError>)error __attribute__((swift_name("doCopy(error:)")));
@property (readonly) id<MPINGMposError> error __attribute__((swift_name("error")));
@end;

__attribute__((swift_name("AccessoryBattery")))
@protocol MPINGAccessoryBattery
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryBatteryState")))
@interface MPINGAccessoryBatteryState : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryBatteryState *unplugged __attribute__((swift_name("unplugged")));
@property (class, readonly) MPINGAccessoryBatteryState *charging __attribute__((swift_name("charging")));
@property (class, readonly) MPINGAccessoryBatteryState *full __attribute__((swift_name("full")));
@property (class, readonly) MPINGAccessoryBatteryState *critical __attribute__((swift_name("critical")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryBatteryState *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryConnectionState")))
@interface MPINGAccessoryConnectionState : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryConnectionState *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGAccessoryConnectionState *connected __attribute__((swift_name("connected")));
@property (class, readonly) MPINGAccessoryConnectionState *connectedButUnavailable __attribute__((swift_name("connectedButUnavailable")));
@property (class, readonly) MPINGAccessoryConnectionState *configuringCommunicationLink __attribute__((swift_name("configuringCommunicationLink")));
@property (class, readonly) MPINGAccessoryConnectionState *disconnected __attribute__((swift_name("disconnected")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryConnectionState *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("AccessoryDetails")))
@protocol MPINGAccessoryDetails
@required
@property NSString *serialNumber __attribute__((swift_name("serialNumber")));
@property NSString *osVersion __attribute__((swift_name("osVersion")));
@property NSString *softwareVersion __attribute__((swift_name("softwareVersion")));
@end;

__attribute__((swift_name("AccessoryDetailsBuilder")))
@protocol MPINGAccessoryDetailsBuilder
@required
- (id<MPINGAccessoryDetails>)buildSerialNumber:(NSString *)serialNumber osVersion:(NSString *)osVersion softwareVersion:(NSString *)softwareVersion type:(NSString *)type __attribute__((swift_name("build(serialNumber:osVersion:softwareVersion:type:)")));
@end;

__attribute__((swift_name("AccessoryFamily")))
@interface MPINGAccessoryFamily : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.Mock")))
@interface MPINGAccessoryFamilyMock : MPINGAccessoryFamily
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mock __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.Miura")))
@interface MPINGAccessoryFamilyMiura : MPINGAccessoryFamily
- (instancetype)initWithType:(MPINGAccessoryFamilyMiuraType * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryFamilyMiuraType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryFamilyMiura *)doCopyType:(MPINGAccessoryFamilyMiuraType * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
@property (readonly) MPINGAccessoryFamilyMiuraType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.MiuraType")))
@interface MPINGAccessoryFamilyMiuraType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryFamilyMiuraType *shuttle __attribute__((swift_name("shuttle")));
@property (class, readonly) MPINGAccessoryFamilyMiuraType *m010 __attribute__((swift_name("m010")));
@property (class, readonly) MPINGAccessoryFamilyMiuraType *m007 __attribute__((swift_name("m007")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryFamilyMiuraType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.VerifoneESeries")))
@interface MPINGAccessoryFamilyVerifoneESeries : MPINGAccessoryFamily
- (instancetype)initWithType:(MPINGAccessoryFamilyVerifoneESeriesType * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryFamilyVerifoneESeriesType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryFamilyVerifoneESeries *)doCopyType:(MPINGAccessoryFamilyVerifoneESeriesType * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
@property (readonly) MPINGAccessoryFamilyVerifoneESeriesType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.VerifoneESeriesType")))
@interface MPINGAccessoryFamilyVerifoneESeriesType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryFamilyVerifoneESeriesType *e315 __attribute__((swift_name("e315")));
@property (class, readonly) MPINGAccessoryFamilyVerifoneESeriesType *e335 __attribute__((swift_name("e335")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryFamilyVerifoneESeriesType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.VerifoneVipa")))
@interface MPINGAccessoryFamilyVerifoneVipa : MPINGAccessoryFamily
- (instancetype)initWithType:(MPINGAccessoryFamilyVerifoneVipaType * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryFamilyVerifoneVipaType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryFamilyVerifoneVipa *)doCopyType:(MPINGAccessoryFamilyVerifoneVipaType * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
@property (readonly) MPINGAccessoryFamilyVerifoneVipaType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.VerifoneVipaType")))
@interface MPINGAccessoryFamilyVerifoneVipaType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryFamilyVerifoneVipaType *e355 __attribute__((swift_name("e355")));
@property (class, readonly) MPINGAccessoryFamilyVerifoneVipaType *vx820 __attribute__((swift_name("vx820")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryFamilyVerifoneVipaType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.BBPOS")))
@interface MPINGAccessoryFamilyBBPOS : MPINGAccessoryFamily
- (instancetype)initWithType:(MPINGAccessoryFamilyBBPOSType * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryFamilyBBPOSType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryFamilyBBPOS *)doCopyType:(MPINGAccessoryFamilyBBPOSType * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
@property (readonly) MPINGAccessoryFamilyBBPOSType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.BBPOSType")))
@interface MPINGAccessoryFamilyBBPOSType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryFamilyBBPOSType *wisepad __attribute__((swift_name("wisepad")));
@property (class, readonly) MPINGAccessoryFamilyBBPOSType *chipper __attribute__((swift_name("chipper")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryFamilyBBPOSType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.Ingenico")))
@interface MPINGAccessoryFamilyIngenico : MPINGAccessoryFamily
- (instancetype)initWithType:(MPINGAccessoryFamilyIngenicoType * _Nullable)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryFamilyIngenicoType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryFamilyIngenico *)doCopyType:(MPINGAccessoryFamilyIngenicoType * _Nullable)type __attribute__((swift_name("doCopy(type:)")));
@property (readonly) MPINGAccessoryFamilyIngenicoType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryFamily.IngenicoType")))
@interface MPINGAccessoryFamilyIngenicoType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryFamilyIngenicoType *link2500 __attribute__((swift_name("link2500")));
@property (class, readonly) MPINGAccessoryFamilyIngenicoType *lane3000 __attribute__((swift_name("lane3000")));
@property (class, readonly) MPINGAccessoryFamilyIngenicoType *lane5000 __attribute__((swift_name("lane5000")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryFamilyIngenicoType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryState")))
@interface MPINGAccessoryState : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryState *unavailable __attribute__((swift_name("unavailable")));
@property (class, readonly) MPINGAccessoryState *idle __attribute__((swift_name("idle")));
@property (class, readonly) MPINGAccessoryState *authenticating __attribute__((swift_name("authenticating")));
@property (class, readonly) MPINGAccessoryState *updating __attribute__((swift_name("updating")));
@property (class, readonly) MPINGAccessoryState *busy __attribute__((swift_name("busy")));
@property (class, readonly) MPINGAccessoryState *reconnecting __attribute__((swift_name("reconnecting")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryState *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("AccessoryComponent")))
@protocol MPINGAccessoryComponent
@required
- (void)abort __attribute__((swift_name("abort()")));
@property (readonly) MPINGAccessoryComponentType *type __attribute__((swift_name("type")));
@property (readonly) BOOL isBusy __attribute__((swift_name("isBusy")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryComponentType")))
@interface MPINGAccessoryComponentType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryComponentType *barcodeScanner __attribute__((swift_name("barcodeScanner")));
@property (class, readonly) MPINGAccessoryComponentType *printer __attribute__((swift_name("printer")));
@property (class, readonly) MPINGAccessoryComponentType *log __attribute__((swift_name("log")));
@property (class, readonly) MPINGAccessoryComponentType *tipping __attribute__((swift_name("tipping")));
@property (class, readonly) MPINGAccessoryComponentType *interaction __attribute__((swift_name("interaction")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryComponentType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("AccessoryCardProcessingModuleCardType")))
@interface MPINGAccessoryCardProcessingModuleCardType : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleCardType.Magstripe")))
@interface MPINGAccessoryCardProcessingModuleCardTypeMagstripe : MPINGAccessoryCardProcessingModuleCardType
- (instancetype)initWithMagstripeInformation:(id<MPINGMagstripeInformation>)magstripeInformation __attribute__((swift_name("init(magstripeInformation:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGMagstripeInformation>)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleCardTypeMagstripe *)doCopyMagstripeInformation:(id<MPINGMagstripeInformation>)magstripeInformation __attribute__((swift_name("doCopy(magstripeInformation:)")));
@property (readonly) id<MPINGMagstripeInformation> magstripeInformation __attribute__((swift_name("magstripeInformation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleCardType.Emv")))
@interface MPINGAccessoryCardProcessingModuleCardTypeEmv : MPINGAccessoryCardProcessingModuleCardType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)emv __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleCardType.Icc")))
@interface MPINGAccessoryCardProcessingModuleCardTypeIcc : MPINGAccessoryCardProcessingModuleCardType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)icc __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleCardType.Nfc")))
@interface MPINGAccessoryCardProcessingModuleCardTypeNfc : MPINGAccessoryCardProcessingModuleCardType
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nfc __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleActiveInterface")))
@interface MPINGAccessoryCardProcessingModuleActiveInterface : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryCardProcessingModuleActiveInterface *magstripe __attribute__((swift_name("magstripe")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleActiveInterface *icc __attribute__((swift_name("icc")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleActiveInterface *nfc __attribute__((swift_name("nfc")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryCardProcessingModuleActiveInterface *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleOptOut")))
@interface MPINGAccessoryCardProcessingModuleOptOut : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryCardProcessingModuleOptOut *allow __attribute__((swift_name("allow")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleOptOut *decline __attribute__((swift_name("decline")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryCardProcessingModuleOptOut *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleCancelReason")))
@interface MPINGAccessoryCardProcessingModuleCancelReason : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryCardProcessingModuleCancelReason *cardremoved __attribute__((swift_name("cardremoved")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleCancelReason *usercanceled __attribute__((swift_name("usercanceled")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryCardProcessingModuleCancelReason *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModulePinCancelReason")))
@interface MPINGAccessoryCardProcessingModulePinCancelReason : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryCardProcessingModulePinCancelReason *usercanceled __attribute__((swift_name("usercanceled")));
@property (class, readonly) MPINGAccessoryCardProcessingModulePinCancelReason *timeout __attribute__((swift_name("timeout")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryCardProcessingModulePinCancelReason *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleEmvErrorType")))
@interface MPINGAccessoryCardProcessingModuleEmvErrorType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *cardnotresponding __attribute__((swift_name("cardnotresponding")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *cardiccerror __attribute__((swift_name("cardiccerror")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *cardnotsupported __attribute__((swift_name("cardnotsupported")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *interfacedisabled __attribute__((swift_name("interfacedisabled")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *interfaceswitchtoiccmsrrequired __attribute__((swift_name("interfaceswitchtoiccmsrrequired")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *interfaceswitchtoiccrequired __attribute__((swift_name("interfaceswitchtoiccrequired")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryCardProcessingModuleEmvErrorType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleFallbackStatus")))
@interface MPINGAccessoryCardProcessingModuleFallbackStatus : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAccessoryCardProcessingModuleFallbackStatus *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleFallbackStatus *allowed __attribute__((swift_name("allowed")));
@property (class, readonly) MPINGAccessoryCardProcessingModuleFallbackStatus *notallowed __attribute__((swift_name("notallowed")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAccessoryCardProcessingModuleFallbackStatus *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("AccessoryCardProcessingModuleDetectCardResult")))
@interface MPINGAccessoryCardProcessingModuleDetectCardResult : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleDetectCardResult.Success")))
@interface MPINGAccessoryCardProcessingModuleDetectCardResultSuccess : MPINGAccessoryCardProcessingModuleDetectCardResult
- (instancetype)initWithCardType:(MPINGAccessoryCardProcessingModuleCardType *)cardType __attribute__((swift_name("init(cardType:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModuleCardType *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleDetectCardResultSuccess *)doCopyCardType:(MPINGAccessoryCardProcessingModuleCardType *)cardType __attribute__((swift_name("doCopy(cardType:)")));
@property (readonly) MPINGAccessoryCardProcessingModuleCardType *cardType __attribute__((swift_name("cardType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleDetectCardResult.Cancel")))
@interface MPINGAccessoryCardProcessingModuleDetectCardResultCancel : MPINGAccessoryCardProcessingModuleDetectCardResult
- (instancetype)initWithReason:(MPINGAccessoryCardProcessingModuleCancelReason *)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModuleCancelReason *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleDetectCardResultCancel *)doCopyReason:(MPINGAccessoryCardProcessingModuleCancelReason *)reason __attribute__((swift_name("doCopy(reason:)")));
@property (readonly) MPINGAccessoryCardProcessingModuleCancelReason *reason __attribute__((swift_name("reason")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleDetectCardResult.Failure")))
@interface MPINGAccessoryCardProcessingModuleDetectCardResultFailure : MPINGAccessoryCardProcessingModuleDetectCardResult
- (instancetype)initWithError:(id<MPINGMposError>)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGMposError>)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleDetectCardResultFailure *)doCopyError:(id<MPINGMposError>)error __attribute__((swift_name("doCopy(error:)")));
@property (readonly) id<MPINGMposError> error __attribute__((swift_name("error")));
@end;

__attribute__((swift_name("AccessoryCardProcessingModuleRequestPinResult")))
@interface MPINGAccessoryCardProcessingModuleRequestPinResult : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleRequestPinResult.Success")))
@interface MPINGAccessoryCardProcessingModuleRequestPinResultSuccess : MPINGAccessoryCardProcessingModuleRequestPinResult
- (instancetype)initWithPinBlock:(NSString *)pinBlock ksn:(NSString *)ksn __attribute__((swift_name("init(pinBlock:ksn:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MPINGAccessoryCardProcessingModuleRequestPinResultSuccess *)doCopyPinBlock:(NSString *)pinBlock ksn:(NSString *)ksn __attribute__((swift_name("doCopy(pinBlock:ksn:)")));
@property (readonly) NSString *pinBlock __attribute__((swift_name("pinBlock")));
@property (readonly) NSString *ksn __attribute__((swift_name("ksn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleRequestPinResult.Cancel")))
@interface MPINGAccessoryCardProcessingModuleRequestPinResultCancel : MPINGAccessoryCardProcessingModuleRequestPinResult
- (instancetype)initWithReason:(MPINGAccessoryCardProcessingModulePinCancelReason *)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModulePinCancelReason *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleRequestPinResultCancel *)doCopyReason:(MPINGAccessoryCardProcessingModulePinCancelReason *)reason __attribute__((swift_name("doCopy(reason:)")));
@property (readonly) MPINGAccessoryCardProcessingModulePinCancelReason *reason __attribute__((swift_name("reason")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleRequestPinResult.Failure")))
@interface MPINGAccessoryCardProcessingModuleRequestPinResultFailure : MPINGAccessoryCardProcessingModuleRequestPinResult
- (instancetype)initWithError:(id<MPINGMposError>)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGMposError>)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleRequestPinResultFailure *)doCopyError:(id<MPINGMposError>)error __attribute__((swift_name("doCopy(error:)")));
@property (readonly) id<MPINGMposError> error __attribute__((swift_name("error")));
@end;

__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResult : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.Approved")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultApproved : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithPaymentData:(MPINGPaymentData *)paymentData __attribute__((swift_name("init(paymentData:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGPaymentData *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultApproved *)doCopyPaymentData:(MPINGPaymentData *)paymentData __attribute__((swift_name("doCopy(paymentData:)")));
@property (readonly) MPINGPaymentData *paymentData __attribute__((swift_name("paymentData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.Declined")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultDeclined : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithPaymentData:(MPINGPaymentData *)paymentData __attribute__((swift_name("init(paymentData:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGPaymentData *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultDeclined *)doCopyPaymentData:(MPINGPaymentData *)paymentData __attribute__((swift_name("doCopy(paymentData:)")));
@property (readonly) MPINGPaymentData *paymentData __attribute__((swift_name("paymentData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.AlternativeCardICC")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultAlternativeCardICC : MPINGAccessoryCardProcessingModuleStartTransactionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)alternativeCardICC __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.AlternativeCardMagstripe")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultAlternativeCardMagstripe : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithInformation:(id<MPINGMagstripeInformation>)information __attribute__((swift_name("init(information:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGMagstripeInformation>)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultAlternativeCardMagstripe *)doCopyInformation:(id<MPINGMagstripeInformation>)information __attribute__((swift_name("doCopy(information:)")));
@property (readonly) id<MPINGMagstripeInformation> information __attribute__((swift_name("information")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.Identified")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultIdentified : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithPaymentData:(MPINGPaymentData *)paymentData __attribute__((swift_name("init(paymentData:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGPaymentData *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultIdentified *)doCopyPaymentData:(MPINGPaymentData *)paymentData __attribute__((swift_name("doCopy(paymentData:)")));
@property (readonly) MPINGPaymentData *paymentData __attribute__((swift_name("paymentData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.EmvError")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultEmvError : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithErrorType:(MPINGAccessoryCardProcessingModuleEmvErrorType *)errorType fallbackStatus:(MPINGAccessoryCardProcessingModuleFallbackStatus *)fallbackStatus __attribute__((swift_name("init(errorType:fallbackStatus:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModuleEmvErrorType *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleFallbackStatus *)component2 __attribute__((swift_name("component2()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultEmvError *)doCopyErrorType:(MPINGAccessoryCardProcessingModuleEmvErrorType *)errorType fallbackStatus:(MPINGAccessoryCardProcessingModuleFallbackStatus *)fallbackStatus __attribute__((swift_name("doCopy(errorType:fallbackStatus:)")));
@property (readonly) MPINGAccessoryCardProcessingModuleEmvErrorType *errorType __attribute__((swift_name("errorType")));
@property (readonly) MPINGAccessoryCardProcessingModuleFallbackStatus *fallbackStatus __attribute__((swift_name("fallbackStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.Aborted")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultAborted : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithReason:(MPINGAccessoryCardProcessingModuleCancelReason *)reason __attribute__((swift_name("init(reason:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGAccessoryCardProcessingModuleCancelReason *)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultAborted *)doCopyReason:(MPINGAccessoryCardProcessingModuleCancelReason *)reason __attribute__((swift_name("doCopy(reason:)")));
@property (readonly) MPINGAccessoryCardProcessingModuleCancelReason *reason __attribute__((swift_name("reason")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.Timeout")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultTimeout : MPINGAccessoryCardProcessingModuleStartTransactionResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timeout __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryCardProcessingModuleStartTransactionResult.Failed")))
@interface MPINGAccessoryCardProcessingModuleStartTransactionResultFailed : MPINGAccessoryCardProcessingModuleStartTransactionResult
- (instancetype)initWithError:(id<MPINGMposError>)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGMposError>)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryCardProcessingModuleStartTransactionResultFailed *)doCopyError:(id<MPINGMposError>)error __attribute__((swift_name("doCopy(error:)")));
@property (readonly) id<MPINGMposError> error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessorySystemModuleAccessoryInfo")))
@interface MPINGAccessorySystemModuleAccessoryInfo : KotlinBase
- (instancetype)initWithDetails:(id<MPINGAccessoryDetails>)details family:(MPINGAccessoryFamily *)family __attribute__((swift_name("init(details:family:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (id<MPINGAccessoryDetails>)component1 __attribute__((swift_name("component1()")));
- (MPINGAccessoryFamily *)component2 __attribute__((swift_name("component2()")));
- (MPINGAccessorySystemModuleAccessoryInfo *)doCopyDetails:(id<MPINGAccessoryDetails>)details family:(MPINGAccessoryFamily *)family __attribute__((swift_name("doCopy(details:family:)")));
@property (readonly) id<MPINGAccessoryDetails> details __attribute__((swift_name("details")));
@property (readonly) MPINGAccessoryFamily *family __attribute__((swift_name("family")));
@end;

__attribute__((swift_name("PinInputProgressReporter")))
@protocol MPINGPinInputProgressReporter
@required
- (void)started __attribute__((swift_name("started()")));
- (void)success __attribute__((swift_name("success()")));
- (void)failed __attribute__((swift_name("failed()")));
- (void)cancelled __attribute__((swift_name("cancelled()")));
- (void)progress __attribute__((swift_name("progress()")));
- (void)timeout __attribute__((swift_name("timeout()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoopPinInputProgressReporter")))
@interface MPINGNoopPinInputProgressReporter : KotlinBase <MPINGPinInputProgressReporter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noopPinInputProgressReporter __attribute__((swift_name("init()")));
- (void)started __attribute__((swift_name("started()")));
- (void)success __attribute__((swift_name("success()")));
- (void)failed __attribute__((swift_name("failed()")));
- (void)cancelled __attribute__((swift_name("cancelled()")));
- (void)progress __attribute__((swift_name("progress()")));
- (void)timeout __attribute__((swift_name("timeout()")));
@property (readonly) NSString *TAG __attribute__((swift_name("TAG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardholderVerification")))
@interface MPINGCardholderVerification : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGCardholderVerification *pinofflineenciphered __attribute__((swift_name("pinofflineenciphered")));
@property (class, readonly) MPINGCardholderVerification *pinofflineencipheredandsignature __attribute__((swift_name("pinofflineencipheredandsignature")));
@property (class, readonly) MPINGCardholderVerification *pinofflineplaintext __attribute__((swift_name("pinofflineplaintext")));
@property (class, readonly) MPINGCardholderVerification *pinofflineplaintextandsignature __attribute__((swift_name("pinofflineplaintextandsignature")));
@property (class, readonly) MPINGCardholderVerification *pinonlineenciphered __attribute__((swift_name("pinonlineenciphered")));
@property (class, readonly) MPINGCardholderVerification *signature __attribute__((swift_name("signature")));
@property (class, readonly) MPINGCardholderVerification *nocvm __attribute__((swift_name("nocvm")));
@property (class, readonly) MPINGCardholderVerification *odcvm __attribute__((swift_name("odcvm")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGCardholderVerification *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecimalNumber")))
@interface MPINGDecimalNumber : KotlinBase
- (instancetype)initWithMantissa:(uint64_t)mantissa exponent:(int32_t)exponent isNegative:(BOOL)isNegative __attribute__((swift_name("init(mantissa:exponent:isNegative:)"))) __attribute__((objc_designated_initializer));
- (MPINGDecimalNumber *)numberBySettingExponentToNewExponent:(int32_t)newExponent __attribute__((swift_name("numberBySettingExponentTo(newExponent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)smallestAllowedExponent __attribute__((swift_name("smallestAllowedExponent()")));
- (MPINGDecimalNumber *)normalize __attribute__((swift_name("normalize()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (uint64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (MPINGDecimalNumber *)doCopyMantissa:(uint64_t)mantissa exponent:(int32_t)exponent isNegative:(BOOL)isNegative __attribute__((swift_name("doCopy(mantissa:exponent:isNegative:)")));
@property (readonly) uint64_t mantissa __attribute__((swift_name("mantissa")));
@property (readonly) int32_t exponent __attribute__((swift_name("exponent")));
@property (readonly) BOOL isNegative __attribute__((swift_name("isNegative")));
@end;

__attribute__((swift_name("CommunicationModule")))
@protocol MPINGCommunicationModule
@required
- (void)sendData:(MPINGKotlinByteArray *)data __attribute__((swift_name("send(data:)")));
- (void)connectSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("connect(success:failure:)")));
- (void)disconnectSuccess:(void (^)(void))success failure:(void (^)(id<MPINGMposError>))failure __attribute__((swift_name("disconnect(success:failure:)")));
@property (readonly) MPINGAccessoryConnectionState *connectionState __attribute__((swift_name("connectionState")));
@property void (^onDataReceived)(MPINGKotlinByteArray *) __attribute__((swift_name("onDataReceived")));
@property void (^onConnectionStateChanged)(MPINGAccessoryConnectionState *, MPINGAccessoryConnectionState *) __attribute__((swift_name("onConnectionStateChanged")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface MPINGCurrency : KotlinBase
- (instancetype)initWithCode:(NSString *)code number:(int64_t)number exponent:(int64_t)exponent __attribute__((swift_name("init(code:number:exponent:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (MPINGCurrency *)doCopyCode:(NSString *)code number:(int64_t)number exponent:(int64_t)exponent __attribute__((swift_name("doCopy(code:number:exponent:)")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) int64_t number __attribute__((swift_name("number")));
@property (readonly) int64_t exponent __attribute__((swift_name("exponent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface MPINGCurrencyCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) MPINGCurrency *EUR __attribute__((swift_name("EUR")));
@property (readonly) MPINGCurrency *USD __attribute__((swift_name("USD")));
@property (readonly) MPINGCurrency *GBP __attribute__((swift_name("GBP")));
@property (readonly) MPINGCurrency *SEK __attribute__((swift_name("SEK")));
@property (readonly) MPINGCurrency *DKK __attribute__((swift_name("DKK")));
@property (readonly) MPINGCurrency *NOK __attribute__((swift_name("NOK")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Amount")))
@interface MPINGAmount : KotlinBase
- (instancetype)initWithValue:(MPINGDecimalNumber *)value currency:(MPINGCurrency *)currency __attribute__((swift_name("init(value:currency:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGDecimalNumber *)component1 __attribute__((swift_name("component1()")));
- (MPINGCurrency *)component2 __attribute__((swift_name("component2()")));
- (MPINGAmount *)doCopyValue:(MPINGDecimalNumber *)value currency:(MPINGCurrency *)currency __attribute__((swift_name("doCopy(value:currency:)")));
@property (readonly) int64_t normalizedAmount __attribute__((swift_name("normalizedAmount")));
@property (readonly) MPINGDecimalNumber *value __attribute__((swift_name("value")));
@property (readonly) MPINGCurrency *currency __attribute__((swift_name("currency")));
@end;

__attribute__((swift_name("MagstripeInformation")))
@protocol MPINGMagstripeInformation
@required
@property (readonly) NSString *maskedTrack2 __attribute__((swift_name("maskedTrack2")));
@property MPINGHexString *sredData __attribute__((swift_name("sredData")));
@property MPINGHexString *sredKsn __attribute__((swift_name("sredKsn")));
@end;

__attribute__((swift_name("MagstripeInformationBuilder")))
@protocol MPINGMagstripeInformationBuilder
@required
- (id<MPINGMagstripeInformation>)buildTrack2:(NSString *)track2 __attribute__((swift_name("build(track2:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderMode")))
@interface MPINGProviderMode : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGProviderMode *test __attribute__((swift_name("test")));
@property (class, readonly) MPINGProviderMode *live __attribute__((swift_name("live")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGProviderMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Aid")))
@interface MPINGAid : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGAid *mastercard __attribute__((swift_name("mastercard")));
@property (class, readonly) MPINGAid *maestro __attribute__((swift_name("maestro")));
@property (class, readonly) MPINGAid *visa __attribute__((swift_name("visa")));
@property (class, readonly) MPINGAid *visaelectron __attribute__((swift_name("visaelectron")));
@property (class, readonly) MPINGAid *americanexpress __attribute__((swift_name("americanexpress")));
@property (class, readonly) MPINGAid *jcb __attribute__((swift_name("jcb")));
@property (class, readonly) MPINGAid *discover __attribute__((swift_name("discover")));
@property (class, readonly) MPINGAid *chinaunionpaydebit __attribute__((swift_name("chinaunionpaydebit")));
@property (class, readonly) MPINGAid *chinaunionpaycredit __attribute__((swift_name("chinaunionpaycredit")));
@property (class, readonly) MPINGAid *chinaunionpayquasicredit __attribute__((swift_name("chinaunionpayquasicredit")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGAid *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *aid __attribute__((swift_name("aid")));
@property (readonly) MPINGRid *rid __attribute__((swift_name("rid")));
@end;

__attribute__((swift_name("Rid")))
@interface MPINGRid : KotlinBase
@property (readonly) MPINGHexString *rid __attribute__((swift_name("rid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.Mastercard")))
@interface MPINGRidMastercard : MPINGRid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercard __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.Visa")))
@interface MPINGRidVisa : MPINGRid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)visa __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.AmericanExpress")))
@interface MPINGRidAmericanExpress : MPINGRid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)americanExpress __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.Jcb")))
@interface MPINGRidJcb : MPINGRid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jcb __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.Discover")))
@interface MPINGRidDiscover : MPINGRid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)discover __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.ChinaUnionPay")))
@interface MPINGRidChinaUnionPay : MPINGRid
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chinaUnionPay __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rid.Companion")))
@interface MPINGRidCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (MPINGRid * _Nullable)fromAid:(MPINGHexString *)aid __attribute__((swift_name("from(aid:)")));
- (MPINGRid * _Nullable)fromTlv:(id)tlv __attribute__((swift_name("from(tlv:)")));
- (MPINGHexString *)aidFromTlvTlv:(id)tlv __attribute__((swift_name("aidFromTlv(tlv:)")));
@end;

__attribute__((swift_name("Transaction")))
@protocol MPINGTransaction
@required
@property (readonly) MPINGAmount *amount __attribute__((swift_name("amount")));
@property (readonly) MPINGTransactionType *type __attribute__((swift_name("type")));
@property (readonly) id<MPINGLocalDate> created __attribute__((swift_name("created")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType")))
@interface MPINGTransactionType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGTransactionType *charge __attribute__((swift_name("charge")));
@property (class, readonly) MPINGTransactionType *refund __attribute__((swift_name("refund")));
@property (class, readonly) MPINGTransactionType *preauthorize __attribute__((swift_name("preauthorize")));
@property (class, readonly) MPINGTransactionType *credit __attribute__((swift_name("credit")));
@property (class, readonly) MPINGTransactionType *activation __attribute__((swift_name("activation")));
@property (class, readonly) MPINGTransactionType *balanceInquiry __attribute__((swift_name("balanceInquiry")));
@property (class, readonly) MPINGTransactionType *cashout __attribute__((swift_name("cashout")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGTransactionType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) BOOL isRefund __attribute__((swift_name("isRefund")));
@end;

__attribute__((swift_name("TlvReference")))
@protocol MPINGTlvReference
@required
- (MPINGTlvItem *)tlvRawData:(MPINGHexString *)rawData __attribute__((swift_name("tlv(rawData:)")));
- (MPINGTlvItem * _Nullable)firstItemInItems:(id _Nullable)items __attribute__((swift_name("firstItemIn(items:)")));
@property (readonly) MPINGTlvTag *tag __attribute__((swift_name("tag")));
@property (readonly) MPINGTlvDataLength *length __attribute__((swift_name("length")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((swift_name("AbstractTlvReference")))
@interface MPINGAbstractTlvReference : KotlinBase <MPINGTlvReference>
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer));
- (MPINGTlvPrimitiveItem *)tlvRawData:(MPINGHexString *)rawData __attribute__((swift_name("tlv(rawData:)")));
- (MPINGTlvItem * _Nullable)firstItemInItems:(id _Nullable)items __attribute__((swift_name("firstItemIn(items:)")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(id _Nullable)value __attribute__((swift_name("tlvFromValue(value:)")));
- (id _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (id _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
- (MPINGHexString * _Nullable)firstRawDataInItems:(id _Nullable)items __attribute__((swift_name("firstRawDataIn(items:)")));
@property (readonly) MPINGTlvTag *tag __attribute__((swift_name("tag")));
@property (readonly) id<MPINGTlvMapper> mapper __attribute__((swift_name("mapper")));
@property (readonly) MPINGTlvDataLength *length __attribute__((swift_name("length")));
@end;

__attribute__((swift_name("TlvDataLength")))
@interface MPINGTlvDataLength : KotlinBase
@property (readonly) MPINGKotlinIntRange *range __attribute__((swift_name("range")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvDataLength.Flexible")))
@interface MPINGTlvDataLengthFlexible : MPINGTlvDataLength
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)flexible __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvDataLength.Ranged")))
@interface MPINGTlvDataLengthRanged : MPINGTlvDataLength
- (instancetype)initWithRange:(MPINGKotlinIntRange *)range __attribute__((swift_name("init(range:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvDataLength.Fixed")))
@interface MPINGTlvDataLengthFixed : MPINGTlvDataLength
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpress")))
@interface MPINGAmericanExpress : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)americanExpress __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpress.ContactlessReaderCapabilities")))
@interface MPINGAmericanExpressContactlessReaderCapabilities : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contactlessReaderCapabilities __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)emvAndMagstripeNoCvmRequired __attribute__((swift_name("emvAndMagstripeNoCvmRequired()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmericanExpress.EnhancedContactlessReaderCapabilities")))
@interface MPINGAmericanExpressEnhancedContactlessReaderCapabilities : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)enhancedContactlessReaderCapabilities __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)pinsAndSignature __attribute__((swift_name("pinsAndSignature()")));
- (MPINGTlvPrimitiveItem *)offlinePinsAndSignature __attribute__((swift_name("offlinePinsAndSignature()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChinaUnionPay")))
@interface MPINGChinaUnionPay : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chinaUnionPay __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChinaUnionPay.TerminalTransactionQualifiers")))
@interface MPINGChinaUnionPayTerminalTransactionQualifiers : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalTransactionQualifiers __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conflicting9F6E")))
@interface MPINGConflicting9F6E : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conflicting9F6E __attribute__((swift_name("init()")));
@property (readonly) MPINGGenericTlvReference *generic __attribute__((swift_name("generic")));
@property (readonly) MPINGVisaFormFactorIndicator *visa __attribute__((swift_name("visa")));
@property (readonly) MPINGMastercardThirdPartyData *mastercard __attribute__((swift_name("mastercard")));
@property (readonly) MPINGAmericanExpressEnhancedContactlessReaderCapabilities *amex __attribute__((swift_name("amex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conflicting9F6C")))
@interface MPINGConflicting9F6C : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conflicting9F6C __attribute__((swift_name("init()")));
@property (readonly) MPINGGenericTlvReference *generic __attribute__((swift_name("generic")));
@property (readonly) MPINGVisaCardTransactionQualifier *visa __attribute__((swift_name("visa")));
@property (readonly) MPINGMastercardMagstripeApplicationVersionNumberIcc *mastercard __attribute__((swift_name("mastercard")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Conflicting9F69")))
@interface MPINGConflicting9F69 : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)conflicting9F69 __attribute__((swift_name("init()")));
@property (readonly) MPINGGenericTlvReference *generic __attribute__((swift_name("generic")));
@property (readonly) MPINGVisaCardAuthenticationRelatedData *visa __attribute__((swift_name("visa")));
@property (readonly) MPINGMastercardUdol *mastercard __attribute__((swift_name("mastercard")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Discover")))
@interface MPINGDiscover : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)discover __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Discover.TerminalTransactionQualifiers")))
@interface MPINGDiscoverTerminalTransactionQualifiers : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalTransactionQualifiers __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv")))
@interface MPINGEmv : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)emv __attribute__((swift_name("init()")));
@property (readonly) NSArray<MPINGTlvTag *> *TagsWithSensitiveData __attribute__((swift_name("TagsWithSensitiveData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CurrencyCode")))
@interface MPINGEmvCurrencyCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)currencyCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CurrencyExponent")))
@interface MPINGEmvCurrencyExponent : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)currencyExponent __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionType")))
@interface MPINGEmvTransactionType : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionType __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGEmvTransactionTypeType *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGEmvTransactionTypeType * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGEmvTransactionTypeType * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionTypeType")))
@interface MPINGEmvTransactionTypeType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGEmvTransactionTypeType *purchase __attribute__((swift_name("purchase")));
@property (class, readonly) MPINGEmvTransactionTypeType *refund __attribute__((swift_name("refund")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGEmvTransactionTypeType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizedAmount")))
@interface MPINGEmvAuthorizedAmount : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authorizedAmount __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.OtherAmount")))
@interface MPINGEmvOtherAmount : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)otherAmount __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizedAmountBinary")))
@interface MPINGEmvAuthorizedAmountBinary : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authorizedAmountBinary __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.OtherAmountBinary")))
@interface MPINGEmvOtherAmountBinary : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)otherAmountBinary __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionDate")))
@interface MPINGEmvTransactionDate : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionDate __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGDate *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGDate * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGDate * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionTime")))
@interface MPINGEmvTransactionTime : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionTime __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGDate *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGDate * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGDate * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalCountryCode")))
@interface MPINGEmvTerminalCountryCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalCountryCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalIdentification")))
@interface MPINGEmvTerminalIdentification : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalIdentification __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalCapabilities")))
@interface MPINGEmvTerminalCapabilities : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalCapabilities __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)offlinePinAndSignature __attribute__((swift_name("offlinePinAndSignature()")));
- (MPINGTlvPrimitiveItem *)pinsAndSignature __attribute__((swift_name("pinsAndSignature()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AdditionalTerminalCapabilities")))
@interface MPINGEmvAdditionalTerminalCapabilities : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)additionalTerminalCapabilities __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvGenericIngenico __attribute__((swift_name("tlvGenericIngenico()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalType")))
@interface MPINGEmvTerminalType : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalType __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvAttendedOfflineWithOnlineCapability __attribute__((swift_name("tlvAttendedOfflineWithOnlineCapability()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalFloorLimit")))
@interface MPINGEmvTerminalFloorLimit : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalFloorLimit __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.DedicatedFileName")))
@interface MPINGEmvDedicatedFileName : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dedicatedFileName __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationIdentifierCard")))
@interface MPINGEmvApplicationIdentifierCard : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationIdentifierCard __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationIdentifierTerminal")))
@interface MPINGEmvApplicationIdentifierTerminal : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationIdentifierTerminal __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationLabel")))
@interface MPINGEmvApplicationLabel : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationLabel __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationPreferredLabel")))
@interface MPINGEmvApplicationPreferredLabel : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationPreferredLabel __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardHolderName")))
@interface MPINGEmvCardHolderName : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardHolderName __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TerminalVerificationResults")))
@interface MPINGEmvTerminalVerificationResults : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalVerificationResults __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationCryptogram")))
@interface MPINGEmvApplicationCryptogram : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationCryptogram __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodResults")))
@interface MPINGEmvCardholderVerificationMethodResults : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardholderVerificationMethodResults __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGEmvCardholderVerificationMethodResultsCvm *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGEmvCardholderVerificationMethodResultsCvm * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGEmvCardholderVerificationMethodResultsCvm * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodResultsCvm")))
@interface MPINGEmvCardholderVerificationMethodResultsCvm : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *pinofflineenciphered __attribute__((swift_name("pinofflineenciphered")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *pinofflineencipheredandsignature __attribute__((swift_name("pinofflineencipheredandsignature")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *pinofflineplaintext __attribute__((swift_name("pinofflineplaintext")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *pinofflineplaintextandsignature __attribute__((swift_name("pinofflineplaintextandsignature")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *pinonlineenciphered __attribute__((swift_name("pinonlineenciphered")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *signature __attribute__((swift_name("signature")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *nocvm __attribute__((swift_name("nocvm")));
@property (class, readonly) MPINGEmvCardholderVerificationMethodResultsCvm *unknown __attribute__((swift_name("unknown")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGEmvCardholderVerificationMethodResultsCvm *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((swift_name("TlvMapper")))
@protocol MPINGTlvMapper
@required
- (id _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(id _Nullable)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) int8_t padding __attribute__((swift_name("padding")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodResultsMapper")))
@interface MPINGEmvCardholderVerificationMethodResultsMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (MPINGEmvCardholderVerificationMethodResultsCvm * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGEmvCardholderVerificationMethodResultsCvm *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CryptogramInformationData")))
@interface MPINGEmvCryptogramInformationData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cryptogramInformationData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGEmvCryptogramInformationDataType *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGEmvCryptogramInformationDataType * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGEmvCryptogramInformationDataType * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CryptogramInformationDataType")))
@interface MPINGEmvCryptogramInformationDataType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGEmvCryptogramInformationDataType *aac __attribute__((swift_name("aac")));
@property (class, readonly) MPINGEmvCryptogramInformationDataType *tc __attribute__((swift_name("tc")));
@property (class, readonly) MPINGEmvCryptogramInformationDataType *arqc __attribute__((swift_name("arqc")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGEmvCryptogramInformationDataType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CryptogramInformationDataMapper")))
@interface MPINGEmvCryptogramInformationDataMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (MPINGEmvCryptogramInformationDataType * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGEmvCryptogramInformationDataType *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PosEntryMode")))
@interface MPINGEmvPosEntryMode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)posEntryMode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGEmvPosEntryModeEntryMode *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGEmvPosEntryModeEntryMode * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGEmvPosEntryModeEntryMode * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PosEntryModeEntryMode")))
@interface MPINGEmvPosEntryModeEntryMode : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGEmvPosEntryModeEntryMode *magstripe __attribute__((swift_name("magstripe")));
@property (class, readonly) MPINGEmvPosEntryModeEntryMode *emv __attribute__((swift_name("emv")));
@property (class, readonly) MPINGEmvPosEntryModeEntryMode *contactlessemv __attribute__((swift_name("contactlessemv")));
@property (class, readonly) MPINGEmvPosEntryModeEntryMode *contactlessmagstripe __attribute__((swift_name("contactlessmagstripe")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGEmvPosEntryModeEntryMode *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PosEntryModeMapper")))
@interface MPINGEmvPosEntryModeMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (MPINGEmvPosEntryModeEntryMode * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGEmvPosEntryModeEntryMode *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationTransactionCounter")))
@interface MPINGEmvApplicationTransactionCounter : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationTransactionCounter __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionSequenceCounter")))
@interface MPINGEmvTransactionSequenceCounter : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionSequenceCounter __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int64_t)incrementAndHandleOverflowCounter:(MPINGLong * _Nullable)counter __attribute__((swift_name("incrementAndHandleOverflow(counter:)")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.Track2EquivalentData")))
@interface MPINGEmvTrack2EquivalentData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)track2EquivalentData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.Pan")))
@interface MPINGEmvPan : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pan __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.PanSequenceNumber")))
@interface MPINGEmvPanSequenceNumber : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)panSequenceNumber __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerScriptTemplate1")))
@interface MPINGEmvIssuerScriptTemplate1 : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerScriptTemplate1 __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerScriptTemplate2")))
@interface MPINGEmvIssuerScriptTemplate2 : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerScriptTemplate2 __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizationCode")))
@interface MPINGEmvAuthorizationCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authorizationCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AuthorizationResponseCode")))
@interface MPINGEmvAuthorizationResponseCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authorizationResponseCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)approved __attribute__((swift_name("approved()")));
- (MPINGTlvPrimitiveItem *)genericDecline __attribute__((swift_name("genericDecline()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerAuthenticationData")))
@interface MPINGEmvIssuerAuthenticationData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerAuthenticationData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerApplicationData")))
@interface MPINGEmvIssuerApplicationData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerApplicationData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.CardholderVerificationMethodList")))
@interface MPINGEmvCardholderVerificationMethodList : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardholderVerificationMethodList __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationInterchangeProfile")))
@interface MPINGEmvApplicationInterchangeProfile : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationInterchangeProfile __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionStatusInformation")))
@interface MPINGEmvTransactionStatusInformation : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionStatusInformation __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.UnpredictableNumber")))
@interface MPINGEmvUnpredictableNumber : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unpredictableNumber __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationExpirationDate")))
@interface MPINGEmvApplicationExpirationDate : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationExpirationDate __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationEffectiveDate")))
@interface MPINGEmvApplicationEffectiveDate : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationEffectiveDate __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ServiceCode")))
@interface MPINGEmvServiceCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serviceCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerActionCodeDefault")))
@interface MPINGEmvIssuerActionCodeDefault : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerActionCodeDefault __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerActionCodeDenial")))
@interface MPINGEmvIssuerActionCodeDenial : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerActionCodeDenial __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerActionCodeOnline")))
@interface MPINGEmvIssuerActionCodeOnline : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerActionCodeOnline __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationUsageControl")))
@interface MPINGEmvApplicationUsageControl : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationUsageControl __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationVersionNumberChip")))
@interface MPINGEmvApplicationVersionNumberChip : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationVersionNumberChip __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.ApplicationVersionNumberTerminal")))
@interface MPINGEmvApplicationVersionNumberTerminal : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationVersionNumberTerminal __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerCodeTableIndex")))
@interface MPINGEmvIssuerCodeTableIndex : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerCodeTableIndex __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.AcquirerIdentifier")))
@interface MPINGEmvAcquirerIdentifier : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)acquirerIdentifier __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.InterfaceDeviceSerialNumber")))
@interface MPINGEmvInterfaceDeviceSerialNumber : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)interfaceDeviceSerialNumber __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.IssuerCountryCode")))
@interface MPINGEmvIssuerCountryCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)issuerCountryCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.DataAuthenticationCode")))
@interface MPINGEmvDataAuthenticationCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dataAuthenticationCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.TransactionCategoryCode")))
@interface MPINGEmvTransactionCategoryCode : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionCategoryCode __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Emv.MerchantNameAndLocation")))
@interface MPINGEmvMerchantNameAndLocation : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)merchantNameAndLocation __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)generic __attribute__((swift_name("generic()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericTlvReference")))
@interface MPINGGenericTlvReference : MPINGAbstractTlvReference
- (instancetype)initWithTag:(MPINGTlvTag *)tag length:(MPINGTlvDataLength *)length shortDescription:(NSString *)shortDescription __attribute__((swift_name("init(tag:length:shortDescription:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico")))
@interface MPINGIngenico : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ingenico __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.OnlinePin")))
@interface MPINGIngenicoOnlinePin : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onlinePin __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.OnlinePinKsn")))
@interface MPINGIngenicoOnlinePinKsn : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onlinePinKsn __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TerminalDecision")))
@interface MPINGIngenicoTerminalDecision : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalDecision __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGIngenicoTerminalDecisionStatus *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGIngenicoTerminalDecisionStatus * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGIngenicoTerminalDecisionStatus * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TerminalDecisionStatus")))
@interface MPINGIngenicoTerminalDecisionStatus : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGIngenicoTerminalDecisionStatus *declined __attribute__((swift_name("declined")));
@property (class, readonly) MPINGIngenicoTerminalDecisionStatus *approved __attribute__((swift_name("approved")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGIngenicoTerminalDecisionStatus *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ContactlessInformationOut")))
@interface MPINGIngenicoContactlessInformationOut : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contactlessInformationOut __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGIngenicoContactlessInformationOutCvm *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGIngenicoContactlessInformationOutCvm * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGIngenicoContactlessInformationOutCvm * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ContactlessInformationOutCvm")))
@interface MPINGIngenicoContactlessInformationOutCvm : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGIngenicoContactlessInformationOutCvm *odcvm __attribute__((swift_name("odcvm")));
@property (class, readonly) MPINGIngenicoContactlessInformationOutCvm *nocvm __attribute__((swift_name("nocvm")));
@property (class, readonly) MPINGIngenicoContactlessInformationOutCvm *signature __attribute__((swift_name("signature")));
@property (class, readonly) MPINGIngenicoContactlessInformationOutCvm *onlinepin __attribute__((swift_name("onlinepin")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGIngenicoContactlessInformationOutCvm *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ContactlessInformationOutMapper")))
@interface MPINGIngenicoContactlessInformationOutMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (MPINGIngenicoContactlessInformationOutCvm * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGIngenicoContactlessInformationOutCvm *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.RemoveCardPromptAlternativeText")))
@interface MPINGIngenicoRemoveCardPromptAlternativeText : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)removeCardPromptAlternativeText __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ContactlessSignatureCheckResult")))
@interface MPINGIngenicoContactlessSignatureCheckResult : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)contactlessSignatureCheckResult __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGIngenicoContactlessSignatureCheckResultResult *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGIngenicoContactlessSignatureCheckResultResult * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGIngenicoContactlessSignatureCheckResultResult * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ContactlessSignatureCheckResultResult")))
@interface MPINGIngenicoContactlessSignatureCheckResultResult : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGIngenicoContactlessSignatureCheckResultResult *signatureaccepted __attribute__((swift_name("signatureaccepted")));
@property (class, readonly) MPINGIngenicoContactlessSignatureCheckResultResult *downgradetodecline __attribute__((swift_name("downgradetodecline")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGIngenicoContactlessSignatureCheckResultResult *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) MPINGHexString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ContactlessSignatureCheckResultMapper")))
@interface MPINGIngenicoContactlessSignatureCheckResultMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapper __attribute__((swift_name("init()")));
- (MPINGIngenicoContactlessSignatureCheckResultResult * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGIngenicoContactlessSignatureCheckResultResult *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.PayPassThirdPartyDataLength")))
@interface MPINGIngenicoPayPassThirdPartyDataLength : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)payPassThirdPartyDataLength __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TerminalActionCodeDefault")))
@interface MPINGIngenicoTerminalActionCodeDefault : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalActionCodeDefault __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TerminalActionCodeDenial")))
@interface MPINGIngenicoTerminalActionCodeDenial : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalActionCodeDenial __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TerminalActionCodeOnline")))
@interface MPINGIngenicoTerminalActionCodeOnline : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalActionCodeOnline __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.AuthorizationResponseCodeList")))
@interface MPINGIngenicoAuthorizationResponseCodeList : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authorizationResponseCodeList __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ResultOfOnlineProcess")))
@interface MPINGIngenicoResultOfOnlineProcess : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resultOfOnlineProcess __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)processedOffline __attribute__((swift_name("processedOffline()")));
- (MPINGTlvPrimitiveItem *)onlineCompleted __attribute__((swift_name("onlineCompleted()")));
- (MPINGTlvPrimitiveItem *)unableToGoOnline __attribute__((swift_name("unableToGoOnline()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.ThresholdForRandomSelection")))
@interface MPINGIngenicoThresholdForRandomSelection : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thresholdForRandomSelection __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)zero __attribute__((swift_name("zero()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TargetPercentageForRandomSelection")))
@interface MPINGIngenicoTargetPercentageForRandomSelection : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)targetPercentageForRandomSelection __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)zero __attribute__((swift_name("zero()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MaximumTargetPercentageForRandomSelection")))
@interface MPINGIngenicoMaximumTargetPercentageForRandomSelection : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)maximumTargetPercentageForRandomSelection __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)zero __attribute__((swift_name("zero()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.UnpredictableNumberRange")))
@interface MPINGIngenicoUnpredictableNumberRange : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unpredictableNumberRange __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.DefaultDDol")))
@interface MPINGIngenicoDefaultDDol : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultDDol __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)defaultAmericanExpress __attribute__((swift_name("defaultAmericanExpress()")));
- (MPINGTlvPrimitiveItem *)defaultMastercard __attribute__((swift_name("defaultMastercard()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.DefaultTDol")))
@interface MPINGIngenicoDefaultTDol : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultTDol __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)defaultMastercard __attribute__((swift_name("defaultMastercard()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.CombinationOptions")))
@interface MPINGIngenicoCombinationOptions : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)combinationOptions __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)emvModeAndOda __attribute__((swift_name("emvModeAndOda()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.TerminalInterchangeProfile")))
@interface MPINGIngenicoTerminalInterchangeProfile : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalInterchangeProfile __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)pinsAndSignature __attribute__((swift_name("pinsAndSignature()")));
- (MPINGTlvPrimitiveItem *)offlinePinsAndSignature __attribute__((swift_name("offlinePinsAndSignature()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.JcbThresholdForRandomSelection")))
@interface MPINGIngenicoJcbThresholdForRandomSelection : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jcbThresholdForRandomSelection __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)zero __attribute__((swift_name("zero()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.JcbTargetPercentageForRandomSelection")))
@interface MPINGIngenicoJcbTargetPercentageForRandomSelection : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jcbTargetPercentageForRandomSelection __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)zero __attribute__((swift_name("zero()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MastercardMagstripeCvmCapabilityCvmRequired")))
@interface MPINGIngenicoMastercardMagstripeCvmCapabilityCvmRequired : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercardMagstripeCvmCapabilityCvmRequired __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)unused __attribute__((swift_name("unused()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MastercardMagstripeCvmCapabilityNoCvmRequired")))
@interface MPINGIngenicoMastercardMagstripeCvmCapabilityNoCvmRequired : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercardMagstripeCvmCapabilityNoCvmRequired __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)unused __attribute__((swift_name("unused()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MastercardDefaultUDol")))
@interface MPINGIngenicoMastercardDefaultUDol : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercardDefaultUDol __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)default __attribute__((swift_name("default()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MastercardCvmCapabilityCvmRequired")))
@interface MPINGIngenicoMastercardCvmCapabilityCvmRequired : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercardCvmCapabilityCvmRequired __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)unused __attribute__((swift_name("unused()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MastercardCvmCapabilityNoCvmRequired")))
@interface MPINGIngenicoMastercardCvmCapabilityNoCvmRequired : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercardCvmCapabilityNoCvmRequired __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)unused __attribute__((swift_name("unused()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ingenico.MastercardContactlessTransactionLimitOdcvm")))
@interface MPINGIngenicoMastercardContactlessTransactionLimitOdcvm : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercardContactlessTransactionLimitOdcvm __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)zero __attribute__((swift_name("zero()")));
- (MPINGTlvPrimitiveItem *)max __attribute__((swift_name("max()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGLong *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGLong * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGLong * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard")))
@interface MPINGMastercard : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mastercard __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.ThirdPartyData")))
@interface MPINGMastercardThirdPartyData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)thirdPartyData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.MagstripeApplicationVersionNumberIcc")))
@interface MPINGMastercardMagstripeApplicationVersionNumberIcc : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)magstripeApplicationVersionNumberIcc __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.Udol")))
@interface MPINGMastercardUdol : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)udol __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.MagstripeTrack2Data")))
@interface MPINGMastercardMagstripeTrack2Data : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)magstripeTrack2Data __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.MagstripeApplicationVersionNumberTerminal")))
@interface MPINGMastercardMagstripeApplicationVersionNumberTerminal : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)magstripeApplicationVersionNumberTerminal __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)unused __attribute__((swift_name("unused()")));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mastercard.TerminalRiskManagementData")))
@interface MPINGMastercardTerminalRiskManagementData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalRiskManagementData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks")))
@interface MPINGPayworks : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)payworks __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks.KsnExtension")))
@interface MPINGPayworksKsnExtension : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ksnExtension __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks.MagstripeTrack2")))
@interface MPINGPayworksMagstripeTrack2 : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)magstripeTrack2 __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(NSString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (NSString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (NSString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks.IccTrack2")))
@interface MPINGPayworksIccTrack2 : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iccTrack2 __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks.TerminalConfigurationVersion")))
@interface MPINGPayworksTerminalConfigurationVersion : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalConfigurationVersion __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks.TerminalGraphicsVersion")))
@interface MPINGPayworksTerminalGraphicsVersion : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalGraphicsVersion __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payworks.TerminalAidsAndKeysVersion")))
@interface MPINGPayworksTerminalAidsAndKeysVersion : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalAidsAndKeysVersion __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@property (readonly) NSString *longDescription __attribute__((swift_name("longDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringMapper")))
@interface MPINGHexStringMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hexStringMapper __attribute__((swift_name("init()")));
- (MPINGHexString *)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGHexString *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AsciiMapper")))
@interface MPINGAsciiMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)asciiMapper __attribute__((swift_name("init()")));
- (NSString *)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(NSString *)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) int8_t padding __attribute__((swift_name("padding")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BcdNumberMapper")))
@interface MPINGBcdNumberMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bcdNumberMapper __attribute__((swift_name("init()")));
- (MPINGLong *)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGLong *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberMapper")))
@interface MPINGNumberMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)numberMapper __attribute__((swift_name("init()")));
- (MPINGLong *)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGLong *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateMapper")))
@interface MPINGDateMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateMapper __attribute__((swift_name("init()")));
- (MPINGDate * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGDate *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeMapper")))
@interface MPINGTimeMapper : KotlinBase <MPINGTlvMapper>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timeMapper __attribute__((swift_name("init()")));
- (MPINGDate * _Nullable)toValueRawData:(MPINGHexString *)rawData __attribute__((swift_name("toValue(rawData:)")));
- (MPINGHexString *)fromValueValue:(MPINGDate *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa")))
@interface MPINGVisa : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)visa __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CustomerExclusiveData")))
@interface MPINGVisaCustomerExclusiveData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customerExclusiveData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.TerminalTransactionQualifiers")))
@interface MPINGVisaTerminalTransactionQualifiers : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)terminalTransactionQualifiers __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.FormFactorIndicator")))
@interface MPINGVisaFormFactorIndicator : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)formFactorIndicator __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CardTransactionQualifier")))
@interface MPINGVisaCardTransactionQualifier : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardTransactionQualifier __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CardAuthenticationRelatedData")))
@interface MPINGVisaCardAuthenticationRelatedData : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardAuthenticationRelatedData __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Visa.CardCvmLimit")))
@interface MPINGVisaCardCvmLimit : MPINGAbstractTlvReference
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardCvmLimit __attribute__((swift_name("init()")));
- (instancetype)initWithTag:(MPINGTlvTag *)tag mapper:(id<MPINGTlvMapper>)mapper length:(MPINGTlvDataLength *)length __attribute__((swift_name("init(tag:mapper:length:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (MPINGTlvPrimitiveItem *)tlvFromValueValue:(MPINGHexString *)value __attribute__((swift_name("tlvFromValue(value:)")));
- (MPINGHexString * _Nullable)valueFromTlvTlv:(MPINGTlvPrimitiveItem *)tlv __attribute__((swift_name("valueFromTlv(tlv:)")));
- (MPINGHexString * _Nullable)firstValueInItems:(id _Nullable)items __attribute__((swift_name("firstValueIn(items:)")));
@property (readonly) NSString *shortDescription __attribute__((swift_name("shortDescription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByteBuffer")))
@interface MPINGByteBuffer : KotlinBase
- (instancetype)initWithBytes:(MPINGKotlinByteArray *)bytes __attribute__((swift_name("init(bytes:)"))) __attribute__((objc_designated_initializer));
- (void)skipHeadZeros __attribute__((swift_name("skipHeadZeros()")));
- (MPINGByte * _Nullable)next __attribute__((swift_name("next()")));
- (MPINGKotlinByteArray * _Nullable)nextCount:(int32_t)count __attribute__((swift_name("next(count:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)hasMoreNumber:(int32_t)number __attribute__((swift_name("hasMore(number:)")));
- (MPINGKotlinByteArray *)remaining __attribute__((swift_name("remaining()")));
- (int32_t)remainingLength __attribute__((swift_name("remainingLength()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("TlvItem")))
@interface MPINGTlvItem : KotlinBase
- (BOOL)isPrivateOrSensitive __attribute__((swift_name("isPrivateOrSensitive()")));
@property (readonly) MPINGTlvTag *tag __attribute__((swift_name("tag")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvPrimitiveItem")))
@interface MPINGTlvPrimitiveItem : MPINGTlvItem
- (instancetype)initWithTagString:(MPINGHexString *)tagString value:(MPINGHexString *)value __attribute__((swift_name("init(tagString:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(MPINGTlvTag *)tag value:(MPINGHexString *)value __attribute__((swift_name("init(tag:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (MPINGTlvTag *)component1 __attribute__((swift_name("component1()")));
- (MPINGHexString *)component2 __attribute__((swift_name("component2()")));
- (MPINGTlvPrimitiveItem *)doCopyTag:(MPINGTlvTag *)tag value:(MPINGHexString *)value __attribute__((swift_name("doCopy(tag:value:)")));
@property (readonly) MPINGTlvTag *tag __attribute__((swift_name("tag")));
@property (readonly) MPINGHexString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvConstructedItem")))
@interface MPINGTlvConstructedItem : MPINGTlvItem
- (instancetype)initWithTagString:(MPINGHexString *)tagString subitems:(NSArray<MPINGTlvItem *> *)subitems __attribute__((swift_name("init(tagString:subitems:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTag:(MPINGTlvTag *)tag subitems:(NSArray<MPINGTlvItem *> *)subitems __attribute__((swift_name("init(tag:subitems:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGTlvTag *)component1 __attribute__((swift_name("component1()")));
- (NSArray<MPINGTlvItem *> *)component2 __attribute__((swift_name("component2()")));
- (MPINGTlvConstructedItem *)doCopyTag:(MPINGTlvTag *)tag subitems:(NSArray<MPINGTlvItem *> *)subitems __attribute__((swift_name("doCopy(tag:subitems:)")));
@property (readonly) MPINGTlvTag *tag __attribute__((swift_name("tag")));
@property (readonly) NSArray<MPINGTlvItem *> *subitems __attribute__((swift_name("subitems")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvError")))
@interface MPINGTlvError : KotlinBase
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MPINGTlvError *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvParser")))
@interface MPINGTlvParser : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGKotlinPair *)parseHexString:(MPINGHexString *)hexString __attribute__((swift_name("parse(hexString:)")));
- (MPINGKotlinPair *)parseBytes:(MPINGKotlinByteArray *)bytes __attribute__((swift_name("parse(bytes:)")));
- (MPINGKotlinPair *)parseAsTlvHexBufferHexString:(MPINGHexString *)hexString __attribute__((swift_name("parseAsTlvHexBuffer(hexString:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvSerializer")))
@interface MPINGTlvSerializer : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGKotlinByteArray *)serializeItems:(id)items __attribute__((swift_name("serialize(items:)")));
- (MPINGKotlinByteArray *)serializeItem:(MPINGTlvItem *)item __attribute__((swift_name("serialize(item:)")));
- (MPINGHexString *)serializeToTlvHexBufferItems:(id)items __attribute__((swift_name("serializeToTlvHexBuffer(items:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagClass")))
@interface MPINGTagClass : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGTagClass *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGTagClass *universal __attribute__((swift_name("universal")));
@property (class, readonly) MPINGTagClass *application __attribute__((swift_name("application")));
@property (class, readonly) MPINGTagClass *contextSpecific __attribute__((swift_name("contextSpecific")));
@property (class, readonly) MPINGTagClass *private_ __attribute__((swift_name("private_")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGTagClass *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t byte __attribute__((swift_name("byte")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagType")))
@interface MPINGTagType : MPINGKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) MPINGTagType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) MPINGTagType *primitive __attribute__((swift_name("primitive")));
@property (class, readonly) MPINGTagType *constructed __attribute__((swift_name("constructed")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(MPINGTagType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) int8_t byte __attribute__((swift_name("byte")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvTag")))
@interface MPINGTlvTag : KotlinBase
- (instancetype)initWithValue:(MPINGHexString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (MPINGHexString *)component1 __attribute__((swift_name("component1()")));
- (MPINGTlvTag *)doCopyValue:(MPINGHexString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) MPINGTagClass *tagClass __attribute__((swift_name("tagClass")));
@property (readonly) MPINGTagType *type __attribute__((swift_name("type")));
@property (readonly) MPINGHexString *value __attribute__((swift_name("value")));
@end;

@interface MPINGLocale (Extensions)
- (MPINGKotlinArray *)localizedPromptPrompt:(MPINGLocalizationPrompt *)prompt arguments:(MPINGKotlinArray *)arguments __attribute__((swift_name("localizedPrompt(prompt:arguments:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MPINGKotlinByteArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MPINGByte *(^)(MPINGInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MPINGKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface MPINGKotlinByteArray (Extensions)
- (MPINGHexString *)toHexString __attribute__((swift_name("toHexString()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int64_t)toLong __attribute__((swift_name("toLong()")));
- (int32_t)toBCDInt __attribute__((swift_name("toBCDInt()")));
- (int64_t)toBCDLong __attribute__((swift_name("toBCDLong()")));
@end;

@interface MPINGHexString (Extensions)
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int32_t)toBCDInt __attribute__((swift_name("toBCDInt()")));
- (int64_t)toBCDLong __attribute__((swift_name("toBCDLong()")));
- (MPINGHexString *)fitInRange:(MPINGKotlinIntRange *)range padding:(int8_t)padding style:(MPINGPaddingStyle *)style __attribute__((swift_name("fitIn(range:padding:style:)")));
- (MPINGHexString *)padNewLength:(int32_t)newLength byte:(int8_t)byte style:(MPINGPaddingStyle *)style __attribute__((swift_name("pad(newLength:byte:style:)")));
- (MPINGHexString *)cutPaddingNewLength:(int32_t)newLength style:(MPINGPaddingStyle *)style __attribute__((swift_name("cutPadding(newLength:style:)")));
- (MPINGKotlinByteArray *)toBytes __attribute__((swift_name("toBytes()")));
- (NSString *)toAsciiString __attribute__((swift_name("toAsciiString()")));
@end;

@interface MPINGEmvCardholderVerificationMethodResultsCvm (Extensions)
- (MPINGCardholderVerification * _Nullable)cardholderVerification __attribute__((swift_name("cardholderVerification()")));
@end;

@interface MPINGIngenicoContactlessInformationOutCvm (Extensions)
- (MPINGCardholderVerification *)cardholderVerification __attribute__((swift_name("cardholderVerification()")));
@end;

@interface MPINGReadVersionResponseHwVersion (Extensions)
- (MPINGAccessoryFamilyIngenico *)accessoryFamily __attribute__((swift_name("accessoryFamily()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializationKt")))
@interface MPINGInitializationKt : KotlinBase
+ (void)doInitKotlinRuntime __attribute__((swift_name("doInitKotlinRuntime()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MposErrorKt")))
@interface MPINGMposErrorKt : KotlinBase
@property (class) id<MPINGMposErrorBuilder> MposErrorBuilder __attribute__((swift_name("MposErrorBuilder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KLogKt")))
@interface MPINGKLogKt : KotlinBase
@property (class) id<MPINGLogger> KLog __attribute__((swift_name("KLog")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocaleKt")))
@interface MPINGLocaleKt : KotlinBase
@property (class) MPINGKotlinArray *(^Localizer)(MPINGLocale *, MPINGLocalizationPrompt *, MPINGKotlinArray *) __attribute__((swift_name("Localizer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringKt")))
@interface MPINGStringKt : KotlinBase
+ (NSString *)formatLongFormat:(NSString *)format arg:(int64_t)arg __attribute__((swift_name("formatLong(format:arg:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutinesKt")))
@interface MPINGCoroutinesKt : KotlinBase
@property (class) id<MPINGKotlinx_coroutines_coreCoroutineScope> IngenicoScope __attribute__((swift_name("IngenicoScope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BamboraImageDataKt")))
@interface MPINGBamboraImageDataKt : KotlinBase
+ (MPINGImageData *)BamboraImageData __attribute__((swift_name("BamboraImageData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayworksImageDataKt")))
@interface MPINGPayworksImageDataKt : KotlinBase
+ (MPINGImageData *)PayworksImageData __attribute__((swift_name("PayworksImageData()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SredDataFormatterKt")))
@interface MPINGSredDataFormatterKt : KotlinBase
@property (class) id<MPINGSredDataFormatterI> SredDataFormatter __attribute__((swift_name("SredDataFormatter")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DfsBaseCommandKt")))
@interface MPINGDfsBaseCommandKt : KotlinBase
+ (MPINGHexString *)toLittleEndianHexString:(int32_t)receiver size:(int32_t)size __attribute__((swift_name("toLittleEndianHexString(_:size:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringTransformExtensionsKt")))
@interface MPINGHexStringTransformExtensionsKt : KotlinBase
+ (MPINGHexString * _Nullable)toHexString:(NSString *)receiver __attribute__((swift_name("toHexString(_:)")));
+ (MPINGKotlinByteArray *)toBytes:(id)receiver __attribute__((swift_name("toBytes(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveTypesTransformExtensionsKt")))
@interface MPINGPrimitiveTypesTransformExtensionsKt : KotlinBase
+ (MPINGHexString *)toHexString:(int8_t)receiver __attribute__((swift_name("toHexString(_:)")));
+ (MPINGHexString *)toHexString:(int32_t)receiver size:(int32_t)size __attribute__((swift_name("toHexString(_:size:)")));
+ (int8_t)bTheInt:(int32_t)theInt __attribute__((swift_name("b(theInt:)")));
+ (MPINGKotlinByteArray *)toByteArray:(int32_t)receiver size:(int32_t)size __attribute__((swift_name("toByteArray(_:size:)")));
+ (MPINGKotlinByteArray *)toByteArray:(int64_t)receiver size_:(int32_t)size __attribute__((swift_name("toByteArray(_:size_:)")));
+ (MPINGKotlinByteArray *)toVariableLengthByteArray:(int32_t)receiver __attribute__((swift_name("toVariableLengthByteArray(_:)")));
+ (MPINGKotlinByteArray *)toVariableLengthByteArray_:(int64_t)receiver __attribute__((swift_name("toVariableLengthByteArray(__:)")));
+ (MPINGHexString *)toBcdHexString:(int64_t)receiver __attribute__((swift_name("toBcdHexString(_:)")));
+ (MPINGKotlinByteArray *)toBcdByteArray:(int64_t)receiver __attribute__((swift_name("toBcdByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexStringKt")))
@interface MPINGHexStringKt : KotlinBase
+ (MPINGHexString *)hexString:(NSString *)string __attribute__((swift_name("hex(string:)")));
+ (MPINGKotlinByteArray *)bytesString:(NSString *)string __attribute__((swift_name("bytes(string:)")));
@property (class, readonly) NSString *HEX_CHARS __attribute__((swift_name("HEX_CHARS")));
@property (class, readonly) NSSet<id> *HEX_CHARS_SET __attribute__((swift_name("HEX_CHARS_SET")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessoryDetailsKt")))
@interface MPINGAccessoryDetailsKt : KotlinBase
@property (class) id<MPINGAccessoryDetailsBuilder> AccessoryDetailsBuilder __attribute__((swift_name("AccessoryDetailsBuilder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecimalNumberKt")))
@interface MPINGDecimalNumberKt : KotlinBase
+ (MPINGDecimalNumber *)decInteger:(int64_t)integer fraction:(int64_t)fraction __attribute__((swift_name("dec(integer:fraction:)")));
+ (uint64_t)pow:(uint64_t)receiver n:(int16_t)n __attribute__((swift_name("pow(_:n:)")));
+ (int32_t)mppSafeHashCode:(BOOL)receiver __attribute__((swift_name("mppSafeHashCode(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MagstripeInformationKt")))
@interface MPINGMagstripeInformationKt : KotlinBase
@property (class) id<MPINGMagstripeInformationBuilder> MagstripeInformationBuilder __attribute__((swift_name("MagstripeInformationBuilder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderModeKt")))
@interface MPINGProviderModeKt : KotlinBase
@property (class) MPINGProviderMode *TransactionProviderMode __attribute__((swift_name("TransactionProviderMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IterableHelperKt")))
@interface MPINGIterableHelperKt : KotlinBase
+ (BOOL)contentEquals:(id)receiver other:(id)other __attribute__((swift_name("contentEquals(_:other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvItemKt")))
@interface MPINGTlvItemKt : KotlinBase
+ (NSArray<MPINGTlvItem *> *)filterPrivateOrSensitiveItems:(id)receiver __attribute__((swift_name("filterPrivateOrSensitiveItems(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvParserKt")))
@interface MPINGTlvParserKt : KotlinBase
+ (NSArray<MPINGTlvItem *> *)tlvItemsTlvString:(MPINGHexString *)tlvString __attribute__((swift_name("tlvItems(tlvString:)")));
+ (MPINGTlvItem *)tlvItemTlvString:(MPINGHexString *)tlvString __attribute__((swift_name("tlvItem(tlvString:)")));
+ (MPINGTlvItem *)tlvItemTlvString_:(NSString *)tlvString __attribute__((swift_name("tlvItem(tlvString_:)")));
+ (MPINGTlvItem *)tlvItemTag:(MPINGHexString *)tag value:(MPINGHexString *)value __attribute__((swift_name("tlvItem(tag:value:)")));
+ (MPINGTlvItem *)tlvItemTag:(NSString *)tag value_:(MPINGHexString *)value __attribute__((swift_name("tlvItem(tag:value_:)")));
+ (MPINGTlvItem *)tlvItemTag:(NSString *)tag value__:(NSString *)value __attribute__((swift_name("tlvItem(tag:value__:)")));
@property (class, readonly) int32_t TAG_SIZE_PRIMARY_MASK_ADD_SUBSEQUENT __attribute__((swift_name("TAG_SIZE_PRIMARY_MASK_ADD_SUBSEQUENT")));
@property (class, readonly) int32_t TAG_SIZE_CONSECUTIVE_MASK_ADD_SUBSEQUENT __attribute__((swift_name("TAG_SIZE_CONSECUTIVE_MASK_ADD_SUBSEQUENT")));
@property (class, readonly) int32_t LENGTH_CONSTRUCTED_FLAG_MASK __attribute__((swift_name("LENGTH_CONSTRUCTED_FLAG_MASK")));
@property (class, readonly) int32_t LENGTH_BYTES_MASK __attribute__((swift_name("LENGTH_BYTES_MASK")));
@property (class, readonly) int32_t LENGTH_MAX_INTEGER_BYTES __attribute__((swift_name("LENGTH_MAX_INTEGER_BYTES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvSerializerKt")))
@interface MPINGTlvSerializerKt : KotlinBase
+ (MPINGKotlinByteArray *)serializeItem:(MPINGTlvItem *)item __attribute__((swift_name("serialize(item:)")));
+ (MPINGKotlinByteArray *)serializeItems:(id)items __attribute__((swift_name("serialize(items:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TlvTagKt")))
@interface MPINGTlvTagKt : KotlinBase
+ (MPINGTlvTag *)tagString:(NSString *)string __attribute__((swift_name("tag(string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface MPINGKotlinPair : KotlinBase
- (instancetype)initWithFirst:(id _Nullable)first second:(id _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (MPINGKotlinPair *)doCopyFirst:(id _Nullable)first second:(id _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) id _Nullable first __attribute__((swift_name("first")));
@property (readonly) id _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol MPINGKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MPINGKotlinSuspendFunction1 <MPINGKotlinSuspendFunction>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPINGKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MPINGInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPINGKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MPINGKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinIntProgression")))
@interface MPINGKotlinIntProgression : KotlinBase <MPINGKotlinIterable>
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (MPINGKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end;

__attribute__((swift_name("KotlinClosedRange")))
@protocol MPINGKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface MPINGKotlinIntRange : MPINGKotlinIntProgression <MPINGKotlinClosedRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(MPINGInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPINGInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) MPINGInt *start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPINGKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MPINGKotlinByteIterator : KotlinBase <MPINGKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MPINGKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MPINGKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface MPINGKotlinIntIterator : KotlinBase <MPINGKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPINGInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MPINGKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MPINGKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MPINGKotlinCoroutineContextElement> _Nullable)getKey:(id<MPINGKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MPINGKotlinCoroutineContext>)minusKeyKey:(id<MPINGKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MPINGKotlinCoroutineContext>)plusContext:(id<MPINGKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MPINGKotlinCoroutineContextElement <MPINGKotlinCoroutineContext>
@required
@property (readonly) id<MPINGKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MPINGKotlinCoroutineContextKey
@required
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
