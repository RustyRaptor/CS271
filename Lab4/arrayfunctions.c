//  CS271 - Lab Assignment: #
//  Program name: progname
//  Purpose of program: progpurpose
//  written by: Ziad Arafat
//  Date Written: 2020-02-24

#include "arrayfunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void fillInteger( int a[], int length, int min, int max ) {
     srand( time( NULL ) );
     for ( int i = 0; i < length; i++ ) {
          a[i] = ( min + rand( ) % max );
     } // end for
}

void fillCharacter( char c[], int length, char start, char end ) {
     srand( time( NULL ) );
     for ( int i = 0; i < length; i++ ) {
          c[i] = ( start + ( rand( ) % ( ( end + 1 ) - start ) ) );
     } // end for
}

void findConsecutive( int array[], int length ) {
     int a = 0;
     int b = 1;

     while ( array[b] != '\0' ) {
          if ( array[b] == array[a] + 1 ) {
               printf(
                    "there are consecutive integers at index [%d] and [%d]\n",
                    a, b );
          } // end if
          if ( array[b] == array[a] - 1 ) {
               printf(
                    "there are consecutive integers at index [%d] and [%d]\n",
                    a, b );
          } // end if
          a++;
          b++;
     } // end while
     printf( "\n" );
}

void findTriples( char c[], int length ) {
     int j = 0;
     int k = 1;
     int l = 2;

     while ( c[l] != '\0' ) {
          if ( c[j] == c[k] - 1 && c[k] == c[l] - 1 ) {
               printf( "%c%c%c\n", c[j], c[k], c[l] );
          } // end if
          j++;
          k++;
          l++;
     } // end while
     printf( "\n" );
}

void findWords( char *c[], int length, char letter ) {
     for ( int i = 0; i < length; i++ ) {
          if ( strchr( c[i], letter ) != NULL ) {
               printf( "%s, ", c[i] );
          } // end if
     } // end for
     printf( "\n" );
}

void fillFloat( float a[], int length, float min, float max ) {
     srand( time( NULL ) );
     // we start with a random float
     // we then multiply by 10.0 and cast to an integer
     // then we cast back to float and divide by 10.0 to get the 1 decimal place.
     float initfloat;
     int intcast;
     float finalfloat;
     for ( int i = 0; i < length; i++ ) {
          initfloat = min + ( ( float )rand( ) / ( float )( RAND_MAX / max ) );
          intcast = ( int )( initfloat * 10.0 );
          finalfloat = ( ( float )intcast ) / 10.0;
          a[i] = finalfloat;
     } // end for
     printf( "\n" );
}

float floatMean( float array[], int length ) {
     float total = 0;
     float mean = 0;

     for ( int i = 0; i < length; i++ ) {
          total += array[i];
     }

     mean = total / length;
     return mean;
}

float floatMin( float array[], int length ) {
     float min;
     for ( int i = 0; i < length; i++ ) {
          if ( i == 0 ) {
               min = array[i];
          }

          if ( array[i] < min ) {
               min = array[i];
          }
     }

     return min;
}

float floatMax( float array[], int length ) {
     float max;
     for ( int i = 0; i < length; i++ ) {
          if ( i == 0 ) {
               max = array[i];
          }

          if ( array[i] > max ) {
               max = array[i];
          }
     }

     return max;
}
