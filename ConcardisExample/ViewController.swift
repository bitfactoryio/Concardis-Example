//
// ██████╗ ██╗████████╗███████╗ █████╗  ██████╗████████╗ ██████╗ ██████╗ ██╗   ██╗
// ██╔══██╗██║╚══██╔══╝██╔════╝██╔══██╗██╔════╝╚══██╔══╝██╔═══██╗██╔══██╗╚██╗ ██╔╝
// ██████╔╝██║   ██║   █████╗  ███████║██║        ██║   ██║   ██║██████╔╝ ╚████╔╝
// ██╔══██╗██║   ██║   ██╔══╝  ██╔══██║██║        ██║   ██║   ██║██╔══██╗  ╚██╔╝
// ██████╔╝██║   ██║   ██║     ██║  ██║╚██████╗   ██║   ╚██████╔╝██║  ██║   ██║
// ╚═════╝ ╚═╝   ╚═╝   ╚═╝     ╚═╝  ╚═╝ ╚═════╝   ╚═╝    ╚═════╝ ╚═╝  ╚═╝   ╚═╝
//
// Copyright (c) 2020 Bitfactory GmbH. All rights reserved.
// https://www.bitfactory.io
//
// Redistribution and use in source and binary forms, with or without
// modification, are not permitted.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
//  ViewController.swift
//  ConcardisExample
//
//  Created by Matthias Nagel on 23.12.19.
//  Copyright © 2019 Matthias Nagel. All rights reserved.
//

import UIKit
import mpos_core
import mpos_ui

struct Constants {
    static let applicationIdentifier = "concardis.terminal"
    
    static let accessoryProtocol = "com.miura.shuttle"
    
    static let transactionAmount = NSDecimalNumber(value: 10.00)
    
    static let transactionCurrency: MPCurrency = .EUR
    
    static let transactionSubject = "This is a test subject"
}

class ViewController: UIViewController {
    
    @IBOutlet weak var usernameTextField: UITextField!
    
    @IBOutlet weak var passwordTextField: UITextField!
    
    @IBAction func doLogin(_ sender: UIButton) {
        
        guard let username = usernameTextField.text else {
            return
        }
        
        guard let password = passwordTextField.text else {
            return
        }
        
        MPMpos.login(with: .LIVE, applicationIdentifier: Constants.applicationIdentifier,
                     username: username,
                     password: password,
                     success: { (email, merchantIdentifier, merchantSecretKey) in
            self.doTransaction(merchantIdentifier: merchantIdentifier,
                               merchantSecretKey: merchantSecretKey)
        }) { (username, error) in
            debugPrint(error.localizedDescription)
        }
    }
    
    func doTransaction(merchantIdentifier: String, merchantSecretKey: String) {
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
    }
}

