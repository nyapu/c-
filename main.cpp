#include <iostream>
using namespace std;
class complex {

private:
  int a;
  int b;

public:
  complex(int x, int y) {
    a = x;
    b = y;

    cout << "a =" << a << endl;
    cout<< "b =" << b << endl;
  }
  complex(int x) {
    a = x;
    cout << "a =" << a << endl;
  }
  complex() {
    a = 0;
    b = 0;
    cout << "a =" << a << endl;
    cout<< "b =" << b << endl;
  }
};
int main() { 
  
  
complex c1(5,10),c2(9),c3;
  return 0;
  }