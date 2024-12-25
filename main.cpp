#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    int totalMarks;
};
const int Max_Student = 100;

//protypal declaration
void add(Student students[],int &count);
void display(Student students[],int count);
void search(Student students[],int count);
void findAndUpdateStudent(Student students[], int count);



int main() {
struct Student students[Max_Student];
int studentCount = 0;

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
            case 1: add(students, studentCount);// champak[] = students // &count = studentCount
                            break;
            case 2: display(students, studentCount);
                            break;
            case 3: search(students, studentCount);
                            break;
            case 4: cout<< "update student" << endl;
                            break;
            case 5: cout << "exit";
                            break;
            default : cout << "invalid choice, try btw 1 to 5";
        }
    }while(choice != 5);
    return 0;
}

void add(Student champak[],int &count) {
    if (count >= Max_Student) {
        cout<< "you cant add students more as the max count limit reached"<< endl;
        return;
    }
    cout<<"Enter the details of"<< count + 1 <<"th student" << endl;
    cout<< "Enter the name: ";
    cin.ignore();
    getline(cin, champak[count].name);
    cout << "Enter roll No(it should be unique): ";
    cin >> champak[count].rollNo;
    cout << "Enter total marks: ";
    cin >> champak[count].totalMarks;
    count++;// count + 1
    cout <<"student added";
}

void display(Student students[],int count) {
    cout << "Student Details"<<endl<< endl;
    for (int i = 0; i < count; i++) {
        cout << "student "<< i + 1 << endl;
        cout <<"name: "<<students[i].name<< endl;
        cout <<"roll no.: "<<students[i].rollNo<< endl;
        cout <<"total Marks: "<<students[i].totalMarks<< endl<< endl;
    }
}

void search(Student students[],int count) {
    if (count == 0) {
        cout << "there is no student in the record" << endl;
    }

    int rollNo;
    cout << "Enter the roll number of the student you have to find: " << endl;
    cin >> rollNo;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Student found" << endl;
            cout <<"name: "<<students[i].name<< endl;
            cout <<"roll no.: "<<students[i].rollNo<< endl;
            cout <<"total Marks: "<<students[i].totalMarks<< endl;
            return;
        }
    }
    cout << "student not found" << endl;
}

void findAndUpdateStudent(Student students[], int count) {
    if (count == 0) {
        cout << "No student records to update." << endl;
        return;
    }

    int rollNo;
    cout << "\nEnter the roll number of the student to update: ";
    cin >> rollNo;
//recreate this function using switch case and add search by name and update functionality

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "\nUpdating record for " << students[i].name << ":" << endl;
            cout << "Enter new name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Enter new marks: ";
            cin >> students[i].totalMarks;

            cout << "Student record updated successfully!" << endl;
            return;
        }
    }

    cout << "Student with roll number " << rollNo << " not found." << endl;
}




