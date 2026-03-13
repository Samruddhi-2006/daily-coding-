#include<iostream>
#include<cctype>
using namespace std;

int main() {
  string password;
  cout<<"Enter your password:";
  cin>>password;

  bool hasUpper= false;
  bool hasLower= false;
  bool hasDigit = false;
  bool hasSpeial = false;

  if(password.length() <8) {
    cout<<"Weak password ❌ (Minimun 8 characters required)"<< endl;
    return 0;
  }

  for(int i =0; i<password.length(); i++) {
    if(isupper(password[i]))
      hasUpper = true;
    else if(islower(password[i]))
      hasLower = true;
    else if(isdigit(password[i]))
      hasDigit = true;
    else
      hasSpeial= true;
      
  }
  if(hasUpper && hasLower && hasDigit && hasSpeial)
    cout<<"Strong password  💪✅"<< endl;
  else if((hasUpper || hasLower)&& hasDigit)
    cout<<"Medium password ⚠️"<< endl;
  else
    cout<<"Weak password❌"<<endl;
  
  return 0;
}
