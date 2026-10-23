#include <iostream>
using namespace std;

class Converter {
public:
    float inches, feet;

    void input() {
        cout << "Enter inches: ";
        cin >> inches;
    }

    void convert() {
        feet = inches / 12;
    }

    void display() {
        cout << "Inches: " << inches << endl;
        cout << "Feet: " << feet << endl;
    }
};

int main() {
    Converter c;

    c.input();
    c.convert();
    c.display();

    return 0;
}
