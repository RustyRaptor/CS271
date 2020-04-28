//  CS271 - Lab Assignment: 9
//  Program name: Overloading Operators
//  Purpose of program: Program that overloads some functions
//  written by: Ziad Arafat
//  Date Written: 2020-04-20


#include "Term.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main( ) {
     // I think it's worth pointing out that the terms will only work for
     // numbers that consist of 1 digit. Parsing multidigit numbers would
     // require some hefty logic and I assume that isn't the goal of this
     // assignment and nor is the info needed to do that anywhere in the
     // material.

     // instantiate a Term object with coefficient 2 and exponent 3
     Term k( 2, 3 );
     // instantiate another Term object (default coefficient is 0 and
     // default exponent is 0
     Term r;
     // input r from the user
     cout << "Enter a Term in the format a^b where a is the coefficient"
          << " and b is the exponent. ";
     cin >> r;

     // test add
     cout << "The sum of k and r is " << ( k + r ) << endl;

     // test difference
     cout << "The difference of k and r is " << ( k - r ) << endl;

     // test multiply
     cout << "The product of k and r is " << ( k * r ) << endl;
}
