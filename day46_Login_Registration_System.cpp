#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void registerUser() {
  string username, password;

  cout<<"\n--- Registration---\n";
  cout<<"Enter Username:";
  cin>> username;

  cout<<"Enter Password:";
  cin>> password;

  ofstream file("users.txt",ios::app);
  file<< username <<" "<< password << endl;
  file.close();

  cout<<"Registration Successful!\n";
}
void loginUser() {
  string username, password;
  string fileUser, filePass;
  bool found = false;

  cout<<"\n---Logic--\n";
  cout<<"Enter Username:";
  cin>>username;

  cout<<"Enter Password:";
  cin>>password;

  ifstream file("users.txt");

  while(file >> fileUser >> filePass) {
    if(fileUser == username && filePass ==password) {
      found= true;
      break;
    }
  }
  file.close();

  if(found) {
    cout<<"Login Successfull Welcome"<< username << endl;
  } else {
    cout<<"Invalid Username or Password\n";
  }
}
int main() {
  int choice;

  do{
    cout<<"\n===== Login System =====\n";
    cout<<"1. Register\n";
    cout<<"2. Login\n";
    cout<<"3. Exit \n";
    cout<<"Enter Choice:";
    cin>> choice;

    switch(choice) {
      case 1:
        registerUser();
        break;
      
      case 2:
        loginUser();
        break;

      case 3:
        cout<<"Exiting...\n";
        break;

      default:
        cout<<"Invalid Choice!\n";
    }
  }while(choice !=3); 
  return 0;
}
