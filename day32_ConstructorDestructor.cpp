#include <iostream>
using namespace std;

class Student {
private:
  string name;
  int age;

public:
  Student() {
    name = "Not Assigned";
    age=0;
    cout<<"Default constructor called  ✅"<< endl;
  }
  Student(string n, int a) {
    name = n;
    age = a; 
    cout<<"Parameterized Constructor called ✅"<< endl;
  }
void display() {
  cout<<"Name:"<< name << endl;
  cout<<"Age:"<< age<< endl;
  cout<<"-----------------"<< endl;
}

~Student() {
    cout<< "Destructor called for " << name <<"❌"<< endl;
  }
};

int main () {
  cout<<"Program stared...\n\n";

  Student s1;
  s1.display();

  Student s2("Samruddhi", 20);
  s2.display();

  Student s3("Rahul",21);
  s3.display();

  cout<<"\nProgram Ending...\n";

  return 0;
}
