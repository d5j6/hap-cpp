//
//  RemovePairing.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 12/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef RemovePairing_hpp
#define RemovePairing_hpp

#include <stdio.h>

class RemovePairing {

public:
    /**
     *  M1: iOS Device -> Accessory -- `Remove Pairing Request'
     */
    void removePairingM1();

    /**
     *  M2: Accessory -> iOS Device -- `Remove Pairing Response'
     */
    void removePairingM2();
};

#endif /* RemovePairing_hpp */
