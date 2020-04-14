//  CS271 - Lab Assignment: #8
//  Program name: C++ Classes
//  Purpose of program: Some classes in C++
//  written by: Ziad Arafat
//  Date Written: 2020-04-12

#include "Date.h"


using namespace std;

unsigned int month;
unsigned int day;
unsigned int year;

Date::Date( ) {
     month = 1;
     day = 1;
     year = 1980;
}

Date::Date( int m, int d, int y ) {
     month = m;
     day = d;
     year = y;
}

void Date::setMonth( int m ) {
     if (m >= 1 && m <= 12){
          month = m;
     }
}

void Date::setDay( int d ) {
     if (d >= 1 && d <= 31){
          day = d;
     }
}

void Date::setYear( int y ) {
     if (y >= 1980 && y <= 2100){
          year = y;
     }
}

int Date::getMonth( ) {
     return month;
}

int Date::getDay( ) {
     return day;
}

int Date::getYear( ) {
     return year;
}

void Date::print( ) {
     cout << setfill( '0' ) << setw( 2 ) << getMonth( ) << "/" 
     << setfill( '0' ) << setw( 2 ) << getDay( ) << "/"
     << setfill( '0' ) << setw( 4 ) << getYear( ) << endl;
}
