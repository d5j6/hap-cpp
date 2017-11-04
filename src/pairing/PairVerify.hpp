//
//  PairVerify.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 12/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef PairVerify_hpp
#define PairVerify_hpp

#include <stdio.h>

class PairVerify {

public:
    /**
     *  M1: iOS Device -> Accessory -- `Verify Start Request'
     */
    void pairVerifyM1();

    /**
     *  M2: Accessory -> iOS Device -- `Verify Start Response'
     */
    void pairVerifyM2();

    /**
     *  M3: iOS Device -> Accessory -- `Verify Finish Request'
     */
    void pairVerifyM3();

    /**
     *  M4: Accessory -> iOS Device -- `Verify Finish Response'
     */
    void pairVerifyM4();
};

#endif /* PairVerify_hpp */
