#include<iostream>
using namespace std;

int main() {
  int  num, rev = 0,temp;
  cout<<"Enter a number:";
  cin >> num;

  temp = num;
  while (num>0) {
      rev = rev*10 + (num%10);
      num = num/10;
  }
if(temp == rev)
    cout<<"Number is Palindrome";
else
  cout<<"Number is Not Palindrome";

  return 0;
}
