#ifndef RESISTOR_H
#define RESISTOR_H
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<sstream>
#include<string>
#include "ElectronicComponent.h"
using namespace std;
class Resistor : public ElectronicComponent
{
 public:
  //constructor stores value
  //and the units of resistor
  Resistor(double value)
    {
      this->value = value;
      this->units = "Ohm(s)";
    }
  //destructor
  ~Resistor()
    {

    };
  //value variables for each type
 private:
  double value;
  string units;
  string description;
  //function returns values from main
 public:
  double getValue() const
  {
    return value;
  }
  string getUnits() const
  {
    return units;
  }
  string getDescription() const;

};
#endif
