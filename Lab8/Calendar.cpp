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
     Time timearr[ARRSIZE];
     int num;
     srand( time( NULL ) );
     for ( int i = 0; i < ARRSIZE; i++ ) {
          num = rand( ) % MAXHOUR + 1;
          timearr[i] = Time( );
          timearr[i].setHour( num );

          num = rand( ) % MAXMINUTE + 1;
          timearr[i].setMinute( num );

          num = rand( ) % MAXSECOND + 1;
          timearr[i].setSecond( num );
     }

     cout << "The generated times in 24 hour format are: " << endl;
     for ( int i = 0; i < ARRSIZE; i++ ) {
          timearr[i].print( );
     }

     cout << "The generated times in 12 hour format are: " << endl;
     for ( int i = 0; i < ARRSIZE; i++ ) {
          timearr[i].print12( );
     }


     Date datearr[ARRSIZE];


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
     }

     cout << "The inputted dates are: " << endl;
     for ( int i = 0; i < ARRSIZE; i++ ) {
          datearr[i].print( );
     }

     Date testDate = Date(6, 12, 1998);

     cout << "testing arg constructor" << endl;
     testDate.print();
     
}
