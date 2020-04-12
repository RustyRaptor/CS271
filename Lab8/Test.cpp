//  CS278 - Lab Assignment: #
//  Program name: progname
//  Purpose of program: progpurpose
//  written by: Ziad Arafat
//  Date Written: 2020-04-12

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

class Animal {
 private:
     std::string name;
     double height;
     double weight;

     static int numOfAnimals;

 public:
     std::string GetName( ) {
          return name;
     }
     void SetName( std::string name ) {
          this->name = name;
     }
     double GetHeight( ) {
          return height;
     }
     void SetHeight( double height ) {
          this->height = height;
     }
     double GetWeight( ) {
          return weight;
     }
     void SetWeight( double weight ) {
          this->weight = weight;
     }

     void SetAll( std::string, double, double );

     Animal( std::string, double, double );
     Animal( );
     ~Animal( );
     static int GetNumOfAnimals( ) {
          return numOfAnimals;
     }
     void ToString( );
};

int Animal::numOfAnimals = 0;

void Animal::SetAll( std::string name, double height, double weight ) {
     this->name = name;
     this->weight = weight;
     this->height = height;
     Animal::numOfAnimals++;
}

Animal::Animal( ) {
     this->name = "";
     this->weight = 0;
     this->height = 0;
     Animal::numOfAnimals++;
}

Animal::~Animal( ) {
     std::cout << "Animal " << this->name << " Destroyed" << std::endl;
}

void Animal::ToString( ) {
     std::cout << this->name << " is " << this->height << " cms tall and "
               << this->weight << " kgs in weight\n";
}

int main( ) {
     Animal fred;
     fred.ToString( );
     fred.SetHeight(33);
     fred.SetWeight(10);
     fred.SetName("Fred");
     fred.ToString();

     return 0;
}
