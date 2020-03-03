//  CS278 - Lab Assignment: #4
//  Program name: Lab 4 Arrays
//  Purpose of program: Does some stuff with arrays
//  written by: Ziad Arafat
//  Date Written: 2020-02-24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main( void ) {
     for ( int i = 0; i < 10; i++ ) {
          printf("%c ", ('a' + (rand()%('z'-'a'))));
     } // end for
}
