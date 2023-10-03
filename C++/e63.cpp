#include <iostream>
using namespace std;

class MyClass {
private:
    static int privateStaticData; // Private static data member

public:
    static void SetPrivateStaticData(int value) {
        privateStaticData = value;
    }

    static int GetPrivateStaticData() {
        return privateStaticData;
    }

    void Display() {
        cout << "Private Static Data: " << privateStaticData << endl;
    }
};

int MyClass::privateStaticData = 0; // Initializing the private static data member

int main() {
    int userInput;

    cout << "Enter an integer value to set as private static data: ";
    cin >> userInput;

    MyClass::SetPrivateStaticData(userInput); // Setting the private static data member

    MyClass obj1;
    obj1.Display(); // Display the private static data member for obj1

    MyClass obj2;
    obj2.Display(); // Display the private static data member for obj2

    cout << "Private Static Data for obj1 via function: " << obj1.GetPrivateStaticData() <<endl;
    cout << "Private Static Data for obj2 via function: " << obj2.GetPrivateStaticData() <<endl;

    return 0;
}
