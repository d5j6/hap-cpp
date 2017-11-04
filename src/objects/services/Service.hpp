//
//  Service.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 10/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef Service_hpp
#define Service_hpp

#include <stdio.h>
#include <string>
#include <vector>

#include <Characteristic.hpp>
#include <Service.hpp>

class Service {

private:
    /**
     *  String that defines the type of the service. See Service and Characteristic Types (page 72).
     */
    std::string type;

    /**
     *  Integer assigned by the HAP Accessory Server to uniquely identify the HAP Service object, see Instance IDs (page 30).
     */
    uint64_t iid;

    /**
     *  Array of Characteristic objects. Must not be empty. The maximum number of characteristics must not exceed 100, and each characteristic in the array must have a unique type.
     */
    std::vector<Characteristic> characteristics;

    /**
     *  When set to True, this service is not visible to user.
     */
    bool hidden;

    /**
     *  When set to True, this is the primary service on the accessory.
     */
    bool primary;

    /**
     *  An array of Numbers containing the instance ids of the services that this service links to.
     */
    std::vector<Service> linked;
};

#endif /* Service_hpp */
