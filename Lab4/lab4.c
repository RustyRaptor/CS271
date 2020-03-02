//  CS278 - Lab Assignment: #4
//  Program name: Lab 4 Arrays
//  Purpose of program: Does some stuff with arrays
//  written by: Ziad Arafat
//  Date Written: 2020-02-24

#include "arrayfunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main( void ) {
     //Problem 1
     printf( "Problem 1\n" );

     int intArr[20] = {};

     fillInteger( intArr, 20, -20, 20 );

     for ( int i = 0; i < 20; i++ ) {
          printf( "%d ", intArr[i] );

          // when we reach a multiple of 10 print a newline.
          if ( ( i + 1 ) % 10 == 0 ) {
               printf( "\n" );
          } // end if
     } // end for
     printf( "\n" );

     findConsecutive( intArr, 20 );

     // helps make the output more eye friendly.
     printf( "\n\n" );

     //Problem 2
     printf( "Problem 2\n" );

     char charArr[50] = {};

     fillCharacter( charArr, 50, 'a', 'z' );

     for ( int i = 0; i < 50; i++ ) {
          printf( "%c ", charArr[i] );
     } // end for
     printf( "\n" );

     findTriples( charArr, 50 );

     // Problem 3
     char *wordArray[20] = { "one",       "two",      "three",    "four",
                             "five",      "six",      "seven",    "eight",
                             "nine",      "ten",      "eleven",   "twelve",
                             "thirteen",  "fourteen", "fifteen",  "sixteen",
                             "seventeen", "eighteen", "nineteen", "twenty" };

     char userChar = '0';

     while ( !isalpha( userChar ) ) {
          printf( "please enter an alphabetic character to search for: " );
          userChar = tolower( getchar( ) );
          getchar( );
     } // end while

     findWords( wordArray, 20, userChar );

     printf( "\n\n" );

     // Problem 4

     printf( "Problem 4\n" );

     float floatArr[10] = {};
     fillFloat( floatArr, 10, 1.0, 50.0 );

     for ( int i = 0; i < 10; i++ ) {
          printf( "%.1f  ", floatArr[i] );
     } // end for

     printf( "\n\n" );

     printf( "The mean of the data is %.1f\n", floatMean( floatArr, 10 ) );
     printf( "The min of the data is %.1f\n", floatMin( floatArr, 10 ) );
     printf( "The max of the data is %.1f\n", floatMax( floatArr, 10 ) );

     return 0;
}
