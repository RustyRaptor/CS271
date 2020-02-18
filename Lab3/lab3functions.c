//  CS278 - Lab Assignment: #3
//  Program name: Lab3
//  Purpose of program: generates random numbers
//  written by: Ziad Arafat
//  Date Written: 2020-02-17

#include "lab3functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void factors( int a, int b ) {
     // Swaps if a < b
     if ( a < b ) {
          a = a - b;
          b = a + b;
          a = b - a;
     }

     printf( "The common factors are\n" );

     // check all potential divisors.
     // if they work for both a and b print.
     for ( int i = 1; i <= a; i++ ) {
          if ( a % i == 0 && b % i == 0 ) {
               printf( "%d\n", i );
          }
     }
}

void timeDisplay( int secs ) {
     int hh = 0;
     int mm = 0;
     int ss = 0;

     // find how many hours and remove them
     hh = secs / 3600;
     secs %= 3600;

     // find how many minutes and remove them
     mm = secs / 60;
     secs %= 60;

     // Whatever is left is the seconds.
     ss = secs;

     // print in a nice format
     printf( "The time is %02d:%02d:%02d\n", hh, mm, ss );
}

void rollingDice( int n ) {
     int total = 0;
     int arr[13] = { };
     srand(time(NULL));

     for (int i = 0; i < n; i++) {
          total = (1+(rand()%6)) + (1+(rand()%6));
          arr[total - 2]++;
     }
     printf("%10s%7s%9s\n", "Dice Total", "", "Frequency");
     printf("%10s%7s%9s\n", "----------", "", "---------");


     for (int i = 0; i < 11; i++) {
          printf("%10d%7s%9d\n", i + 2, "", arr[i]);
     }
}