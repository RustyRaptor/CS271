//  CS278 - Lab Assignment: 6
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

int main( void ) {
     char line[80];

     // int count;

     FILE *cfPtr;

     if ( ( cfPtr = fopen( "lines.dat", "r" ) ) == NULL ) {
          puts( "File could not be opened\n" );
     } else {
          fgets( line, 80, cfPtr );
          while ( !feof( cfPtr ) ) {
               printf( "Line Read: %s\n\n", line );
               fgets( line, 80, cfPtr );
          } // end while
          fclose( cfPtr );
     } // end else
} // end main
