#include <iostream>

using namespace std;

class COMPLEX {
private:
    double real;
    double imaginary;

public:
    COMPLEX() {
        real = 0.0;
        imaginary = 0.0;
    }

    COMPLEX(double r, double i) {
        real = r;
        imaginary = i;
    }

    // Overloaded ADD() function for adding an integer and a complex number
    COMPLEX ADD(int a) {
        return COMPLEX(real + a, imaginary);
    }

    // Overloaded ADD() function for adding two complex numbers
    COMPLEX ADD(COMPLEX s2) {
        return COMPLEX(real + s2.real, imaginary + s2.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double realPart1, imaginaryPart1, realPart2, imaginaryPart2;
    int a;

    cout << "Enter the real part of the first complex number: ";
    cin >> realPart1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imaginaryPart1;
    
    cout << "Enter the real part of the second complex number: ";
    cin >> realPart2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imaginaryPart2;

    cout << "Enter an integer 'a': ";
    cin >> a;

    COMPLEX s1(realPart1, imaginaryPart1);
    COMPLEX s2(realPart2, imaginaryPart2);

    COMPLEX result1 = s1.ADD(a);
    COMPLEX result2 = s1.ADD(s2);

    cout << "s1: ";
    s1.display();
    cout << "s2: ";
    s2.display();

    cout << "Result of ADD(a, s2): ";
    result1.display();

    cout << "Result of ADD(s1, s2): ";
    result2.display();

    return 0;
}