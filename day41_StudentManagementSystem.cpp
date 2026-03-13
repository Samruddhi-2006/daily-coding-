#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;
  string name;
  float marks;

public:
  void addStudent() {
    cout<<"Enter roll Number:";
    cin>>rollNo;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Marks:";
    cin>>marks;
  }
  void displayStudent() {
    cout<<"\nRoll Number:"<< rollNo;
    cout<<"\nName:"<< name;
    cout<<"\nMarks:"<< marks << endl;
    
  }
  int getRollNo() {
    return rollNo;
  }
};

int main() {
  Student s[100];
  int choice, count=0, roll, i;

  do{
     cout<<"\n==== Student Management System ====";
     cout<<"\n1. Add Student";
     cout<<"\n2. Display All Students";
     cout<<"\n3. Search Student by Roll Number";
     cout<<"\n4. Exit";1
     cout<<"\nEnter your choice:";
     cin>> choice;

     switch(choice) {
       case 1:
         s[count].addStudent();
         count++;
         break;

       case 2:
         for(i=0; i< count; i++) {
           s[i].displayStudent();
         }
       break;

       case 3:
         cout<<"Enter Roll Number to Search:";
         cin>> roll;
         for(i=0; i<count; i++) {
           if(s[i].getRollNo() == roll) {
             s[i].displayStudent();
           break;
         }
       } 
        if(i == count) {
         cout<<"Student Not Fount!"<< endl;
       }
       break;

       case 4:
         cout<<"Existing Program...";
         break;
       
       default:
         cout<<"Invalid Choice!";
     }
      
  }while(choice != 4);

  return 0;
}
