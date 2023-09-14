#include<iostream>
using namespace std;

class Student {
public:
  string name;
  int regno;
  float marks1, marks2, marks3;

  void read() {
    cout << "\nEnter the student's name: ";
    cin >> name;
    cout << "Enter the student's registration number: ";
    cin >> regno;
    cout << "Enter the student's marks in three subjects: ";
    cin >> marks1 >> marks2 >> marks3;
  }

  void display() {
    cout << "Student Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Reg. No.: " << regno << endl;
    cout << "Marks 1: " << marks1 << endl;
    cout << "Marks 2: " << marks2 << endl;
    cout << "Marks 3: " << marks3 << endl;
    cout << "Average marks: " << (marks1 + marks2 + marks3) / 3 << endl;
  }
};

int main() {
  int n;
  cout << "Enter the number of students: ";
  cin >> n;

 Student students[n];

  for (int i = 0; i < n; i++) {
    students[i].read();
    students[i].display();
  }

  return 0;
}