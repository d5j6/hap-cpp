//
//  Characteristic.hpp
//  hap-cpp
//
//  Created by Adelino Faria on 10/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#ifndef Characteristic_hpp
#define Characteristic_hpp

#include <stdio.h>
#include <string>
#include <vector>

class Characteristic {

private:
    /**
     *  String that defines the type of the characteristic. See Service and Characteristic Types (page 72).
     *  Required
     */
    std::string type;

    /**
     *  Integer assigned by the HAP Accessory Server to uniquely identify the HAP Characteristic object, see Instance IDs (page 30).
     *  Required
     */
    uint64_t iid;

    /**
     *  The value of the characteristic, which must conform to the "format" property. The literal value null may also be used if the characteristic has no value. This property must be present if and only if the characteristic contains the Paired Read permission, see Table 5-4 (page 67).
     *  Required
     */
    std::string value;

    /**
     *  Array of permission strings describing the capabilities of the characteristic. See Table 5-4 (page 67).
     *  Required, possible values (pr, pw, ev, aa, tw, hd)
     */
    std::vector<std::string> perms;

    /**
     *  Boolean indicating if event notifications are enabled for this characteristic.
     */
    bool ev;

    /**
     *  String describing the characteristic on a manufacturer-specific basis, such as an indoor versus outdoor temperature reading.
     */
    std::string description;

    /**
     *  Format of the value, e.g. "float". See Table 5-5 (page 67).
     *  Required, possible values (bool, uint8, uint16, uint32, uint64, int, float, string, tlv8, data)
     */
    std::string format;

    /**
     *  Unit of the value, e.g. "celsius". See Table 5-6 (page 68).
     *  Possible values (celsius, percentage, arcdegrees, lux, seconds)
     */
    std::string unit;

    /**
     *  Minimum value for the characteristic, which is only appropriate for characteristics that have a format of "int" or "float".
     */
    float minValue;

    /**
     *  Maximum value for the characteristic, which is only appropriate for characteristics that have a format of "int" or "float".
     */
    float maxValue;

    /**
     *  Minimum step value for the characteristic, which is only appropriate for characteristics that have a format of "int" or "float". For example, if this were 0.15, the characteristic value can be incremented from the minimum value in multiples of 0.15.
     */
    float minStep;

    /**
     *  Maximum number of characters if the format is "string". If this property is omitted for "string" formats, then the default value is 64. The maximum value allowed is 256.
     */
    uint8_t maxLen;

    /**
     *  Maximum number of characters if the format is "data". If this property is omitted for "data" formats, then the default value is 2097152.
     */
    uint32_t maxDataLen;

    /**
     *  An array of Numbers where each element represents a valid value.
     */
    std::vector<float> validValues;

    /**
     *  A 2 element array representing the starting value and ending value of the range of valid values.
     */
    float validValuesRange[2];
};

#endif /* Characteristic_hpp */
