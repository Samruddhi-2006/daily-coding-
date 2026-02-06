#include<iostream>
using namespace std;

int main() {
  int n, key;
  cout<<"Enter size:";
  cin>>n;

  int arr[n];
  cout<<"Enter sorted elements:\n";
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
  cout<<"Enter element to search:";
  cin>> key;

  int low=0, high=n-1;
  while(low<=high){
    int mid =(low+high)/2;

    if(arr[mid]==key){
      cout<<"Element found at position"<< mid+1;
      return 0;
    }
    else if(key<arr[mid]) {
      high = mid-1;
    }
    else {
      low =mid+1;
    }
  }
  cout<<"Element not found";
  return 0;
}
