#include<iostream>
using namespace std;

int main() {
  int score =0;
  char ans;

  cout<<"===== Simple Quiz Application ====="<< endl;

  cout<<"\n1. Who is  know as the father of C++"<< endl;
  cout<<"a) Dennis Ritchie"<< endl;
  cout<<"b) Bjarne Stroustup"<< endl;
  cout<<"c) James Gosling"<< endl;
  cout<<"d) Guido van Rossum"<< endl;
  cout<<"Enter your answer:";
  cin>> ans;
  if(ans=='b' || ans=='B') {
    score++;
  }
  cout<<"\n2. Which symbol is used for single line comment in C++?"<< endl;
  cout<<"a) //"<< endl;
  cout<<"b)/* */"<< endl;
  cout<<"c) #"<< endl;
  cout<<"d) <!-- -->"<< endl;
  cout<<"Enter your answer:";
  cin>> ans;

  if(ans=='a' || ans =='A') {
    score++;
  }

  cout<<"\n3. Which of the following is a loop in C++?"<< endl;
  cout<<"a) for"<< endl;
  cout<<"b) repeat"<< endl;
  cout<<"c) iterate"<< endl;
  cout<<"d) check"<< endl;
  cout<<"Enter your answer:";
  cin>> ans;

  if(ans =='a' || ans=='A'){
    score++;
  }

  cout<<"\n4. Which data type is used for decimal number?"<< endl;
  cout<<"a) int"<< endl;
  cout<<"b) float"<< endl;
  cout<<"c) char"<< endl;
  cout<<"d) bool"<< endl;
  cout<<"Enter your answer:";
  cin>> ans;

  if(ans=='b' || ans== 'B') {
    score++;
  }

  cout<<"\n5. Which function is used to display output in C++?"<< endl;
  cout<<"a) cin"<< endl;
  cout<<"b) print"<< endl;
  cout<<"c) cout"<< endl;
  cout<<"d) input"<< endl;
  cout<<"Enter your answer:";
  cin>>ans;

  if(ans=='c' || ans=='C') {
    score++;
  }
  cout<<"\n===== Quiz Finished ====="<< endl;
  cout<<"Your Score:"<< score <<"out of 5"<< endl;

  if(score==5) {
    cout<<"Excellent!"<< endl;
  }
  else if(score>=3) {
    cout<<"Good Job!"<< endl;
  }
  else {
    cout<<"Keep Practicing!"<< endl;
  }
  return 0;
}
