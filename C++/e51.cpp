#include <iostream>
#include <cstring>

class STRING {
private:
    char *str;

public:
    // Constructor
    STRING(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy Constructor
    STRING(const STRING &other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~STRING() {
        delete[] str;
    }

    // Function to concatenate two STRING objects
    STRING concatenate(const STRING &s2) {
        char *temp = new char[strlen(str) + strlen(s2.str) + 1];
        strcpy(temp, str);
        strcat(temp, s2.str);
        STRING result(temp);
        delete[] temp;
        return result;
    }

    // Function to display the string
    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    STRING s1 = "SMIT";
    STRING s2 = "MAJITAR";

    // Using the copy constructor to create s3
    STRING s3 = s1.concatenate(s2);

    std::cout << "s1: ";
    s1.display();

    std::cout << "s2: ";
    s2.display();

    std::cout << "s3 (concatenation of s1 and s2): ";
    s3.display();

    return 0;
}