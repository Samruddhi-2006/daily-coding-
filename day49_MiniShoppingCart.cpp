#include<iostream>
#include<string>
using namespace std;

struct Product {
  string name;
  float price;
  int quantity;
};

int main() {
  Product cart[10];
  int count =0;
  int choice;

  do{
    cout<<"\n===== Mini Shopping Cart =====\n";
    cout<<"1. Add Product\n";
    cout<<"2. View Cart\n";
    cout<<"3. Calculate Bill\n";
    cout<<"4. Exit\n";
    cout<<"Enter choice:";
    cin>> choice;

    switch(choice) {
      case 1:
        if(count<10){
          cout<<"Enter Product name:";
          cin>>cart[count].name;

          cout<<"Enter Price:";
          cin>>cart[count].price;

          cout<<"Enter quantity:";
          cin>>cart[count].quantity;

          count++;
          cout<<"Product added successfully!\n";
        } else{
          cout<<"Cart is fill!\n";
        }
        break;

      case 2:
        if(count==0) {
          cout<<"Cart is empty!\n";
        } else{
            cout<<"\nProducts in Cart:\n";
            for(int i=0; i<count; i++) {
              cout<<i+1<<". "
                <<cart[i].name<< " - "
                <<cart[i].price<< " * "
                <<cart[i].quantity<< endl;
            }
        }
        break;

      case 3: {
        float total=0;
        for( int i =0; i< count; i++) {
          total += cart[i].price * cart[i].quantity;
        }
        cout<<"Total Bill="<< total << endl;
        break;
      }
      case 4:
        cout<<"Thank you for shopping !\n";
        break;

      default:
      cout<<"Invalid choice!\n";
    }
  } while(choice!=4);
  return  0;
}
