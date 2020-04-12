//  CS271 - Lab Assignment: 6
//  Program name: C Strings
//  Purpose of program: Does Stringy Things
//  written by: Ziad Arafat
//  Date Written: 2020-03-09

#include "textfunctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void blockPrint( const char *c ) {
     for ( int i = 0; c[i] != '\0'; i++ ) {
          printf( "%c", c[i] );
          for ( int j = i; c[j] == c[j + 1]; j++ ) {
               printf( "%c", c[j] );
               i++;
          } // end for
          printf( "\n" );
     } // end for
}

void wordPrint( const char *c ) {
     // creates a copy of the string that we can tokenize with strtok
     char *copy = strdup( c );
     char *tokenPtr = strtok( copy, " " );

     // tokenizes the string and prints eachj subarray separated by a space.
     while ( tokenPtr != NULL ) {
          printf( "%s\n", tokenPtr );
          tokenPtr = strtok( NULL, " " );
     } // end while
}

void removePunctuation( char *c ) {
     for ( int i = 0; c[i] != '\0'; i++ ) {
          // if it's alphanumeric or a space we move all the remaining chars
          // one space to the left.
          if ( !isalnum( c[i] ) && !isspace( c[i] ) ) {
               for ( int j = i; c[j] != '\0'; j++ ) {
                    c[j] = c[j + 1];
               } // end for
               i--; // move back to read the one we copied over it.
          } // end if
     } // end for
}

// same swap from lab5 to do the selection sort.
void swap( char *aPtr, char *bPtr ) {
     float t = *aPtr;
     *aPtr = *bPtr;
     *bPtr = t;
}
void stringSort( char *c ) {
     for ( int i = 0; c[i] != '\0'; i++ ) {
          int space = isspace( c[i] );
          // if it's a space delete it like we do in removePunctuation
          if ( space ) {
               for ( int j = i; c[j] != '\0'; j++ ) {
                    c[j] = c[j + 1];
               } // end for
               i--;
          } // end if
     } // end for

     // Selectiopn sort from Lab5
     for ( int i = 0; *( c + i ) != '\0'; i++ ) {
          int min = i;
          for ( int j = i; *( c + j ) != '\0'; j++ ) {
               if ( *( c + j ) < *( c + min ) ) {
                    min = j;
               } // end if
          } // end for
          if ( min != i ) {
               swap( ( c + i ), ( c + min ) );
          } // end if
     } // end for
}
