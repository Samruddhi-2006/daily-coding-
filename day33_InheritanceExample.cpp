#include <iostream>
using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person(string n, int a) {
    name=n;
    age=a;
    cout<<"Person Constructor Called ✅" << endl;
  }
  void displayPerson() {
    cout<<"Name:"<< name << endl;
    cout<<"Age:"<< age << endl;
  }
~Person() {
      cout<<"Person Destructor Called ❌"<< endl;
  }
};

class Student : public Person {
private:
  int rollNo;
  string course;

public:
  Student(string n, int a, int r, string c): Person(n,a)
{
  rollNo = r;
  course = c;
  cout<<"Student Constructor  Called ✅"<< endl;
}
void displayStudent() {
  displayPerson();
  cout<<"roll No:"<< rollNo << endl;
  cout<<"course:"<< course << endl;
}
~Student() {
    cout<<"Student Destructor Called ❌"<< endl;
  }
};

int main() {
  cout<< "Program Started....\n\n";
  Student s1("Samruddhi", 20, 126, "computer Science");

  cout<<"\nStudent Details:\n";
  s1.displayStudent();

  cout<<"\nProgram Ending...\n";

  return 0;
}
