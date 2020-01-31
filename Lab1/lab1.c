// CS 271 - Lab 1
// Program name: lab1.c
// Ziad Arafat
// 01/28/2020

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// A program to count occurences of a digit in a number



int main (void) {
    // digit initialized to -1 for first while loop to work
    // tempnum used to store number for printing later
    
    int digit = -1;
    int number, count, tempnum;
    
    
    // gets a 1 digit number from the user and prompts till satisfied
    while (digit > 9 || digit < 0) {
        printf("Enter a 1 digit number to search for");
        scanf("%d", &digit);
    } // end loop
    
    // get the number to count in
    printf("Please enter a number");
    scanf("%d", &number);
    tempnum = number;
    
    // Checks against the modulo by 10 as that gives
    // us the last digit in the number
    // Then we divide by 10. Since it's integer division it will just
    // remove the last digit.
    while (number > 0 || number < 0){
        if (digit == abs(number%10))
            count++;
        
        number=number/10;
    } // end loop

    // avoids any issues by setting count to 1 if the digit is 
    // the same as the number
    if (number == digit)
        count = 1;
    
    // Print out all the info
    printf("The digit (%d) appears %d times in the number (%d)\n",
           digit, count, tempnum);
} // end main function
