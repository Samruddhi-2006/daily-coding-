#include<iostream>
using namespace std;

int main() {
  int pin = 1234, enteredPin;
  int choice;
  float  balance = 10000;
  float amount;
  int  newPin;
  
  cout<<"========ATM MACHINE========="<< endl;
  cout<<"Enter your PIN:";
  cin>>enteredPin;

  if(enteredPin != pin) {
    cout<<"Inccorect PIN! Access Denied"<< endl;
    return 0;
  }
  do {
    cout<<"\n=====ATM MENU ========"<< endl;
    cout<<"1. Check Balance"<< endl;
    cout<<"2. Deposit Money"<< endl;
    cout<<"3. Withdraw Money"<< endl;
    cout<<"4. Change PIN"<< endl;
    cout<<"5. Mini Statement"<< endl;
    cout<<"6. Exit"<< endl;
    
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice) {
     
      case 1:
        cout<<"Current Balance:"<< balance<< endl;
        break;

      case 2: 
        cout<<"Enter amount to deposit:";
        cin>>amount;
        balance = balance + amount;
        cout<<"Amount deposited successfully"<< endl;
        break;

      case 3:
        cout<<"Enter amount to withdraw:";
        cin>>amount ;

      if(amount  > balance)
      {
        cout<<"Insufficient Balance"<< endl;
      }
      else {
        balance= balance-amount;
        cout<<"Pleace collect your cash"<<endl;
      }
      break;

      case 4:
        cout<<"Enter New PIN:";
        cin>>newPin;
        pin= newPin;
        cout<<"PIN changed successfully"<< endl;
        break;

      case 5:
        cout<<"------MINI STATEMENT-------"<< endl;
        cout<<"Available Balance:"<< balance << endl;
        cout<<"Last Transaction Successful"<< endl;
        break;

      case 6:
        cout<<"Thank you for using ATM"<< endl;
        break;

      default:
      cout<<"Invalid choice"<<endl;
    }
  }while(choice !=6);
  return 0;  
}
