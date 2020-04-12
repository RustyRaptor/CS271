//  CS271 - Lab Assignment: #7
//  Program name: Intro to C++
//  Purpose of program: Does some things in C++
//  written by: Ziad Arafat
//  Date Written: 2020-04-06

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int main( ) {
     string strArray[25];
     string line;
     int c = 0;

     // apparently you don't need to explicitly call cin.eof()
     // it will return false implicitly so you can just call it in
     // the while loop head.
     while ( getline( cin, line ) && c < 25 ) {
          strArray[c] = line;
          c++; // no pun intended
     } // end while

     for ( int i = 0; i <= c; i++ ) {
          cout << strArray[i] << endl;
          for ( auto var : strArray[i] ) {
               cout << var << endl;
          } // end for
     } // end for
}
