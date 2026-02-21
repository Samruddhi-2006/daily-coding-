#include<iostream>
using namespace std;

int main() {
  
  string email;
  cout<<"Enter Email:";
  cin>>email;

  int atpos=email.find('@');
  int dotpos=email.find('.', atpos);

  if(atpos>0 && dotpos > atpos+1 && dotpos<email.length()-1) {
    cout<<"Valid Email ✅";
  } else {
    cout<<"Invalild Email ❌";
  }
  return 0;
}
