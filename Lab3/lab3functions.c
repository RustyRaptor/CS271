//  CS278 - Lab Assignment: #3
//  Program name: Lab3
//  Purpose of program: generates random numbers
//  written by: Ziad Arafat
//  Date Written: 2020-02-17

#include "lab3functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// input two numbers a and b
// print a list of their distinct common factors.
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

// input a span of time in seconds
// print that time in HH:MM:SS format
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

// roll two dice an N number of time.
// print a statistical list of occurences
void rollingDice( int n ) {
     int total = 0;

     // don't need size 13 because I just remap with -2
     int results[11] = {};
     srand( time( NULL ) );

     // roll the dice n times. Increment the result in the array.
     for ( int i = 0; i < n; i++ ) {
          total = ( 1 + ( rand( ) % 6 ) ) + ( 1 + ( rand( ) % 6 ) );
          results[total - 2]++;
     }

     // print them pretty
     printf( "%10s%7s%10s\n", "Dice Total", "", "Frequency" );
     printf( "%10s%7s%10s\n", "----------", "", "----------" );

     // I understand that in the example they are centered.
     // I just feel it's not practical to center them when they look fine
     // right justified. It also gives more space if the numbers get high.
     // the printf statement doesn't support centering things without loss
     // of good alignment.
     for ( int i = 0; i < 11; i++ ) {
          printf( "%10d%7s%10d\n", i + 2, "", results[i] );
     }
}