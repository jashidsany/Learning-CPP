#include <iostream>

using namespace std;

  int main() {

    const string password = "mikefactor";
    const string password_1 = "kite";

    string input;
    string input_1;

    do {
      cout << "Enter the password to access this PC > " << flush;
      cin >> input;

      cout << "Enter 2nd password to access this PC > " << flush;
      cin >> input_1;

      if(input != password && input_1 != password_1) {
        cout << "Password wrong" << endl;
      }

    } while(input !=password);

    cout << "Password Accepted" << endl;

  return 0;
  }

// dual password access
