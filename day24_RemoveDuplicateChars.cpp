#include <iostream>
using namespace std;

int main() {
  char str[100];

  cout<<"Enter a string:";
  cin.getline(str, 100);

  cout<<"\nString after removing duplicates:";

  for(int i=0; str[i] !='\0'; i++) {
    bool duplicate = false;

    for(int j=0; j<i; j++) {
      if(str[i] == str[j]) {
        duplicate = true;
        break;
      }
    }
    if (!duplicate) {
      cout<< str[i];
    }
  }
  return 0;
}
