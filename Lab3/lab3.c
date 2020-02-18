//  CS278 - Lab Assignment: #3
//  Program name: Lab3
//  Purpose of program: generates random numbers
//  written by: Ziad Arafat
//  Date Written: 2020-02-17


// Why does it ask us to include the header file here? Shouldn't we be including
// the functions C file? It won't work otherwise. 
// #include "lab3functions.h"
#include "lab3functions.c"
#include <stdio.h>

int main( void ) {
     // test factors
     factors( 16, 8 );
     factors( 12, 20 );

     // test timeDisplay
     timeDisplay( 25503 );
     timeDisplay( 25678 );

     // test rollingDice
     rollingDice( 20 );
     rollingDice( 5678 );
}
