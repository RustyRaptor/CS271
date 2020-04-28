//  CS271 - Lab Assignment: 9
//  Program name: Overloading Operators
//  Purpose of program: Program that overloads some functions
//  written by: Ziad Arafat
//  Date Written: 2020-04-20

#include "Term.h"
#include <iostream>
#include <string>


using namespace std;


ostream &operator<<( ostream &out, const Term &a ) {
     out << a.coefficient << "x^" << a.exponent;
     return out;
}
istream &operator>>( istream &in, Term &a ) {
     in >> setw( 1 ) >> a.coefficient;
     in.ignore( 1 );
     in >> setw( 1 ) >> a.exponent;
     return in;
}


int coefficient;
int exponent;


Term::Term( int coef, int exp ) {
     this->coefficient = coef;
     this->exponent = exp;
}

// getters n setters
int Term::getExponent( ) {
     return exponent;
}
void Term::setExponent( int exp ) {
     exponent = exp;
}

int Term::getCoefficient( ) {
     return coefficient;
}
void Term::setCoefficient( int coef ) {
     coefficient = coef;
}

// operator overloads
Term Term::operator+( const Term &a ) const {
     Term termSum;
     if ( a.exponent == exponent ) {
          termSum.setCoefficient( coefficient + a.coefficient );
          termSum.setExponent( exponent );
     }
     return termSum;
}
Term Term::operator-( const Term &a ) const {
     Term termDiff;
     if ( a.exponent == exponent ) {
          termDiff.setCoefficient( coefficient - a.coefficient );
          termDiff.setExponent( exponent );
     }
     return termDiff;
}
Term Term::operator*( const Term &a ) const {
     Term termProd;
     termProd.setCoefficient( coefficient * a.coefficient );
     termProd.setExponent( exponent + a.exponent );
     return termProd;
}