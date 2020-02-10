//  CS278 - Lab Assignment: 2
//  Program name: Cereal
//  Description: Finds the healthiest Cereal
//  written by: Ziad Arafat
//  Date Written: 02-07-2020

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int min_protein;
  int max_calories;
  int max_sugar;

  // get constraint values

  // get protein
  printf("input the minimum number of grams of protein\n");
  scanf("%d", &min_protein);
  

  // get calories
  printf("input the maximum number of calories\n");
  scanf("%d", &max_calories);
  

  // get sugar
  printf("input the maximum number of grams of sugar\n");
  scanf("%d", &max_sugar);
  

  printf("Here are the cereals that match your criteria:\n\n");




  char name[23], compname[15];
  char company = ' ';
  int cals = 0, protein = 0, sugar = 0, count = 0;
  FILE *filePtr;
  // ensure the file exists.
  if ((filePtr = fopen("./cereal.txt", "r")) == NULL)
    printf("File could not be opened\n");

  else {
    while (!feof(filePtr)) {
      
      // read in all the needed data from the line
      fscanf(filePtr, "%s %c %d %d %*d %*d %*f %*f %d", name, &company, &cals,
             &protein, &sugar);

      // We must break the loop because it will read one more line otherwise
      if (feof(filePtr)) {
        printf("%d cereals match your criteria.\n", count);
        break;
      }  // end if

      // Set the full company name based on the letter
      switch (company) {
        case 'G':
          strcpy(compname, "General Mills");
          break;
        case 'K':
          strcpy(compname, "Kellogs");
          break;
        case 'Q':
          strcpy(compname, "Quaker Oats");
          break;
        // default in case a different brand is added, also useful for debugging. 
        default:
          strcpy(compname, "Generic");
          break;
      }  // end switch

      // if the cereal meets the requirements, print it and increase count.
      if (cals <= max_calories && protein >= min_protein &&
          sugar <= max_sugar) {
        count++;
        printf(
            "%-14s\t%-22s\t%4d calories\n\t\t  - protien\t\t%4d grams\n\t\t  - sugar\t\t%4d "
            "grams\n\n",
            compname, name, cals, protein, sugar);
      } // end if
    } // end while
  } // end else
}
