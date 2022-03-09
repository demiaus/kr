#!/bin/sh

set -xe

if [ ! -d "./BUILD" ]; then
        mkdir ./BUILD
fi

# Give source file as argument
gcc -o ./BUILD/$(basename $1 .c).out $1
