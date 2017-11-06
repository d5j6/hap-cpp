//
//  IPTransport.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 19/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef IPTransport_hpp
#define IPTransport_hpp

#include <stdio.h>
#include <string>

#include "mDNS/MulticastDNS.hpp"

/**
 *  @struct HTTP Request struct for IPTransport abstract class
 *
 *  This struct maps all the necessary fields that this framework needs for a HTTP request mapping
 */
struct HTTPRequest {
    std::string verb;
    std::string path;
};

/**
 *  @struct HTTP Response struct for IPTransport abstract class
 *
 *  This struct maps all the necessary fields that this framework needs for a HTTP response mapping
 */
struct HTTPResponse {
    uint16_t statusCode;
};

/**
 *  @brief IP Transport abstract class
 *
 *  This abstract class is meant to be implemented based on the architecture of the target device.
 *  This abstraction is necessary to implement a cross platform HAP framework.
 */
class IPTransport {
public:
    virtual HTTPResponse handleRequestHTTP(HTTPRequest request) = 0;
    virtual uint8_t * handleBonjour(uint8_t *datagram[], uint32_t length) = 0;

private:
    MulticastDNS mDNS;
};

#endif /* IPTransport_hpp */
