/**
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */

#include <iostream>
#include <math.h>
using namespace std;

/**
 * Given a single ASCII character as input, print out the underlying binary
 * representation.
 *
 * Ex: A => 0100 0001
 */
void printChar(char input) {
  // Get the number of bits in a char data type and create a binary mask of
  // equal size with the highest order bit set to 1.
  int numBits = sizeof(char) * 8;
  unsigned short mask = pow(2, (numBits - 1));

  cout << "The binary representation of " << input << " is: ";

  // For every bit of our input (from left to right), `bitwise and` compare with
  // our mask to determine if the bit set in the mask is also set in the current
  // input bit. If it is set, output a 1, otherwise output a 0.
  for (int i = numBits - 1; i >= 0; i--) {
    if ((input & mask) > 0) {
      cout << 1;
    } else {
      cout << 0;
    }

    // Display a blank space very 4 bits.
    if (i%4 == 0) {
      cout << " ";
    }

    // Shift the "check" bit in our mask to the right once.
    mask >>= 1;
  }
  cout << endl;
}


/**
 * Given a short integer (-32,768 to 32,767) as input, print out the underlying
 * binary representation.
 *
 * Ex: 22 => 0000 0000 0001 0110
 */
void printShort(short input) {
  // Get the number of bits in a short data type and create a binary mask of
  // equal size with the highest order bit set to 1.
  int numBits = sizeof(short) * 8;
  unsigned short mask = pow(2, (numBits - 1));

  cout << "The binary representation of " << input << " is: ";

  // For every bit of our input (from left to right), `bitwise and` compare with
  // our mask to determine if the bit set in the mask is also set in the current
  // input bit. If it is set, output a 1, otherwise output a 0.
  for (int i = numBits - 1; i >= 0; i--) {
    if ((input & mask) > 0) {
      cout << 1;
    } else {
      cout << 0;
    }

    // Display a blank space very 4 bits.
    if (i%4 == 0) {
      cout << " ";
    }

    // Shift the "check" bit in our mask to the right once.
    mask >>= 1;
  }
  cout << endl;
}

/**
 * Given a float value as input, print out the underlying binary representation.
 *
 * Ex: 6.625 => 0100 0000 1101 0100 0000 0000 0000 0000
 */
void printFloat(float input) {
  // Get the number of bits in a float data type and create a binary mask of
  // equal size with the highest order bit set to 1.
  int numBits = sizeof(float) * 8;
  unsigned long mask = pow(2, (numBits - 1));
  
  // Get access to underlying binary representation of a float by accessing it
  // as an int.
  union FloatToInt {
    float flt;
    unsigned long lng;
  };
  
  FloatToInt value;
  value.flt = input;

  cout << "The binary representation of " << value.flt << " is: ";

  // For every bit of our input (from left to right), `bitwise and` compare with
  // our mask to determine if the bit set in the mask is also set in the current
  // input bit. If it is set, output a 1, otherwise output a 0.
  for (int i = numBits - 1; i >= 0; i--) {
    if ((value.lng & mask) > 0) {
      cout << 1;
    } else {
      cout << 0;
    }

    // Display a blank space very 4 bits.
    if (i%4 == 0) {
      cout << " ";
    }

    // Shift the "check" bit in our mask to the right once.
    mask >>= 1;
  }
  cout << endl;
}
