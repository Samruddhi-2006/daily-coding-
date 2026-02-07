#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void findMax() {
  int a,b,c;
  cout<<"Enter 3 numbers:";
  cin>>a>>b>>c;
  int maxval = a;
  if(b>maxval) maxval = b;
  if(c>maxval) maxval = c;
  cout<<"Max="<< maxval <<endl;
}
void evenOdd(){
  int n;
  cout<< "Enter number:";
  cin>>n;
  if(n%2==0)cout<<"Even\n";
  else cout<<"Odd\n";
}

void primeCheck() {
  int n, flag =1;
  cout<<"Enter number:";
  cin>>n;
  if(n<=1) flag = 0;
  for(int i =2;i<=n/2;i++){
    if(n%i==0){flag=0; break;}
  }
  if(flag) cout<<"Prime\n";
  else cout <<"Not Prime\n";
} 
void factorialCalc(){
  int n,fact =1;
  cout<<"Enter number:";
  cin>>n;
  for(int i =1;i<=n;i++) fact*=i;
  cout<<"factorial="<<fact << endl;
}

void fibonacciSeries(){
  int n,a=0,b=1,c;
  cout<<"How many terms:";
  cin>> n;
  cout<<a<<" "<<b<<" ";
  for(int i=3;i<=n;i++){
    c=a+b;
    cout<<c<<" ";
    a=b;b=c;
  }
  cout<< endl;
}

void reverseText(){
  char str[100];
  cout<< "Enter text:";
  cin>> str;
  int len =strlen(str);
  cout<<"Reverse:";
  for(int i=len-1;i>=0;i--)
    cout<<str[i];
  cout<<endl;
}
void palindromeCheck(){
  int n,rev =0,temp;
  cout<<"Enter number:";
  cin>>n;
  temp=n;
  while(n>0){
    rev= rev*10+n%10;
    n/=10;
  }
  if(temp==rev) cout<<"Palindrome\n";
  else cout<<"Not palindrom\n";
}

void armstrongCheck() {
  int n, sum=0,temp,d;
  cout<<"Enter number:";
  cin>>n;
  temp=n;
  while(n>0){
    d=n%10;
    sum +=d*d*d;
    n/=10;
  }
  if(sum == temp) cout<<"Armstrong\n";
  else cout<<"Not Armstrong\n";
}

void calculator() {
  int a,b;
  char op;
  cout<<"Enter a operator(+ - * /):";
  cin>>op;
  cout<<"Enter two numbers:";
  cin>>a>>b;

  switch(op){
    case '+': cout<<"Result="<<a+b;break;
    case '-': cout<<"Result="<<a-b;break;
    case '*': cout<<"Result="<<a*b;break;
    case '/': cout<<"Result="<<a/b;break;
    default: cout << "Invalid operator";
  }
  cout<<endl;
}
int main(){
  int choice;

  do{
    cout<<"\n====MENU====\n";
    cout<<"1. max of 3 numbers\n";
    cout<<"2. Even or odd\n";
    cout<<"3. Prime Check\n";
    cout<<"4. Factorial\n";
    cout<<"5. fibonacci\n";
    cout<<"6. Reverse Text\n";
    cout<<"7. Palindrome\n";
    cout<<"8. Armstrong\n";
    cout<<"9. Calculator\n";
    cout<<"0. Exit\n";
    cout<<"Enter Choice:";
    cin>>choice;

    switch(choice){
      case 1: findMax(); break;
      case 2: evenOdd(); break;
      case 3: primeCheck(); break;
      case 4: factorialCalc(); break;
      case 5: fibonacciSeries(); break;
      case 6: reverseText(); break;
      case 7: palindromeCheck(); break;
      case 8: armstrongCheck(); break;
      case 9: calculator(); break;
      case 0: cout<<"Exiting...\n"; break;
      default: cout<<"Invalid choice\n";
    }      
  }while(choice !=0);
  return 0;
}