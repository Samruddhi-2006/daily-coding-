#include<iostream>
#include<fstream>
using namespace std;

int main() {
  
  ofstream file;
  file.open("student.txt");

  if(!file) {
    cout<<"Error opening file❌"<< endl;
    return 1;
  }
  string name;
  int age;
  float marks;

  cout<<"Enter Student Name:";
  cin>> name;
  
  cout<<"Enter marks:";
  cin>>marks;

  file<< "Student Name:"<< name << endl;
  file<<"Age:"<< \ge<< endl;
  file<<"Marks:"<< marks<< endl;

  file.close();
  cout<<"\n/data written successfully to file ✅"<< endl;

  return 0;
}
