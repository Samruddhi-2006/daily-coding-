#include <iostream>
using namespace std;

int main() {
  char str1[100], str2[100];
  int i =0;
  
  cout<<"Enter first string:";
  cin.getline(str1, 100);

  cout<<"Enter second string:";
  cin.getline(str2, 100);

  while(str1[i] !='\0' && str2[i] !='\0') {
    if (str1[i] != str2[i]) {
      break;
    }
    i++;
  }
  if (str1[i] == str2[i]) {
    cout<< "\nStrings are equal";
  }
  else {
    cout<<"\nString are not equal";
  }
  return 0;
}
