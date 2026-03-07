#include<iostream>
using namespace std;

int main() {
  int choice;
  double balance = 1000;
  double amount;

  do{
    cout<<"\n=====MINI TEXT APP=====\n";
    cout<<"1.Check Balance\n";
    cout<<"2. Deposit Money\n";
    cout<<"3. Withdraw Money\n";
    cout<<"4. Simple Calculator\n";
    cout<<"5. Exit\n";
    cout<<"Enter your choice:";
    cin>> choice;

    switch(choice) {
      
      case 1: 
        cout<<"Current Balance: ₹"<< balance << endl;
        break;
      
      case 2:
        cout<<"Enter amount to deposit: ₹";
        cin>>amount;
        if(amount>0) {
        balance += amount;
        cout<<"Deposit Successful ✅\n";
      } else {
        cout<<"Invalid Amount ❌\n";
      }
      break;
      
      case 3:
        cout<<"Enter amount to withdraw: ₹";
        cin>>amount;
        if(amount > 0 && amount <= balance) {
        balance -= amount;
        cout<<"Withdrawal Successful ✅\n";
      } else {
        cout<<"Insufficient Balance ❌\n";
      }
      break;

      case 4: {
          int num1, num2;
          char op;
          cout<<"Enter expression(e.g. 5 + 3):";
          cin >> num1 >> op >> num2;

        switch(op) {

          case'+': cout<< "Result:" << num1 + num2; break;
          case'-': cout<< "Result:"<< num1 - num2; break;
          case'*': cout<< "Result:"<< num1 * num2; break;
          case'/': 
            if(num2 != 0)
              cout<<"Result:"<< num1/num2;
          else
              cout<<"Cannot divide by zero ❌";
          break;
        default:
          cout<<"Invalid Operator ❌";
        }
        cout << endl;
        break;
      }
      case 5:
        cout<<"Thank you for using the App 👋\n";
        break;
      
      default:
      cout<<"Invalid Choice ❌ Try Again\n";
  
    }

  } while(choice !=5);
  
  return 0;
}
