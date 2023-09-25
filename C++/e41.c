#include <iostream>
#include <cmath>

using namespace std;

class C_POWER {
public:
    double power(double m, int n = 2) {
        return pow(m, n);
    }

    double power(int m) {
        return pow(static_cast<double>(m), 2);
    }
};

int main() {
    C_POWER c_power;
    double m;
    int n;

    cout << "Enter a value for m (a double): ";
    cin >> m;
    cout << "Enter a value for n (an integer, optional): ";
    cin >> n;

    if (n) {
        double result = c_power.power(m, n);
        cout << m << " raised to the power " << n << " is " << result << endl;
    } else {
        double result = c_power.power(static_cast<int>(m));
        cout << m << " squared is " << result << endl;
    }

    return 0;
}