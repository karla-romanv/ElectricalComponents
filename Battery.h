
#ifndef BATTERY_H
#define BATTERY_H
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<sstream>
#include<string>
#include"ElectronicComponent.h"

using namespace std;
class Battery : public ElectronicComponent
{
 public:
  //constructor stores value
  //and the units of battery
  Battery(double value)
    {
      this->value = value;
      this->units = "volt(s)";
    }
  //destructor
  ~Battery()
    {

    };
  //value variables for each type
 private:
  double value;
  string units;
  string description;
  //function returns values from main public:
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
