//  CS271 - Lab Assignment: 2
//  Program Name: Cereal
//  Purpose: Finds the healthiest Cereal
//  written by: Ziad Arafat
//  Date Written: 02-07-2020

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void ) {
     int minProtein;
     int maxCalories;
     int maxSugar;

     // get constraint values

     // get protein
     printf( "input the minimum number of grams of protein\n" );
     scanf( "%d", &minProtein );

     // get calories
     printf( "input the maximum number of calories\n" );
     scanf( "%d", &maxCalories );

     // get sugar
     printf( "input the maximum number of grams of sugar\n" );
     scanf( "%d", &maxSugar );

     printf( "Here are the cereals that match your criteria:\n\n" );

     char name[23], companyName[15];
     char company = ' ';
     int cals = 0, protein = 0, sugar = 0, count = 0;

     // declare our file to read from
     FILE *filePtr;

     // ensure the file exists.
     if ( ( filePtr = fopen( "./cereal.txt", "r" ) ) == NULL ){
          printf( "File could not be opened\n" );
     } // end if
         

     else {
          while ( !feof( filePtr ) ) {

               // read in all the needed data from the line
               fscanf( filePtr, "%s %c %d %d %*d %*d %*f %*f %d", name,
                       &company, &cals, &protein, &sugar );

               // We must break the loop because it will read one more line 
               // otherwise
               if ( feof( filePtr ) ) {
                    printf( "%d cereals match your criteria.\n", count );
                    break;
               } // end if

               // Set the full company name based on the letter
               switch ( company ) {
               case 'G':
                    strcpy( companyName, "General Mills" );
                    break;
               case 'K':
                    strcpy( companyName, "Kellogs" );
                    break;
               case 'Q':
                    strcpy( companyName, "Quaker Oats" );
                    break;

               // default in case a different brand is added, also useful for 
               // debugging.
               default:
                    strcpy( companyName, "Generic" );
                    break;
               } // end switch

               // if the cereal meets the requirements, print it and increase 
               // count.
               if ( cals <= maxCalories && protein >= minProtein &&
                    sugar <= maxSugar ) {
                    count++;

                    // print out the values for each cereal that matches.
                    printf( "%-15s%-24s%4d calories\n"
                            "%15s%-24s%4d grams\n"
                            "%15s%-24s%4d grams\n\n",
                            companyName, name, cals,
                            "", "  - protein", protein,
                            "", "  - sugar", sugar );

               } // end if
          } // end while
     } // end else
} // end main