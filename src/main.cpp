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
  int n;

  cout << "Give me something: ";

  n = _getch() - '0';

  cout << n << endl;

  switch(n) {
    case 0:
      cout << "Hello World" << endl;
      break;
    case 1:
      cout << "I am good" << endl;
      break;
    case 2:
      cout << "To the Top" << endl;
      break;
    case 3:
      cout << "Where is the horizon" << endl;
      break;
    case 4:
      cout << "I do not know" << endl;
      break;
    default:
      cout << "Yeah, I will" << endl;
  }

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();

  return EXIT_SUCCESS;
}
