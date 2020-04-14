//  CS271 - Lab Assignment: #8
//  Program name: C++ Classes
//  Purpose of program: Some classes in C++
//  written by: Ziad Arafat
//  Date Written: 2020-04-12

#include "Time.h"
#include "Date.h"
#include <ctime>
#include <cstdlib>
#define ARRSIZE 5
#define MAXHOUR 12
#define MAXMINUTE 59
#define MAXSECOND 59

using namespace std;

int main( ) {

     // Create an array of time objects
     Time timearr[ARRSIZE];
     int num;
     srand( time( NULL ) );
     for ( int i = 0; i < ARRSIZE; i++ ) {

          // initialize the object to a new empty time
          // generate a random number for each variable
          num = rand( ) % MAXHOUR + 1;
          timearr[i] = Time( );
          timearr[i].setHour( num );

          num = rand( ) % MAXMINUTE + 1;
          timearr[i].setMinute( num );

          num = rand( ) % MAXSECOND + 1;
          timearr[i].setSecond( num );
     }// end for

     cout << "The generated times in 24 hour format are: " << endl;
     for ( int i = 0; i < ARRSIZE; i++ ) {
          timearr[i].print( );
     }// end for

     cout << "The generated times in 12 hour format are: " << endl;
     for ( int i = 0; i < ARRSIZE; i++ ) {
          timearr[i].print12( );
     }// end for



     // do the same for date objects
     Date datearr[ARRSIZE];


     // Ask the user for a month day and year 5 times. 
     int inMonth, inDay, inYear;
     for (int i = 0; i < ARRSIZE; i++) {
          cout << "Enter the month for DATE " << i+1 << endl;
          cin >> inMonth;

          cout << "Enter the day for DATE " << i+1 << endl;
          cin >> inDay;
          
          cout << "Enter the Year for DATE " << i+1 << endl;
          cin >> inYear;
          datearr[i] = Date();
          datearr[i].setMonth(inMonth);
          datearr[i].setDay(inDay);
          datearr[i].setYear(inYear);
     } // end for

     cout << "The inputted dates are: " << endl;
     for ( int i = 0; i < ARRSIZE; i++ ) {
          datearr[i].print( );
     }// end for


     // test to see that the constructor is working. 
     Date testDate = Date(6, 12, 1998);

     cout << "testing arg constructor" << endl;
     testDate.print();
     
}
