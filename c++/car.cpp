#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand, model, color;
    int year;
    double price;

    void input() {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter model: ";
        cin >> model;

        cout << "Enter color: ";
        cin >> color;

        cout << "Enter year: ";
        cin >> year;

        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "\n--- Car Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c;
    c.input();
    c.display();

    return 0;
}
