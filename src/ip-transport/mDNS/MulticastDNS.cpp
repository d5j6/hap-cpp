//
//  MulticastDNS.cpp
//  hap-cpp
//
//  Created by Adelino Faria on 22/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#include "MulticastDNS.hpp"

bool MulticastDNS::enableDiscovery() {

    this->enabled = true;

    return this->enabled;
}

bool MulticastDNS::disableDiscovery() {

    return this->enabled;
}
