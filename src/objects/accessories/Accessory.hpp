//
//  Accessory.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 10/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef Accessory_hpp
#define Accessory_hpp

#include <stdio.h>
#include <vector>

#include <Service.hpp>

class Accessory {

private:
    /**
     *  Integer assigned by the HAP Accessory Server to uniquely identify the HAP Accessory object, see Instance IDs (page 30).
     */
    uint64_t aid;

    /**
     *  Array of Service objects. Must not be empty. The maximum number of services must not exceed 100.
     */
    std::vector<Service> services;
};

#endif /* Accessory_hpp */
