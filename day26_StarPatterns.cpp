#include <iostream>
using namespace std;

int main() {
  int n, choice;
  cout<<"Enter number of rows:";
  cin >>n;

  cout<<"\nChoose pattern(1-10):";
  cin >> choice;

  switch(choice) {
    case 1: // Left Triangle
      for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++)
          cout<<"* ";
        cout<<endl;
    }
    break;
    
    case 2: // Inverted Left Triangle
      for(int i=n; i>=1; i--) {
        for(int j=1; j<=1; j++)
          cout<<"* ";
        cout<<endl;
      }
    break ;
    
    case 3: // Right Triangle
      for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++)
          cout<<" ";
        for(int j=1; j<=i; j++)
          cout <<"* ";
        cout<<endl;
      }
    break;
    
    case 4: // Inverted Right Triangle
      for(int i=n; i>=1; i--){
        for(int s=1; s<=n-i; s++)
          cout<< " ";
        for(int j=1; j<=i; j++)
          cout<<"* ";
        cout<<endl;
      }
    break;
    
    case 5: // Pyramid
      for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++)
          cout<<" ";
        for(int j=1; j<=2*i-1; j++)
          cout<<"*";
        cout<<endl;
      }
      break;
    
    case 6: // Inverted Pyramid
      for(int i=n; i>=1; i--){
        for(int s=1; s<=n-i; s++)
          cout<<" ";
        for(int j=1; j<=2*i-1; j++)
          cout<<"*";
        cout<<endl;
      }
      break;
    
    case 7: // Diamond
      for(int i=1; i<=n; i++){
        for(int s=1; s<=n-1; s++)
          cout<<" ";
        for(int j=1; j<=2*i-1; j++)
          cout<<"*";
        cout<<endl;
      }
    for(int i=n-1; i>=1; i--){
      for(int s=1; s<=n-1; s++)
        cout<<" ";
      for(int j=1; j<=2*i-1; j++)
        cout<<"*";
      cout<<endl;
    }
    break;
   
    case 8: // Square
      for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
          cout<<"* ";
        cout<<endl;
      }
    break;
    
    case 9: // Hollow Square
      for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) {
          if(i==1 || i==n || j==1 || j==n)
            cout<<"* ";
          else
            cout<<" ";
        }
        cout<<endl;
      }
      break;
    
    case 10: // Hellow pyramid
    for(int i=1; i<=n; i++){
      for(int s=1; s<=n-i; s++)
        cout<<" ";
      for(int j=1; j<=2*i-1; j++) {
        if(j==1|| j==2*i-1 || i==n)
          cout<<"*";
        else
          cout<<" ";
      }
      cout <<endl;
    }
    break;

    default:
      cout<<"Invalid choice";
  }
  return 0;
}
