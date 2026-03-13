#include<iostream>
using namespace std;

class Employee {
private:
  int empID;
  string name;
  float salary;

public:
  void addEmployee() {
    cout<<"Enter Employee ID:";
    cin>>empID;

    cout<<"Enter Employee Name:";
    cin>> name;

    cout<<"Enter Salary:";
    cin >> salary;
  }
  void displayEmployee() {
    cout<<"\nEmployee ID:"<< empID;
    cout<<"\nEmployee Name:"<<name;
    cout<<"\nSalary:"<< salary << endl;
  }
   int getID() {
     return empID;
   }
};

int main() {
  Employee e[50];
  int choice, n=0, ID, found = 0;

  do{
    cout<<"\n\n----Employee Management System----";
    cout<<"\n1. Add Employee";
    cout<<"\n2. Display Employees";
    cout<<"\n3. Search Employee";
    cout<<"\n4. Exit";
    cout<<"\nEnter your choice:";
    cin>> choice;

    switch(choice) {
      
        case 1:
        e[n].addEmployee();
        n++;
        break;

      case 2:
        for(int i=0; i<n; i++){
          e[i].displayEmployee();
        }
        break;
      
      case 3:
        cout<<"Enter Employee ID to search:";
        cin>> ID;
        found=0;

        for(int i=0; i<n; i++){
          if(e[i].getID() == ID){
            e[i].displayEmployee();
            found=1;
          }
        }
        if(found==0){
          cout<<"Employee not found";
        }
        break;
    
      case 4:
        cout<<"Exiting Program...";
        break;

      default:
        cout<<"Invalid choice";
    }
  }while(choice !=4);

  return 0;
}
