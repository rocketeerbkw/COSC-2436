/**
 * Author:            Brandon Williams
 * Project Number:    1
 * Course:            Data Structures
 * Due Date:          Sep 27, 2013
 *
 * Diaplay the binary representation of a char, short or float data type.
 *
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */

#include <iostream>
#include "binaryFunctions.h"
using namespace std;

int main() {
  char menuSelection, inputChar;
  short inputShort;
  float inputFloat;

  cout << "Display the binary representation of a:" << endl;
  
  do {
    cout << "C)har, S)hort integer, F)loat or Q)uit ";
    cin >> menuSelection;

    // They want to quit
    if (toupper(menuSelection) == 'Q') {
      break;
    }
    
    switch(toupper(menuSelection)) {
      case 'C':
        cout << "Enter a character: ";
        cin >> inputChar;
        printChar(inputChar);
        break;
        
      case 'S':
        cout << "Enter a short integer: ";
        cin >> inputShort;
        printShort(inputShort);
        break;

      case 'F':
        cout << "Enter a floating point number: ";
        cin >> inputFloat;
        printFloat(inputFloat);
        break;
        
      default:
        cout << "Please choose c, s, f or q." << endl;
    }
    
    cout << endl;
  } while(true);
  
  system("pause");
  return 0;
}

