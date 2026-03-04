#include<iostream> 
#include<string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    bool isIssued;

public:
  void addBook() {
    cout<<"Enter Book ID:";
    cin>> bookID;
    cin.ignore();

    cout<<"Enter Book Title:";
    getline(cin,title);

    cout<<"Enter Author Name:";
    getline(cin, author);

    isIssued = false;
    cout<<"Book Added Successfully!\n\n";
  }
    int getBookID() {
      return bookID;
    }

    void displayBook() {

      cout<<"\nBook ID:"<< bookID;
      cout<<"\nTitle:"<< title;
      cout<<"\nAuthor:"<< author;
      cout<<"\nStatus:"<<(isIssued ?"Issued":"Available")<< endl;;
    }

    void issueBook() {
      if(!isIssued) {
        isIssued = true;
        cout<<"Book Issued Successfully!\n";
      } else{
        cout<<"Book is already issued.\n";
      }
    }
    void returnBook() {
      if(isIssued) {
        isIssued = false;
        cout<<"Book Reutuned Successfully!\n";
      } else{
        cout<<"book was not issued.\n";
      }
    }
};
int main() {
  Book books[100];
  int count=0;
  int choice,id;

  do {
     cout<<"\n===== Library Management System =====";
     cout<<"\n1. Add Book";
     cout<<"\n2. Display All Books";
     cout<<"\n3. Search Book";
     cout<<"\n4. Issue Book";
     cout<<"\n5. Return Book";
     cout<<"\n6. Exit";
     cout<<"\nEnter your choice:";
     cin>> choice;

    switch(choice) {

      case 1:
        books[count].addBook();
        count++;
        break;
      
      case 2:
        for(int i=0; i< count; i++) {
          books[i].displayBook();
        }
        break;
      
      case 3:
        cout<<"Enter Book ID to Search:";
        cin>> id;
        for(int i=0; i<count; i++) {
          if(books[i].getBookID()==id) {
            books[i].displayBook();
          }
        }
        break;

      case 4:
        cout<<"Enter Book ID to Issue:";
        cin>> id;
        for(int i=0; i<count; i++){
          if(books[i].getBookID()== id) {
            books[i].issueBook();
          }
        }
        break;
      
      case 5:
        cout<<"Enter Book ID to Return:";
        cin>> id;
        for(int i=0; i<count; i++) {
          if(books[i].getBookID()==id) {
            books[i].returnBook();
          }
       }
       break;

      case 6:
        cout<<"Exiting Program...\n";
        break;
      default:
        cout<<"Invalid Choice\n";
    }
    
  }while(choice !=6);
  return 0;
}
