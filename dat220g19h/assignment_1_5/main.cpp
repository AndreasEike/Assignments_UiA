#include <iostream>
using namespace std;

int main() {

    string input1;
    string input2;

    cout << "Input string 1:" << endl;

    getline(cin,input1);

    cout << "Input string 2:" << endl;

    getline(cin, input2);

    if(input1==input2) {
        cout << "Strings are equal" << endl;
    } else cout << "Strings are not equal" << endl;

    if(input1.find(input2)!=-1) {
        cout << "is a substring" << endl;
    }
    else {
      if (input2.find(input1)!=-1) {
          cout << "is a substring" << endl;
      }
      else cout << "is not a substring" << endl;
    }
    return 0;
}