#!/bin/bash

if [ -z "$1" ]; then
    if [ ! -d "build" ]; then
        mkdir "build"
    fi

    cd "build"
    cmake ../.
    cd -
else
    if [ "$1" = "clean" ]; then
        rm -rf ./build
    else
        echo "Wrong argument"
    fi
fi
