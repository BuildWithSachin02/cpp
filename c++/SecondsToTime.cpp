#include <iostream>
using namespace std;

class TimeConverter {
public:
    int seconds, hours, minutes, remainingSeconds;

    void input() {
        cout << "Enter total seconds: ";
        cin >> seconds;
    }

    void convert() {
        hours = seconds / 3600;
        minutes = (seconds % 3600) / 60;
        remainingSeconds = seconds % 60;
    }

    void display() {
        cout << "Time: ";

        if (hours < 10) cout << "0";
        cout << hours << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (remainingSeconds < 10) cout << "0";
        cout << remainingSeconds << endl;
    }
};

int main() {
    TimeConverter t;

    t.input();
    t.convert();
    t.display();

    return 0;
}
