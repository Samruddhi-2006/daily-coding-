#include <iostream>
using namespace std;

int main() {
  char str[200];
  int count = 0;

  cout<< "Enter a sentence:";
  cin.getline(str, 200);

  if(str[0] != ' ' && str[0] != '\0') {
    count = 1;
  }
  for(int i =0; str[i] !='\0'; i++) {
    if(str[i]== ' ' && str[i+1]!= ' ' && str[i+1] !='\0') {
      count ++;
    }
  }
  cout<<"\nNumber of words ="<< count;
  return 0;
}
