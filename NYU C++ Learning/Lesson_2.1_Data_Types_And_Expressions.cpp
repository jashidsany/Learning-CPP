#include <iostream>

using namespace std;

  int main() {

    /* Types of Data
      --------------
      Data:
      - int
      - float
      - double
      - char
      - string
      - bool
      - vector
      - programmer defined classes

      Expressions:
      - I/O Expressions
      - Arthmetic Expressions
      - Boolean Expressions

      Control Flow:
      - Sequential
      - Branching
        if
        if-else
        if-else if-else
        switch
      - Iterative
        while
        for
      - Function Calls
      - Exceptions

      Int Data Types
      --------------
      Kind of data inner representation
      Each int data uses 4 bytes(32 bits)
      The numbers are represented using the 2's complement method

      Forms of Data
      -------------
      Constants and Variables

      int main() {
      int x; variables
      int y; variables

      x = 6; integers
      y = -6; integers

      return 0;
    }

    Constants can be C++ Literals like 6, -6, 7.3, "abc" or programmer defined 'const int MAX=5;'
    Variables can be int x; double y;

    Arithmetic Operators
    ---------------------
    Something like (+), (-), (*) is an arthmetic operator

    Something like (/) and (%) which is mod are operators you can use
    13 div (/) 5 = 2, div gives you the whole number
    13 mod (%) 5 = 3, mod gives you the remainder

    Something like (=) which is an assignment opeartor can assign varaibles

    int main() {
    int x;
    int y;

    x = 5;

    cout << x + 2;
    y = x + 2:
    x + 2;

    cout << x - 2;
    y = x * 2;
    cout << x/2;
    cout << x%2;

    x = 6;
    cout << x = 7;
    y = (x = 8);
    y = x = 9;

    return 0;
  }
      */

    // Weeks and Days Program
    // Write a program that reads from the user the number of days they traveled. The program will then print their traveling time in the format of full weeks and additional days.
    // Example: Please enter number of days you traveled such as 19 days are 2 weeks and 5 days

    int daysTraveled;
    int fullWeeks, remainingDays;

    cout << "Please enter number of days you traveled:" << endl;
    cin >> daysTraveled;

    fullWeeks = daysTraveled / 7;
    remainingDays = daysTraveled % 7;

    cout << daysTraveled << " days are " << fullWeeks << " weeks and " << remainingDays << " days" << endl;

    // const int DAYS_IN_A_WEEKS = 7; which can be put before int main and replace the / 7 and % 7

  return 0;
  }
