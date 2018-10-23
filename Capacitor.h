#ifndef CAPACITOR_H
#define CAPACITOR_H
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<sstream>
#include<string>
#include "ElectronicComponent.h"
using namespace std;
class Capacitor : public ElectronicComponent
{
 public:
  //constructor stores value
  //and the units of capacitor
  Capacitor(double value)
    {
      this->value = value;
      this->units = "Farad(s)";
    }
  //destructor
  ~Capacitor()
    {

    };
  //value variables for each type
 private:
  double value;
  string units;
  string descripton;

  //function returns values from main
 public:
  double getValue() const
  {
    return this->value;
  }
  string getUnits() const
  {
    return units;
  }
  string getDescription() const;

};
#endif
