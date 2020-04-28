//  CS271 - Lab Assignment: 9
//  Program name: Overloading Operators
//  Purpose of program: Program that overloads some functions
//  written by: Ziad Arafat
//  Date Written: 2020-04-20

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Term {
     friend ostream &operator<<( ostream &, const Term & );
     friend istream &operator>>( istream &, Term & );

 private:
     int coefficient;
     int exponent;

 public:
     Term( int coef = 0, int exp = 0 );

     // getters n setters
     int getExponent( );
     void setExponent( int exp );

     int getCoefficient( );
     void setCoefficient( int coef );

     // operator overloads
     Term operator+( const Term & ) const;
     Term operator-( const Term & ) const;
     Term operator*( const Term & )const;
};

#endif
