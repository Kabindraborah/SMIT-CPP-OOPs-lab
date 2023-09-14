#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    const double PI = 3.14;
public:
    float radius;
    void accept_radius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    float calculate_area() {
        return PI * radius * radius;
    }

    void display_details() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculate_area() << endl;
    }
};

int main() {
    Circle circle;

    circle.accept_radius();

    circle.display_details();

    return 0;
}
