#!/bin/bash

result=${PWD##*/}          # to assign to a variable
result=${result:-/}

g++ -o "$result" main.cpp

./"$result"
