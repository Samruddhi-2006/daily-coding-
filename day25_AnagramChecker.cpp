#include<iostream>
#include<cstring>
using namespace std;

int main() {
  char str1[100], str2[100];
  int count1[26]={0}, count2[26] = {0};

  cout<<"Enter first string:";
  cin.getline(str1, 100);

  cout<<"Enter second string:";
  cin.getline(str2, 100);

  for(int i=0; str1[i]!='\0'; i++) {
    if(str1[i]>= 'A' && str1[i]<='Z')
      str1[i]= str1[i]+32;

    if(str1[i]>='a'&& str1[i]<='z')
      count1[str1[i]-'a']++;
  }
  for(int i=0; str2[i]!='\0'; i++){
    if (str2[i]>='A'&& str2[i]<='Z')
      str2[i] = str2[i]+32;

    if(str2[i]>='a'&& str2[i]<='z')
      count2[str2[i]-'a']++;
  }
  bool isAnagram = true;
  for(int i =0; i<26; i++){
    if(count1[i]!= count2[i]){
      isAnagram = false ;
      break;
    }
  }

  if(isAnagram)
    cout<<"\nStrings area Anagrams";
  else
    cout<<"\nStrings are Not Anagram";

  return 0;
}
