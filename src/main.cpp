/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd-Comp1-Week6 LabWorks
 * @app desc: To complete task stated in LabortoryExercise005 of ITE7101
 * ****************************************************************/

#include <iostream>
#include <conio.h> // for _getch()
#include "_pause.h"

using namespace std;

int main()
{
  char n;

  cout << "Give me something: ";

  n = _getch();

  cout << n << endl;

  if(n == '0') {
    cout << "Hello World" << endl;
  } else if(n == '1') {
    cout << "I am Groot" << endl;
  } else if(n == '2') {
    cout << "To the Top" << endl;
  } else if(n == '3') {
    cout << "Where is the horizon" << endl;
  } else if(n == '4') {
    cout << "I do not know" << endl;
  } else {
    cout << "Yeah, I will" << endl;
  }

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();

  return EXIT_SUCCESS;
}
