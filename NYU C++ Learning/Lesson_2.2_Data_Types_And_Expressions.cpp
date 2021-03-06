#include <iostream>
#include <cmath>

using namespace std;

  int main() {

    /* Float and Double Data Types
       ---------------------------
       Kind Of Data: Real Numbers could have fractions
       Inner Representation:
       - Double: Each data uses 8 bytes (64 bits)
       - Float: Each data uses 4 byte (32 bits)
       The numbers are represented by the floating point methon (IEEE-754)

       C++ Literals
       ------------
       For Double: 3.4, -8.975, 6.0
       For Float: 3.4f, -8.975f
       Artithmetic Operators: +, -, *, /
    */


    /* Write a program that reads from the user a radius of a circle.
       The program will then print area of this circle.

       Example
       -------
       Please enter the radius 2.6
       The area of a circle with radius of 2.6 is 21.2372

       Theorem
       -------
       Let C be a circle with a radius of length r.

       We have (Area of C) = pi * r^2
    */

    double radius, area;
    const double pi = 3.14;

    cout << "Please enter the radius: " << endl;
    cin >> radius;
    area = pi * (radius*radius);

    cout << "The area of a cricle with radius of " << radius << " is " << area << endl;

    /* int main() {
        int x1, x2;
        double y1, y2;

        x1 = 6;
        y1 = 6.7;

        y2 = (double)6;
        x2 = (int)6.7;

        return 0
    }

       Casting
       -------
       Converting the representation of a data from one type to another type.

       Expressions With Mixed Types
       ----------------------------
       int main() {
        int x;
        double y;

        cout << 5/2 << endl; (outputs 2)
        cout << 5.0/2.0 << endl; (outputs 2.5)
        cout << 5.0/2 << endl; (outputs ?)

        x = 5/2;
        y = 5/2; y would output the double 2

        return 0;
     }
   */

  return 0;
  }
