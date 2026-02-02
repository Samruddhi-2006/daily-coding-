#include<iostream>
using namespace std;

int main() {
  int n, even = 0, odd =0;

  cout<<"Enter array size:";
  cin>> n;

  int arr[n];

  cout<<"Enter array elements:\n";
  for(int i =0; i<n; i++) {
    cin>>arr[i];

    if(arr[i]%2==0)
      even++;
    else
      odd++;
  }
  cout<<"Even number count="<< even << endl;
  cout<<"Odd numbers count="<< odd << endl;

  return 0;
}
