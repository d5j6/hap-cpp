//
//  MulticastDNS.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 22/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef MulticastDNS_hpp
#define MulticastDNS_hpp

#include <stdio.h>

class MulticastDNS {
private:
    bool enabled;
public:
    bool enableDiscovery();
    bool disableDiscovery();
};

#endif /* MulticastDNS_hpp */
