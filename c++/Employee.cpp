#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id, age;
    string name, department;
    double salary;

    void input() {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter department: ";
        cin >> department;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}
