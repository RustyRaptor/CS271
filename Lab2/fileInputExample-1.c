#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

   FILE *filePtr;
   int age, count = 0, total = 0; 
   char last[30], first[20];
   if (( filePtr = fopen("sampleData.txt", "r")) == NULL ) 

      printf( "File could not be opened\n" );

   else {  // file open was successful

      fscanf(filePtr, " %s%s%d", first, last, &age);
      
      while ( !feof( filePtr ) ) {
         count++;
         total += age;

         fscanf(filePtr, " %s%s%d", first, last, &age);
      } // end while
    
      printf("Average age of the %d people in the study is %.1f.\n",
              count, (float)total / count);
      fclose( filePtr );
   } // end else

} // end main

