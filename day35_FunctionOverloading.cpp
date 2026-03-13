#include<iostream>
using namespace std;

class Calculator {
 
public:
  int add(int a, int b) {
    return a+b;
  }
  int add(int a, int b, int c) {
    return a+b+c;
  }
  double add(double a, double b) {
    return a+b;
  }
};

int main() {

  Calculator obj;

  cout<<"Add 2 integers:"<< obj.add(5, 3)<< endl;
  cout<<"Add 3 integers:"<< obj.add(5, 3, 2)<< endl;
  cout<<"Add 2 double:"<< obj.add(4.5, 3.2)<< endl;

return 0;
}
