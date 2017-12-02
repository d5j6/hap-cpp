//
//  AccessoryServer.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 09/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef AccessoryServer_hpp
#define AccessoryServer_hpp

#include <stdio.h>
#include <string>
#include <vector>

#include <Accessory.hpp>
#include <IPTransport.hpp>
#include <Pairing.hpp>

class AccessoryServer {

public:
    void identify();
    void pairSetup();
    void pairVerify();
    void addPairing();
    void removePairing();
    void listPairings();
    void listAccessories();
    void characteristics();

    /**
     *  Every accessory must support a manufacturer-defined mechanism to restore itself to a "factory reset" state
     *  where all pairing information is erased and restored to factory default settings.
     *  This mechanism should be easily accessible to a user, e.g, a physical button or a reset code.
     */
    void factoryReset();

private:
    /**
     *  The Setup Code must conform to the format XXX-XX-XXX where each X is a 0-9 digit and dashes are required.
     *  For example, "101-48-005" (without quotes).
     *  The accessory must generate its SRP verifier with the full Setup Code, including dashes.
     */
    char setupCode[8];

    /**
     *  Device ID of the accessory must be a unique random number generated at every factory reset and must persist across reboots.
     */
    std::string deviceId;

    /**
     *  Accessory with instance ID 1 is the primary accessory (itself)
     */
    std::vector<Accessory> accessories;

    /**
     *  Accessory with instance ID 1 is the primary accessory (itself)
     */
    std::vector<Pairing> pairings;
};

#endif /* AccessoryServer_hpp */

/**
 *  Other repos
 *  https://github.com/KhaosT/HAP-NodeJS
 *  https://github.com/Bouke/HAP
 *  https://github.com/etwmc/Personal-HomeKit-HAP
 *
 *  https://github.com/HomeACcessoryKid/ESP8266-HomeKit
 *
 *  https://gist.github.com/KhaosT/6ff09ba71d306d4c1079
 *
 *  Hardware
 *  https://en.wikipedia.org/wiki/ESP8266
 */
