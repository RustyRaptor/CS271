//  CS271 - Lab Assignment: #5
//  Program name: Lab5 Pointers
//  Purpose of program: does pointer stuff
//  written by: Ziad Arafat
//  Date Written: 2020-03-02

#include "lab5functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swap( float *aPtr, float *bPtr ) {
     float t = *aPtr;
     *aPtr = *bPtr;
     *bPtr = t;
}

void fillFloat( float *a, int length, float min, float max ) {
     srand( time( NULL ) );
     for ( int i = 0; i < length; i++ ) {
          float inititial = rand( ) / ( float )RAND_MAX;
          *( a + i ) = ( min + inititial * ( ( max + 1 ) - min ) );
     } // end for
}

int selectionSort( float *a, int length ) {
     int compCount = 0;
     for ( int i = 0; i < length; i++ ) {
          int min = i;
          for ( int j = i; j < length; j++ ) {
               if ( *( a + j ) < *( a + min ) ) {
                    min = j;
               } // end if
               compCount++;
          } // end for
          if ( min != i ) {
               swap( ( a + i ), ( a + min ) );
          } // end if
     } // end for
     return compCount;
}