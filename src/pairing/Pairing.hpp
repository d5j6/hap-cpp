//
//  Pairing.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 12/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef Pairing_hpp
#define Pairing_hpp

#include <stdio.h>
#include <string>

typedef enum {
    PairingMethodReserved = 0,
    PairingMethodPairSetup = 1,
    PairingMethodPairVerify = 2,
    PairingMethodAddPairing = 3,
    PairingMethodRemovePairing = 4,
    PairingMethodListPairings = 5,
    PairingMethodReserved6 = 6,
    PairingMethodReserved255 = 255,
} PairingMethod;

typedef enum {
} PairingErrorCode;

typedef enum {
} PairingTLVValue;

class Pairing {

private:
    /**
     *  All Pairing Identifiers in Pair Setup are case-sensitive.
     */
    std::string identifier;
};

#endif /* Pairing_hpp */
