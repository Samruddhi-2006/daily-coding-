#include<iostream>
using namespace std;

int main() {

  int num,sum=0,r;
  int temp;
  
  cout<<"Enter a number:";
  cin>> num;

  temp=num;

  while(temp>0){

    r=temp%10;
    sum=sum+(r*r*r);
    temp=temp/10;
  }
  if(sum==num)
      cout<<"Armstrong number";
  else
      cout<<"Not Armstrong number";
  return 0;
}
