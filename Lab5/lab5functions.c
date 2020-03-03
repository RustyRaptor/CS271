//  CS278 - Lab Assignment: #5
//  Program name: Lab5 Pointers
//  Purpose of program: does pointer stuff
//  written by: Ziad Arafat
//  Date Written: 2020-03-02

#include "lab5functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swap(float *aPtr, float *bPtr) {
     float t = *aPtr;
     *aPtr = *bPtr;
     *bPtr = t;
}