#include <iostream>

using namespace std;

  int main() {

    // Programs inside a computer are 0s and 1s
    // Prog.cpp is a high-level language, which needs to be translated to machine language prog.exe
    // This program reads two integers from the user and prints their sum

    int num1; // will hold the first input
    int num2; // will hold the second input
    int sum; // will hold the sum

    cout << "Please enter the two numbers separated by a space" << endl;
    cin >> num1 >> num2;

    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;

  return 0;
  }
