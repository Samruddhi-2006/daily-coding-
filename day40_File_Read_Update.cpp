#include <iostream>
#include <fstream>
using namespace std;

int main() {

    string name, searchName;
    int age;
    float marks;
    bool found = false;
  
    ifstream file("students.txt");
    ofstream temp("temp.txt");

    if (!file || !temp) {
        cout << "File error ❌" << endl;
        return 0;
    }

    cout << "Enter student name to update: ";
    cin >> searchName;

    while (file >> name >> age >> marks) {

        if (name == searchName) {
            found = true;
            cout << "Enter new age: ";
            cin >> age;
            cout << "Enter new marks: ";
            cin >> marks;
        }

        temp << name << " " << age << " " << marks << endl;
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Record updated successfully ✅" << endl;
    else
        cout << "Student not found ❌" << endl;

    return 0;
}
