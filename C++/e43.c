#include <iostream>

using namespace std;

class TIME {
private:
    float hours;
    int minutes;

public:
    TIME() {
        hours = 0.0;
        minutes = 0;
    }

    TIME(float h, int m) {
        hours = h;
        minutes = m;
    }

    TIME add(TIME t2) {
        float totalHours = hours + t2.hours;
        int totalMinutes = minutes + t2.minutes;

        // Adjust hours and minutes if minutes exceed 60
        if (totalMinutes >= 60) {
            totalHours += 1;
            totalMinutes -= 60;
        }

        return TIME(totalHours, totalMinutes);
    }

    TIME add(int x) {
        float totalHours = hours + x;

        return TIME(totalHours, minutes);
    }

    void display() {
        cout << hours << " hr " << minutes << " min" << endl;
    }
};

int main() {
    float hr1, hr2;
    int min1, min2;
    int x;

    cout << "Enter the hours of the first time: ";
    cin >> hr1;
    cout << "Enter the minutes of the first time: ";
    cin >> min1;

    cout << "Enter the hours of the second time: ";
    cin >> hr2;
    cout << "Enter the minutes of the second time: ";
    cin >> min2;

    cout << "Enter an integer 'x': ";
    cin >> x;

    TIME T1(hr1, min1);
    TIME T2(hr2, min2);

    TIME result1 = T1.add(T2);
    TIME result2 = T1.add(x);

    cout << "T1: ";
    T1.display();
    cout << "T2: ";
    T2.display();

    cout << "Result of T1 + T2: ";
    result1.display();

    cout << "Result of T1 + " << x << ": ";
    result2.display();

    return 0;
}