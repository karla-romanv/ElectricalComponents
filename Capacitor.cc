#include "Capacitor.h"

using namespace std;

//get description function to display
//information for capacitor

string Capacitor::getDescription() const
{
  ostringstream sstream;
  sstream << value;
  return "Capacitor value (" + sstream.str() + " "
    + units + ")";
}


