#include<iostream>
using namespace std;

class Shape {
public:
  virtual void area() {
    cout<<"Calculating Area of Shape"<< endl;
  }
};
class Rectangle : public Shape {
  int length, width;

public:
  Rectangle(int l, int w) {
    length = l;
    width = w;
  }
  void area() override {
    cout<<"Area of Rectangle:"<< length*width << endl;
  }
};

class Circle : public Shape {
  int radius;
public:
  Circle(int r) {
    radius = r;
  }
  void area() override {
    cout<<"Area of Circle:"<< 3.14* radius * radius <<endl;
  }
};

int main() {

  Shape*ptr;
  Rectangle obj1(10,5);
  Circle obj2(7);

  ptr = &obj1;
  ptr->area();

  ptr = &obj2;
  ptr->area();

  return 0;
}
