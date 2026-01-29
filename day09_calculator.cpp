#include<iostream>
using namespace std;

int main() {

  int a, b;
  char op;
  cout<<"Enter first number:";
  cin>>a;

  cout<<"Enter second number:";
  cin>>b;

  cout<<"Enter operator(+ - * /):";
  cin>>op;

  switch(op){
    case'+':
        cout<<"Result="<<a+b;
        break;
    case'-':
        cout<<"Result="a-b;
        break;
    case'*':
        cout<<"Result="a*b;
        break;
    case'/':
        if(b!=0)
            cout<<"Result="<<a/b;
        else
            cout<<"Division by zero not allowed";
        break;
    default:
      cout<<"Invalid operator";
  }
  return 0;
}
