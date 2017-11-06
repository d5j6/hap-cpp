//
//  PairingOverIP.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 15/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef PairingOverIP_hpp
#define PairingOverIP_hpp

#include <stdio.h>

#include "Pairing.hpp"

typedef enum {

    /**
     *  Success.
     */
    PairingStatusCodeOK = 200,

    /**
     *  Generic error for a problem with the request, e.g. bad TLV, state error, etc.
     */
    PairingStatusCodeBadRequest = 400,

    /**
     *  Wrong HTTP request method, e.g. GET when expecting POST.
     */
    PairingStatusCodeMethodNotAllowed = 405,

    /**
     *  Server cannot handle any more requests of this type, e.g. attempt to pair while already pairing.
     */
    PairingStatusCodeTooManyRequests = 429,

    /**
     *  Request to secure resource made without establishing security, e.g. didn't perform Pair Verify.
     */
    PairingStatusCodeConnectionAuthorizationRequired = 470,

    /**
     *  Server had a problem, e.g. ran out of memory.
     */
    PairingStatusCodeInternalServerError = 500,
} PairingStatusCode;

class PairingOverIP : public Pairing {

};

#endif /* PairingOverIP_hpp */
