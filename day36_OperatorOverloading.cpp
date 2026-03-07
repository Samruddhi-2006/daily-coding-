#include<iostream>
using namespace std;

class Student {
  int marks;

public:
  Student(int m=0) {
    marks=m;
  }

  Student operator+(Student s) {
    Student temp;
    temp.marks= marks+ s.marks;
    return temp;
  }

  bool operator>(Student s) {
    return marks>s.marks;
  }
  friend ostream & operator <<(ostream & out, Student s) {
    out<<"Marks:"<< s. marks;
    return out;
  } 
};

int main() {
  
  Student s1(75);
  Student s2(85);

  Student total;

  total= s1+s2;

  cout<<"Student 1->"<< s1 << endl;
  cout<<"Student 2->"<< s2 << endl;

  cout<<"\nTotal Marks->"<<total<< endl;
  
  if(s1>s2)
    cout<<"Student 1 scored higher"<< endl;
  else
    cout<<"studnet 2 scored higher"<< endl;
  
  return 0;
}
