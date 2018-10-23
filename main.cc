
#include <iostream>
#include <iomanip>
#include <string>
#include<cstdlib>
#include<sstream>
#include<string>
#include<limits>
#include "Resistor.h"
#include "Capacitor.h"
#include "Battery.h"
#include "ElectronicComponent.h"

using namespace std;

int main()
{
  //set variables for user to input
  //choice and value


  int choice;
  bool cFail;          //used for input validation
  double val;
  int count = 0;       //keep track of items in array
  ElectronicComponent* componentArray[100];

  do{
    //Display Menu
    cout << "Please enter 1, 2, 3 or 4: " << endl;
    cout << "1 - Enter information about a resistor" << endl;
    cout << "2 - Enter information about a capacitor" << endl;
    cout << "3 - Enter information about a battery" << endl;
    cout << "4 - Print component information and terminate the program" << endl;
      do
	{
	  cout << "Enter a valid number: ";
	  cin >> choice;
	  //ensure user enters one of the provided choices
	  //and is a whole number of the choices
	  cFail = cin.fail();
	  cin.clear();         cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (cFail == true);

      //if choice is valid
      //allow it to enter the switch case
      switch (choice)
	{
	  //choice 1- prompt user to enter into the resistor's value
	case 1:
         do
	   {
	     cout << "Please enter a valid value of the component: ";
	     cin >> val;
	     //input validation for letters
	     cFail = cin.fail();
	     cin.clear();
	     cin.ignore(numeric_limits<streamsize>::max(), '\n');
	   } while (cFail == true);

	 //input validation for negative numbers
	 while (val < 0)
	   {
	     cout << "Entry not accepted. Please enter ONLY a positive, floating point value " << endl;
	     cin >> val;
	   }

         //stores information into the resistor class
         //provided function for value then into the general array
         componentArray[count] = new Resistor(val);
         cout << *componentArray[count] << endl;
         count++;
         break;
         //choice 2- prompt user to enter into the capacitors's value
	case 2:
         do
	   {
	     cout << "Please enter a value of the component: ";
	     cin >> val;
	     //input validation for letters
	     cFail = cin.fail();
	     cin.clear();
	     cin.ignore(numeric_limits<streamsize>::max(), '\n');
	   } while (cFail == true);

	 //input validation for negative values
         while (val < 0)
	   {
	     cout << "Entry not accepted. Please enter ONLY a positive, floating point value " << endl;
	     cin >> val;
	   }

         //stores information into the capacitor class
         //provided function for value then into the general array
         componentArray[count] = new Capacitor(val);
         cout << *componentArray[count] << endl;
         count++;
         break;
         //choice 3- prompt user to enter batter's value
	case 3:
         do
	   {
	     cout << "Please enter a value of the component: ";
	     cin >> val;
	     //input validation for numbers
	     cFail = cin.fail();
	     cin.clear();
	     cin.ignore(numeric_limits<streamsize>::max(), '\n');
	   } while (cFail == true);

         //input validation for negative numbers
         while (val < 0)
	   {
	     cout << "Entry not accepted. Please enter ONLY a positive, floating point value " << endl;
	     cin >> val;
	   }

	 //stores information into the battery class
         //provided function for value then into the general array
         componentArray[count] = new Battery(val);
         cout << *componentArray[count] << endl;
         count++;
         break;
	case 4:

          //displays information by calling the function
          //on each object to get the value and its units
          //of each component and printing that to the screen
	  for (int i = 0; i < count; i++)
	    {
	      cout << "Component value is " << componentArray[i]->getValue();
	      cout << " " << componentArray[i]->getUnits() << endl;

	    }
	  cout << endl;


	  //iterates through array of electronic components
	  //by outputting information on the component using
	  //specified code
	  for (int k = 0; k < count; k++)
	    {
	      cout << "Component " << (k + 1) << " " << *componentArray[k] << endl;
	    }

	  //prompt user to press enter
	  //to exit and terminate the program
	  cout << "Please press enter to exit.";
	  cin.ignore();
	  exit(0);
	  break;

	  //exit command to end program if not one
	  //of provided choices
	default:
	  cout << "Invalid input, not one of provided choices." << endl;
	  break;
	}
  } while (choice <4 && choice > 0);
  return 0;
  system("pause"); //allows the termination of program
}
