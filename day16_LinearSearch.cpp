#include<iostream>
using namespace std;

int main() {
  int n, key;
  bool found = false;
  
  cout<<"Enter number of elements:";
  cin >> n;
  
  int arr[n];

  cout<<"Enter array elements:\n";
  for(int i =0; i<n; i++){
    cin >> arr[i];
  }
  cout<<"Enter element to search:";
  cin>> key;

  for(int i=0; i<n; i++){
    if(arr[i]==key){
      cout<<"\nElement not found at position:"<< i+1;
      found =true;
      break;
    }
  }
  if(!found){
    cout<<"\nElement not found in the array";
  }
  return 0;
}
