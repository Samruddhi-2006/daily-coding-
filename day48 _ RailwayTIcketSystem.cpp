#include<iostream>
#include<string>
using namespace std;

struct Ticket {
    string name;
    int age;
    string train;
    int seat;
};

int main() {

    Ticket t;
    int choice;
    bool booked = false;

    do {

        cout<<"\n==== Railway Ticket System ====\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. View Ticket\n";
        cout<<"3. Cancel Ticket\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

        case 1:
            if(booked){
                cout<<"Ticket already booked!\n";
            }
            else{
                cout<<"Enter Passenger Name: ";
                cin>>t.name;

                cout<<"Enter Age: ";
                cin>>t.age;

                cout<<"Enter Train Name: ";
                cin>>t.train;

                cout<<"Enter Seat Number: ";
                cin>>t.seat;

                booked = true;
                cout<<"Ticket Booked Successfully!\n";
            }
            break;

        case 2:
            if(booked){
                cout<<"\n--- Ticket Details ---\n";
                cout<<"Name: "<<t.name<<endl;
                cout<<"Age: "<<t.age<<endl;
                cout<<"Train: "<<t.train<<endl;
                cout<<"Seat Number: "<<t.seat<<endl;
            }
            else{
                cout<<"No ticket booked!\n";
            }
            break;

        case 3:
            if(booked){
                booked = false;
                cout<<"Ticket Cancelled Successfully!\n";
            }
            else{
                cout<<"No ticket to cancel!\n";
            }
            break;

        case 4:
            cout<<"Thank you for using the system!\n";
            break;

        default:
            cout<<"Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
