#include <iostream>
using namespace std;

void inputMatrix(int mat[10][10],int r, int c){
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cin >> mat[i][j];
    }
  }
}
void dispalymatrix(int mat[10][10], int r, int c){
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      cout<< mat[i][j]<< " ";
    }
    cout<< endl;
  }
}
void addMatrix(int a[10][10], int b[10][10], int sum[10][10], int r, int c){
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
}
void multiplyMatrix(int a[10][10], int b[10][10], int mul[10][10], int r1, int c1, int r2, int c2){
  for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
      mul[i][j]=0;
      for(int k=0; k<c1; k++){
        mul[i][j]+=a[i][k]*b[k][j];
      }
    }
  }   
}
int main() {
  int a[10][10], b[10][10], sum[10][10], mul[10][10];
  int r1, c1, r2, c2, choice;
  cout<<"Enter rows and columns of first matrix:";
  cin >>r1 >>c1;
  
  cout<<"Enter rows and columns of second matrix:";
  cin >>r2>>c2;

  cout<<"Enter elements of first matrix:\n";
  inputMatrix(a,r1,c1);

  cout<<"Enter elements of second matrix:\n";
  inputMatrix(b,r2,c2);

  cout<<"\n1.Matrix Addition";
  cout<<"\n2. Matrix Multiplication";
  cout<<"\nEnter your choice:";
  cin >> choice;

  if (choice==1){
    if(r1==r2 && c1==c2) {
      addMatrix(a, b,sum,r1,c1);
      cout<<"\nResult of matrix Addition:\n";
      dispalymatrix(sum, r1, c1);
    } else {
      cout<<"Matrix addition not possible";
    }
  }
  else if (choice==2){
    if(c1==r2){
      multiplyMatrix(a, b, mul, r1, c1, r2, c2);
      cout<<"\nResult of Matrix Multiplication:\n";
      dispalymatrix(mul, r1,c2);
    } else {
      cout<<"Matix multiplication not possible";
    }
  }
  else {
    cout<<"Invalid choice";
  }
  return 0;
}
