#include <iostream>
using namespace std;

int main(){
  int n, sum =0;

  cout<<"Enter number of elements:";
  cin >> n;

  int arr[n];

  cout<<"Enter element:\n";
  for(int i=0; i<n; i++){
    cin>> arr[i];
    sum+= arr[i];
  }

  cout<<"Array elements are:";
  for( int i =0; i<n; i++){
    cout<< arr[i]<<"";
  }
  double avg =(double)sum/ n;

  cout<<"\nSum="<< sum;
  cout<<"\nAverage="<< avg;

  return 0;
}
