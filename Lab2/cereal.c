//  CS278 - Lab Assignment: 2
//  Program name: Cereal
//  Description: Finds the healthiest Cereal
//  written by: Ziad Arafat
//  Date Written: 02-07-2020

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
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
  FILE *filePtr;
  int age, count = 0, total = 0;
  char last[30], first[20];
  if ((filePtr = fopen("sampleData.txt", "r")) == NULL)
    printf("File could not be opened\n");

  else {  // file open was successful

    fscanf(filePtr, " %s%s%d", first, last, &age);

    while (!feof(filePtr)) {
      count++;
      total += age;

      fscanf(filePtr, " %s%s%d", first, last, &age);
    }  // end while

  }  // end else
  return 0;
}
