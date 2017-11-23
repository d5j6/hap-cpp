//
//  main.cpp
//  hap-cpp
//
//  Created by Adelino Faria on 15/10/2017.
//  Copyright © 2017 Rabid Cat. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
#include <iostream>

#include <HomeKitAccessoryProtocol.h>

void usage() {
    std::cout << "OVERVIEW: HomeKit Accessory Protocol library for C++" << std::endl << std::endl;
    std::cout << "USAGE: hap-cpp [OPTIONS...]" << std::endl << std::endl;
    std::cout << "OPTIONS:" << std::endl;
    std::cout << "  -h                      Display available options" << std::endl;
}

int main(int argc, char **argv) {

    int option;

    while ((option = getopt(argc, argv, "h")) != -1) {
        switch (option) {
            case 'h':
                usage();
                return 1;

            default:
                usage();
                exit(EXIT_FAILURE);
        }
    }

    try {
        system("clear");

        std::cout << std::endl << "HomeKit Accessory Protocol library for C++" << std::endl << std::endl;

    } catch (std::exception &exception) {
        std::cerr << "Error occurred: " << exception.what() << std::endl;
    }

    return 0;
}
