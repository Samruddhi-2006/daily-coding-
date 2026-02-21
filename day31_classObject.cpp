#include <iostream>
using namespace std;

class Student {
private:
  string name;
  int age;
public: 
  void getData() {
    cout<<"Enter name:";
    cin>> name;
    cout<<"Enter age:";
    cin >> age;
  }
  void displayData() {
    cout<<"\nStudent Datails:\n";
    cout<<"Name:"<< name << endl;
    cout<<"Age:"<< age << endl;
  }
};

int main() {
  
  Student s1;
  s1.getData();
  s1.displayData();

  return 0;
}
