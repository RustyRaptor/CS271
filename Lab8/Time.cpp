//  CS271 - Lab Assignment: #8
//  Program name: C++ Classes
//  Purpose of program: Some classes in C++
//  written by: Ziad Arafat
//  Date Written: 2020-04-12

#include "Time.h"
#define HR_LIMIT 23
#define MIN_SEC_LIMIT 59

using namespace std;

unsigned int hour;
unsigned int minute;
unsigned int second;

Time::Time( ) {
     hour = 0;
     minute = 0;
     second = 0;
} 

Time::Time( int h, int m, int s ) {
     hour = h;
     minute = m;
     second = s;
} 

void Time::setHour( int h ) {
     if ( h >= 0 && h <= HR_LIMIT ) {
          hour = h;
     } 
 // end if
} 

void Time::setMinute( int m ) {
     if ( m >= 0 && m <= MIN_SEC_LIMIT ) {
          minute = m;
     } 
 // end if
} 

void Time::setSecond( int s ) {
     if ( s >= 0 && s <= MIN_SEC_LIMIT ) {
          second = s;
     } 
 // end if
} 

int Time::getHour( ) {
     return hour;
} 

int Time::getMinute( ) {
     return minute;
} 

int Time::getSecond( ) {
     return second;
} 

void Time::print( ) {
     cout << setfill( '0' ) << setw( 2 ) << getHour( ) << ":" 
          << setfill( '0' ) << setw( 2 ) << getMinute( ) << ":"
          << setfill( '0' ) << setw( 2 ) << getSecond( ) << endl;
} 

void Time::print12( ) {
     const int twlve = 12;
     int twelve_hour = getHour( );

     if ( hour > twlve ) {
          twelve_hour = twelve_hour - twlve;
          cout << setfill( '0' ) << setw( 2 ) << twelve_hour << ":"
               << setfill( '0' ) << setw( 2 ) << getMinute( ) << ":"
               << setfill( '0' ) << setw( 2 ) << getSecond( ) << " PM"
               << endl;

     } 
 //end if

     else {
          cout << setfill( '0' ) << setw( 2 ) << twelve_hour << ":"
               << setfill( '0' ) << setw( 2 ) << getMinute( ) << ":"
               << setfill( '0' ) << setw( 2 ) << getSecond( ) << " AM"
               << endl;

     } 
 //end else
} 

