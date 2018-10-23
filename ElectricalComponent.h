#ifndef ELECTRONICCOMPONENT_H
#define ELECTRONICCOMPONENT_H
#include <iostream>
#include <iomanip>
#include<cstdlib>
#include<sstream>
#include<string>
using namespace std;


class ElectronicComponent
{
  //pure virtual functions that
  //will be used for derived/child classes
 public:
  virtual double getValue() const = 0;
  virtual string getUnits() const = 0;
  virtual string getDescription() const = 0;
};
//overload << operator to get printable description
//of each of the electronic components
inline ostream& operator<< (std::ostream& outputStream,
			    const ElectronicComponent& component)
{
  outputStream << component.getDescription();
  return outputStream;
}
#endif
