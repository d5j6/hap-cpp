//
//  AddPairing.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 12/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef AddPairing_hpp
#define AddPairing_hpp

#include <stdio.h>

class AddPairing {

public:
    /**
     *  M1: iOS Device -> Accessory -- `Add Pairing Request'
     */
    void addPairingM1();

    /**
     *  M2: Accessory -> iOS Device -- `Add Pairing Response'
     */
    void addPairingM2();
};

#endif /* AddPairing_hpp */
