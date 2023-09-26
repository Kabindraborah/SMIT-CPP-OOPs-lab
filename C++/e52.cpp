#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollno;

public:
    // Default constructor
    Student() {
        name = "";
        rollno = 0;
        std::cout << "Default constructor called" << std::endl;
    }

    // Parameterized constructor
    Student(std::string studentName, int studentRollNo) {
        name = studentName;
        rollno = studentRollNo;
        std::cout << "Parameterized constructor called" << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Function to set student details
    void setDetails(std::string studentName, int studentRollNo) {
        name = studentName;
        rollno = studentRollNo;
    }

    // Function to display student details
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << rollno << std::endl;
    }
};

int main() {
    // Create a default student object
    Student student;

    // Prompt the user for input
    std::string name;
    int rollno;

    std::cout << "Enter student name: ";
    std::cin >> name;

    std::cout << "Enter student roll number: ";
    std::cin >> rollno;

    // Set the details of the student
    student.setDetails(name, rollno);

    // Display the student details
    student.displayDetails();

    return 0;
}