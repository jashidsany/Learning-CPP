#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

  int main() {
    // check = got question right, * = needs more practice

    // 1) Write a program in C++ to print a welcome text in a separate line.
    cout << "Question 1:" << endl;
    cout << "Hello! Welcome to... \n";
    cout << "Six Flags!" << endl;

    cout << "\n";

    // 2) Write a program in C++ to print the sum of two numbers.
    cout << "Question 2:" << endl;
    cout << "The sum of 20 + 30 is: " << 20 + 30 << endl;

    cout << "\n";

    // 3) Write a program in C++ to find Size of fundamental data types.
    cout << "Question 3:" << endl;
    cout << "The size of a char is: " << sizeof(char) << " bytes" << endl;
    cout << "The size of a short is: " << sizeof(short) << " bytes" << endl;
    cout << "The size of an int is: " << sizeof(int) << " bytes" << endl;
    cout << "The size of a long is: " << sizeof(long) << " bytes" << endl;
    cout << "The size of a long long is: " << sizeof(long long) << " bytes" <<endl;
    cout << "The size of a float is: " << sizeof(float) << " bytes" << endl;
    cout << "The size of a double is: " << sizeof(double) << " bytes" << endl;
    cout << "The size of a long double is: " << sizeof(long double) << " bytes" << endl;
    cout << "The size of a bool is: " << sizeof(bool) << " bytes" << endl;

    cout << "\n";

    // 4) Write a program in C++ to print the sum of two numbers using variables.
    cout << "Question 4:" << endl;
    int x1 = 20;
    int y1 = 30;
    int sum = x1+y1;

    cout << "The sum of " << x1 << " and " << y1 << " is " << sum << "." << endl;

    cout << "\n";

    // * 5) Write a program in C++ to check the upper and lower limits of integer.
    cout << "Question 5:" << endl;
    cout << "The maximum limit of int data type: " << INT_MAX << endl;
    cout << "The minimum limit of int data type: " << INT_MIN << endl;
    cout << "The maximum limit of long long data type: " <<  LLONG_MAX << endl;
    cout << "The minimum limit of long long data type: " <<  LLONG_MIN << endl;
    cout << "The maximum limit of char data type: " <<  CHAR_MAX << endl;
    cout << "The minimum limit of char data type: " << CHAR_MIN << endl;
    cout << "The maximum limit of signed char data type: " << SCHAR_MAX << endl;
    cout << "The minimum limit of signed char data type: " << SCHAR_MIN << endl;
    cout << "The maximum limit of short data type: " << SHRT_MAX << endl;
    cout << "The minimum limit of short data type: " << SHRT_MIN << endl;

    cout << "\n";

    // * 6) Write a program in C++ to check whether the primitive values crossing the limits or not.
    cout << "Question 6:" << endl;
    char gender = 'F';             // char is single-quoted
    bool isEmployed = true;         // true(non-zero) or false(0)
    unsigned short numOfsons = 2; // [0, 255]
    short yearOfAppt = 2009;      // [-32767, 32768]
    unsigned int YearlyPackage = 1500000;   // [0, 4294967295]
    double height = 79.48;       // With fractional part
    float gpa = 4.69f;           // Need suffix 'f' for float
    long totalDrawan = 12047235L;     // Suffix 'L' for long
    long long balance = 995324987LL;  // Need suffix 'LL' for long long int

    cout << "The Gender is: " << gender << endl;
    cout << "Is she married?: " << isEmployed << endl;
    cout << "Number of sons she has: " << numOfsons << endl;
    cout << "Year of her appointment: " << yearOfAppt << endl;
    cout << "Salary for a year: " << YearlyPackage << endl;
    cout << "Height is: " << height << endl;
    cout << "GPA is: " << gpa << endl;
    cout << "Salary drawn upto: " << totalDrawan << endl;
    cout << "Balance till: " << balance << endl;

    cout << "\n";

    // 7) Write a program in C++ to display various data type or arthmetic operation using mixed data type.
    cout << "Question 7:" << endl;
    int a = 5;
    int b = 7;
    double c = 3.7;
    double d = 8.0;

    cout << fixed << setprecision(1);
    cout << "1: " << a << " + " << b << " = " << a + b << endl;
    cout << "2: " << c << " + " << d << " = " << c + d << endl;
    cout << "3: " << a << " + " << d << " = " << a + d << endl;
    cout << "4: " << a << " - " << b << " = " << a - d  << endl; // ????
    cout << "5: " << c << " - " << d << " = " << c - d  << endl;
    cout << "6: " << a << " - " << d << " = " << a - d << endl;
    cout << "7: " << a << " * " << b << " = " << a * b << endl;
    cout << "8: " << c << " * " << d << " = " << c * d << endl;
    cout << "9: " << a << " * " << d << " = " << a * d << endl;
    cout << "10: " << a << " / " << b << " = " << a/b << endl;
    cout << "11: " << c << " / " << d << " = " << c/d << endl;
    cout << "12: " << a << " / " << d << " = " << a/d << endl;

  return 0;
  }
