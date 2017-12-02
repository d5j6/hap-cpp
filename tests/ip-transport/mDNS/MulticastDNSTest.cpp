//
//  MulticastDNSTest.cpp
//  hap-cpp
//
//  Created by Adelino Faria on 02/12/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#include <stdio.h>

#include <gtest/gtest.h>

#include <HomeKitAccessoryProtocol.h>

namespace {

// The fixture for testing class Foo.
class MulticastDNSTest : public ::testing::Test {
protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    MulticastDNSTest() {
        // You can do set-up work for each test here.
    }

    virtual ~MulticastDNSTest() {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    virtual void TearDown() {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

    // Objects declared here can be used by all tests in the test case for Foo.
};

TEST(MulticastDNSTest, EnableDiscoverySuccess) {

    MulticastDNS mDNS = MulticastDNS();

    bool success = mDNS.enableDiscovery();

    ASSERT_TRUE(success);
}

TEST(MulticastDNSTest, DisableDiscoverySuccess) {

    MulticastDNS mDNS = MulticastDNS();

    mDNS.enableDiscovery();
    bool success = mDNS.disableDiscovery();

    ASSERT_TRUE(success);
}

TEST(MulticastDNSTest, DisableDiscoveryFailure) {

    MulticastDNS mDNS = MulticastDNS();

    bool success = mDNS.disableDiscovery();

    ASSERT_FALSE(success);
}

}  // namespace
