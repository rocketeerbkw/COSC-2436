/**
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */

#include "iostream"
#include <cmath>
#include <cassert>
#include "Quadratic.h"
using namespace std;

// Default constructor
Quadratic::Quadratic()
  : a(1), b(0), c(0) {
}

void Quadratic::setCoefficients(float setA, float setB, float setC) {
  // A quadratic equation is defined as ax^2 + bx + c, a !=0
  assert(setA != 0);
  
  a = setA;
  b = setB;
  c = setC;
}

float Quadratic::getA() const {
  return a;
}

float Quadratic::getB() const {
  return b;
}

float Quadratic::getC() const {
  return c;
}

// Just solve ax^2 + bx + c for given x
float Quadratic::evaluate(float x) const {
  return (a * pow(x, 2)) + (b * x) + c;
}

int Quadratic::numRealRoots() const {
  // discriminate (b^2 - 4ac) determines number of real roots
  float discriminate = pow(b, 2) - 4 * a * c;
  
  if (discriminate < 0) {
    return 0;
  }
  else if (discriminate == 0) {
    return 1;
  }
  else if (discriminate > 0) {
    return 2;
  }
}

// Use quadratic formula to find root
// x = -b - sqrt( b^2 - 4ac) / 2a
float Quadratic::getSmallerRoot() const {
  assert(numRealRoots() > 0);
  
  return ((b * -1) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}

// Use quadratic formula to find root
// x = -b + sqrt( b^2 - 4ac) / 2a
float Quadratic::getLargerRoot() const {
  assert(numRealRoots() > 0);
  
  return ((b * -1) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}

// admittedly naive way to print equation in readable format
void Quadratic::display(ostream & out) const {
  out << a << "x^2 + " << b << "x + " << c;
}

Quadratic operator+( const Quadratic& q1, const Quadratic& q2 ) {
  float sumA, sumB, sumC;
  
  sumA = q1.getA() + q2.getA();
  sumB = q1.getB() + q2.getB();
  sumC = q1.getC() + q2.getC();
  
  Quadratic sum;
  sum.setCoefficients(sumA, sumB, sumC);
  
  return sum;
}

Quadratic operator*( double r, const Quadratic& q ) {
  float productA, productB, productC;

  productA = q.getA() * r;
  productB = q.getB() * r;
  productC = q.getC() * r;

  Quadratic product;
  product.setCoefficients(productA, productB, productC);

  return product;
}

ostream & operator<<(ostream & out, const Quadratic & q) {
  q.display(out);
  return out;
}
