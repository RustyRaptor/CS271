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
     // set the separator and width for the columns.
     const char separator = ' ';
     const int colWidth = 12;

     // print out the labels
     cout << fixed << right << setw( colWidth ) << setfill( separator )
          << setprecision( 3 ) << "Number";
     cout << fixed << right << setw( colWidth ) << setfill( separator )
          << setprecision( 3 ) << "Log base 2";
     cout << fixed << right << setw( colWidth ) << setfill( separator )
          << setprecision( 3 ) << "Log base 10";
     cout << fixed << right << setw( colWidth ) << setfill( separator )
          << setprecision( 3 ) << "Log base e" << endl;

     // print the data
     for ( int i = 1; i <= 100; i++ ) {
          // get the 3 logs of the number
          float logBase2 = log2( i );
          float logBase10 = log10( i );
          float logBasee = log( i );

          // print them out in columns
          cout << fixed << right << setw( colWidth ) << setfill( separator )
               << setprecision( 3 ) << i;
          cout << fixed << right << setw( colWidth ) << setfill( separator )
               << setprecision( 3 ) << logBase2;
          cout << fixed << right << setw( colWidth ) << setfill( separator )
               << setprecision( 3 ) << logBase10;
          cout << fixed << right << setw( colWidth ) << setfill( separator )
               << setprecision( 3 ) << logBasee << endl;
     } // end for
}
