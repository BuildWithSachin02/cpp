#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo, age;
    string name, course;
    float marks;

    void input() {
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter course: ";
        cin >> course;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}
