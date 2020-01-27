# Concardis Example

This is an example project for developers who don't like the existing UI and want to rebuild it based on the functions provided by the Payworks SDK. Due to the lack of documentation from Concardis side we are providing this example for you.

## Requirements

To work with the example project you need the following:
* You need an account for the Concardis OptiPay Händler-Portal: https://www.concardis-optipay.de/mein-konto/
* A Concardis OptiPay card reader (Miura Shuttle) shown here: https://www.concardis-optipay.de
* Any iOS device which is able to connect to card reader via Bluetooth

## Example

To run the example project, clone the repo, and run `pod install` from the root directory first.

## Use it

Before you can do any transaction or get any transaction history data you have to login with the same credentials you got for the Concardis OptiPay Händler-Portal:
```swift
MPMpos.login(with: .LIVE, applicationIdentifier: Constants.applicationIdentifier, //default identifier: "concardis.terminal"
                     username: username, //provided username
                     password: password, //provided password
                     success: { (email, merchantIdentifier, merchantSecretKey) in
  //now you are able to do transactions with the returned merchantIdentifier and merchantSecret
}) { (username, error) in
  debugPrint(error.localizedDescription)
}
```

After successfully logging in, you are able to do the transaction. Please check the values in Constants struct and set them in your business logic. Most common values are amount, currency and a subject for your transaction:
```swift
let provider = MPMpos.transactionProvider(for: .LIVE,
                                          merchantIdentifier: merchantIdentifier,
                                          merchantSecretKey: merchantSecretKey)

let transactionParams = MPTransactionParameters.charge(withAmount: Constants.transactionAmount,
                                                       currency: Constants.transactionCurrency,
                                                       optionals: { optionals in
    optionals.subject = Constants.transactionSubject
})

let accessoryParams = MPAccessoryParameters.externalAccessoryParameters(with: .miuraMPI,
                                                                        protocol: Constants.accessoryProtocol,
                                                                        optionals: nil)
        
let _ = provider.startTransaction(with: transactionParams,
                                  accessoryParameters: accessoryParams,
                                  registered: { (_, transaction) in
    debugPrint("Transaction ID: " + transaction.identifier.debugDescription)
}, statusChanged: { (process, transaction, processDetails) in
    debugPrint(processDetails.information[0], processDetails.information[1])
}, actionRequired: { (process, transaction, action, support) in
    switch action {
        case .customerSignature:
            process.continue(withCustomerSignature: nil, verified: true)
            break
        case .customerIdentification:
            process.continue(withCustomerIdentityVerified: false)
            break
        case .applicationSelection:
            break
        default:
            break
    }
}) { (process, transaction, processDetails) in
    debugPrint(processDetails.information[0], processDetails.information[1])
}
```

That's it. Have fun selling things!

## Author

Matthias Nagel, matthias.nagel@bitfactory.io  
[Bitfactory GmbH](https://www.bitfactory.io)

## License

Concardis Example is available under the MIT license. See the LICENSE file for more info.
