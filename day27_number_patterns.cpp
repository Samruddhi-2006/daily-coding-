#include <iostream>
using namespace std;

int main() {
  
   int n=5;

  cout<<"Pattern 1: Increasing Numbers"<< endl;
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout<< j;
    }
      cout<< endl;
  }
  cout<<endl;
  
  cout<<"Pattern 2: Continuous Numbers"<< endl;
  int num=1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++) {
      cout<< num;
      num++;
    }
    cout<< endl;
  }
  cout<< endl;
  
  cout<<"Pattern 3: Reverse Pattern"<< endl;
  for(int i=n; i>=1; i--) {
    for(int j=1; j<=i; j++) {
      cout<< j;
    }
    cout<< endl;
  }
  return 0;
}
