#include "Resistor.h"

using namespace std;

//get description function to display
//information for resistor
string Resistor::getDescription() const
{
  ostringstream sstream;
  sstream << value;
  return "Resistor value (" + sstream.str() + " "
    + units + ")";
}


