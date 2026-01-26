#include<iostream>
#include<cstring>
using namespace std;

int main() {
  char ch[20];
  cout<<"Enter text:";
  cin>>ch;

  cout<<"Reverse :";

  for(int i = 0; ch[i] != '0';i++)
    {
      cout<<ch[strln(ch)-i-1];
    }
  return 0;
}
