#include <iostream>

using namespace std;

  int main() {

      cout << "ARRAY OF INT" << endl;
      cout << "============" << endl;
      int values[3];

      values[0] = 88;
      values[1] = 123;
      values[2] = 7;

      cout << values[0] << endl;
      cout << values[1] << endl;
      cout << values[2] << endl;

      cout << endl << "ARRAY OF DOUBLE" << endl;
      cout << "===============" << endl;

      double numbers[4] = {4.5, 2.3, 7.2, 8.1};

      cout << numbers[0] << endl;
      cout << numbers[1] << endl;
      cout << numbers[2] << endl;
      cout << numbers[3] << endl;

      cout << endl << "ARRAY LOOP" << endl;
      cout << "==========" << endl;

      for(int i=0; i<4; i++) {
        cout << "Element at index" << i << ": " << numbers[i] << endl;
      }

      cout << endl << "INITIALIZING WITH ZERO VALUES" << endl;
      cout << "=============================" << endl;

      int numberArray[8] = {};

      for(int i=0; i<8; i++) {
        cout << "Element at index" << i << ": " << numberArray[i] << endl;
      }

      // Array of Strings
      cout << endl << "ARRAY OF STRINGS" << endl;
      cout << "================" << endl;

      string texts[] = {"apple", "banana", "orange"};

      for(int i=0; i<3; i++) {
        cout << "Element at index" << i << ": " << texts[i] << endl;
      }

  return 0;
  }
