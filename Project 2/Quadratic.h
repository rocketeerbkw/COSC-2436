/**
 * Quadratic.h
 *
 * A representation of a quadratic equation in the form of f(x) = ax^2 + bx + c,
 * such that a !=0 which can be used to evaluate f(x) and find the roots of f(x)
 * (that is, solve for x).
 *
 * This is free and unencumbered software released into the public domain.
 *
 * You should have received a full copy of the unlicense along with this
 * software. If not, see <http://unlicense.org/>.
 */
 
#include "iostream"
using namespace std;

class Quadratic {
  public:

    /**
     * Default constructor
     * Precondition: None
     * Postcondition: `a` coefficient set to 1, `b` and `c` set to 0
     */
    Quadratic();
    
    /**
     * Precondition: `a` cannot be 0, otherwise it wouldn't be quadratic
     * Postcondition: All coefficients set to values provided
     */
    void setCoefficients(float setA, float setB, float setC);
    
    /**
     * Return the coefficient `a`
     * Precondition: None
     * Postcondition: Value of coefficient `a` is returned
     */
    float getA() const;
    
    /**
     * Return the coefficient `b`
     * Precondition: None
     * Postcondition: Value of coefficient `b` is returned
     */
    float getB() const;
    
    /**
     * Return the coefficient `c`
     * Precondition: None
     * Postcondition: Value of coefficient `c` is returned
     */
    float getC() const;
    
    /**
     * Given a value, `x`, evaluate f(x)
     * Precondition: None
     * Postcondition: Value of f(x) is returned
     */
    float evaluate(float x) const;
    
    /**
     * Find the number of real roots of this quadratic equation (0, 1 or 2)
     * Precondition: None
     * Postcondition: Number of real roots returned
     */
    int numRealRoots() const;
    
    /**
     * Find the smallest real root for this quadratic eqation
     * Precondition: At least one real root exists
     * Postcondition: Return the smallest (numberwise) real root
     */
    float getSmallerRoot() const;
    
    /**
     * Find the largest real root for this quadratic eqation
     * Precondition: At least one real root exists
     * Postcondition: Return the largest (numberwise) real root
     */
    float getLargerRoot() const;
    
    /**
     * Display quadratic equation as human readable, e.g. 5x^2 + 3x + 1
     * Precondition: The ostream `out` is open
     * Postcondition: The equation represented by this Quadratic object has been
     *   inserted into ostream `out`
     */
    void display(ostream & out) const;
    
  private:
    /* The coefficients of the quadratic equation */
    float a,
          b,
          c;
};

/**
 * Overloaded + operator for adding two Quadratic equations
 * Precondition: None
 * Postcondition: A quadratic equation is returned that has it's individual
 *   coefficients added together (q1.a + q2.a, etc)
 */
Quadratic operator+( const Quadratic& q1, const Quadratic& q2 );

/**
 * Overloaded * operator for multiplying a quadratic equation by some number, r
 * Precondition: None
 * Postcondition: A quadratic equation is returned that has it's individual
 *   coefficients multiplied by r (q1.a * r, etc)
 */
Quadratic operator*( double r, const Quadratic& q );

/**
 * Overloaded << operator for printing equation, e.g. 5x^2 + 3x + 1
 * Precondition:  The ostream `out` is open.
 * Postcondition: The equation represented by this Quadratic object has been
 *   inserted into ostream `out`; reference to `out` is returned.
 */
ostream & operator<<(ostream & out, const Quadratic & q);
