//
//  main.cpp
//  hap-cpp
//
//  Created by Adelino Faria on 22/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#include <stdio.h>

#include <gtest/gtest.h>

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
