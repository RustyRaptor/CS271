//  CS271 - Lab Assignment: #8
//  Program name: C++ Classes
//  Purpose of program: Some classes in C++
//  written by: Ziad Arafat
//  Date Written: 2020-04-12

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Date {
 private:
     unsigned int month;
     unsigned int day;
     unsigned int year;

 public:
     Date( );
     Date( int m, int d, int y );
     void setMonth( int m );
     void setDay( int d );
     void setYear( int y );
     int getMonth( );
     int getDay( );
     int getYear( );
     void print( );
};

#endif
