#include <iostream>

using namespace std; // Using namespace directive to simplify code

class MyClass {
private:
    static int objectCount; // Static data member to count objects
    int data;

public:
    MyClass(int d) : data(d) {
        objectCount++; // Increment object count when an object is created
    }

    static int getObjectCount() {
        return objectCount; // Static member function to access object count
    }

    void display() {
        cout << "Data: " << data << endl;
    }
};

// Initialize the static member variable
int MyClass::objectCount = 0;

int main() {
    // Create objects of MyClass
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(30);

    // Display the number of objects created
    cout << "Number of objects created: " << MyClass::getObjectCount() << endl;

    return 0;
}