/**
 * Author:            Brandon Williams
 * Project Number:    2
 * Course:            Data Structures
 * Due Date:          Oct 20, 2013
 *
 * Create and test a class to represent a quadratic equation.
 *
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */

#include "iostream"
#include "Quadratic.h"
using namespace std;

int main() {

  Quadratic q1, // 0 roots
            q2, // 1 root
            q3, // 2 roots
            q4, q5;
            
  q1.setCoefficients(1, 0, 1);
  // keep default values for q2
  q3.setCoefficients(1, 3, 0);
  
  // Operator override test objects
  q4 = q1 + q3;
  q5 = 7 * q1;

  cout << "Equation of q1 is " << q1 << endl;
  cout << "Equation of q2 is " << q2 << endl;
  cout << "Equation of q3 is " << q3 << endl;
  cout << "Equation of q1 + q3 is " << q4 << endl;
  cout << "Equation of q1 * 7 is " << q5 << endl;
  
  cout << endl;

  cout << "Evaluating q1 through q5 with x = 2:" <<endl;
  
  cout << "q1 = " << q1.evaluate(2) << endl;
  cout << "q2 = " << q2.evaluate(2) << endl;
  cout << "q3 = " << q3.evaluate(2) << endl;
  cout << "q4 = " << q4.evaluate(2) << endl;
  cout << "q5 = " << q5.evaluate(2) << endl;
  
  cout << endl;

  cout << "Number of real roots:" << endl;
  
  cout << "q1 = " << q1.numRealRoots() << endl;
  cout << "q2 = " << q2.numRealRoots() << endl;
  cout << "q3 = " << q3.numRealRoots() << endl;
  cout << "q4 = " << q4.numRealRoots() << endl;
  cout << "q5 = " << q5.numRealRoots() << endl;
  
  cout << endl;
  
  cout << "Roots for" << endl;
  
  cout << "q2: " << q2.getSmallerRoot() << " and " << q2.getLargerRoot() << endl;
  cout << "q3: " << q3.getSmallerRoot() << " and " << q3.getLargerRoot() << endl;
  cout << "q4: " << q4.getSmallerRoot() << " and " << q4.getLargerRoot() << endl;

  system("pause");
  return 0;
}
