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
#include <ctype.h>

int main( void ) {

     // create a float array size 100
     float fltArr[100] = {};

     // make a pointer to it's first element
     float *fltArrPtr = fltArr;

     // fill it with random floats
     fillFloat( fltArrPtr, 100, 1.0, 100.0 );

     // print them all out neatly
     printf( "Here are our numbers: \n" );
     for ( int i = 0; i < 100 / 5; i++ ) {
          for ( int j = 0; j < 5; j++ ) {
               printf( "%8.1f", *( fltArrPtr + i + ( j * 20 ) ) );
          } //end for
          printf( "\n" );
     } // end for

     // now let's sort it and count the number of compare operations. 
     // result should be a summation from i = 0 to n of (n-i) so if n=100
     // it's 5050
     int comps = selectionSort( fltArrPtr, 100 );
     printf( "Here are our sorted numbers:\n" );
     for ( int i = 0; i < 100 / 5; i++ ) {
          for ( int j = 0; j < 5; j++ ) {
               printf( "%8.1f", *( fltArrPtr + i + ( j * 20 ) ) );
          } //end for
          printf( "\n" );
     } // end for

     printf( "The sort took %d comparisons\n", comps );

     return 0;
}
