#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int totalMarks;
};

const int Max_Student = 100;

int main() {
struct Student students[Max_Student];
int choice;
    do{
        cout <<"\n<----Student Recode Management System---->\n";
        cout <<"1. Add a Student \n";
        cout <<"2. Display Students \n";
        cout <<"3. Search Student \n";
        cout <<"4. Update Student \n";
        cout <<"5. exit\n";
        cout <<"Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout<< "add student"<< endl;
                            break;
            case 2: cout<< "display student" << endl;
                            break;
            case 3: cout<< "search student" << endl;
                            break;
            case 4: cout<< "update student" << endl;
                            break;
            case 5: cout << "exit";
                            break;
            default : cout << "invalid choice, try btw 1 to 5";
        }
    }while(choice != 5);
}

