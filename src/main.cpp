/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd-Comp1-Week6 LabWorks
 * @app desc: To complete task stated in LabortoryExercise005 of ITE7101
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <limits>
#include "_pause.h"

using namespace std;

bool isNumber(const string& str, float d) {
  stringstream ss(str);
  ss >> std::noskipws >> d; // noskipws considers leading whitespace invalid
  return ss.eof() && !ss.fail();
}

int main()
{
  string input1, input2;
  float a, b;

  while(true){
    cout << "First Number: ";
    cin >> input1;
    stringstream ss1(input1);
    ss1 >> noskipws >> a;

    if(ss1.eof() && !ss1.fail()){
      break;
    } else {
      cout << "Not a valid number, Try again." << endl;
    }
  }


  while(true){
    cout << "Second Number: ";
    cin >> input2;
    stringstream ss2(input2);
    ss2 >> noskipws >> b;

    if(ss2.eof() && !ss2.fail() && b != 0){
      break;
    } else if(ss2.eof() && !ss2.fail() && b == 0){
      cout << "Second Number cannot be zero. Enter a new number." << endl;
    } else {
      cout << "Not a valid number, Try again." << endl;
    }
    
  }

  cout << endl << a << " / " << b << " = " << a / b << endl << endl;

  // Clear the input buffer so that the console doesn't exit immediately
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();

  return EXIT_SUCCESS;
}
