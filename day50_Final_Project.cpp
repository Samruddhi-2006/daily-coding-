#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
  void addStudent() {
    cout<<"Enter Roll Number:";
    cin >> rollNo;

    cout<<"Enter Name:";
    cin >> name;

    cout<<"Enter Marks:";
    cin >> marks;
  }

  void displayStudent() {
    cout<<"\n----------------------";
    cout<<"\nRoll Number :" << rollNo;
    cout<<"\nName        :" << name;
    cout<<"\nMarks       :" << marks;
    cout<<"\n-------------------\n";
  
  }
  
  int getRollNo() {
    return rollNo;
  }
};

int main() {
  
  Student s[100];
  int choice, count =0, roll, i;

  do {
      cout<<"\n===== Student Management System =======";
      cout<<"\n1. Add Student";
      cout<<"\n2. Display All Student";
      cout<<"\n3. Search Student by Roll Number";
      cout<<"\n4. Total Students";
      cout<<"\n5. Exit";
      cout<<"\nEnter your choice:";
      cin>> choice;

    switch(choice) {
      case 1:
        s[count].addStudent();
        count++;
        cout<<"student Added Successfully ✅\n";
        break;

      case 2:
        if(count ==0) {
          cout<<"No Students Found!\n";
        } else {
          for(i=0; i<count; i++){
            s[i].displayStudent();
          }
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
      if(i==count) {
        cout<<"Student Not Found ❌\n";
      }
      break;
      
      case 4:
          cout<<"Total Students:"<< count << endl;
          break;
      
      case 5:
        cout<<"Exiting Program...\n";
        break;

      default:
        cout<<"Invalid Choice!\n";
    }
  }while(choice !=5);

  return 0;
}
