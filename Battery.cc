#include "Battery.h"

using namespace std;

//get description function to display
//information for battery
string Battery::getDescription() const
{
  ostringstream sstream;
  sstream << value;
  return "Battery value (" + sstream.str() + " "
    + units + ")";
}


