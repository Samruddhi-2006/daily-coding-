#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str[100];
  int vowels = 0, consonants = 0, digit = 0;

  cout<<"Enter a string:";
  cin.getline(str, 100);

  for(int i=0; str[i] !='\0'; i++) {
    if (str[i]>= '0' && str[i]<='9') {
      digit++;
    }
      else if (str[i]=='a'|| str[i]=='e'|| str[i]=='i' ||
               str[i]=='o'|| str[i]=='u'|| 
               str[i]=='A'|| str[i]=='E'|| str[i]=='I'||
               str[i]=='O'|| str[i]=='U') {
        vowels++;
        }
      else if ((str[i]>='a' && str[i]<='z')||
        (str[i]>='A'&& str[i] <='Z')) {
        consonants++;
        }
  }
  cout<<"\nVowels="<< vowels;
  cout<<"\nConsonants ="<< consonants;
  cout<<"\nDigits ="<< digit;

  return 0;
}
