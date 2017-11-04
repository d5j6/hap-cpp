//
//  PairSetup.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 12/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef PairSetup_hpp
#define PairSetup_hpp

#include <stdio.h>

class PairSetup {

public:
    /**
     *  M1: iOS Device -> Accessory -- `SRP Start Request'
     */
    void pairSetupM1();

    /**
     *  M2: Accessory -> iOS Device -- `SRP Start Response'
     */
    void pairSetupM2();

    /**
     *  M3: iOS Device -> Accessory -- `SRP Verify Request'
     */
    void pairSetupM3();

    /**
     *  M4: Accessory -> iOS Device -- `SRP Verify Response'
     */
    void pairSetupM4();

    /**
     *  M5: iOS Device -> Accessory -- `Exchange Request'
     */
    void pairSetupM5();

    /**
     *  M6: Accessory -> iOS Device -- `Exchange Response'
     */
    void pairSetupM6();
};

#endif /* PairSetup_hpp */
