// here sorting is done using lamda function


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
  string name;
  int regno;
  int marks;
};

int main() {
  Student students[3];

  for (int i = 0; i < 3; i++) {
    cout << "Enter name of student " << i + 1 << ": ";
    cin >> students[i].name;
    cout << "Enter regno of student " << i + 1 << ": ";
    cin >> students[i].regno;
    cout << "Enter marks of student " << i + 1 << ": ";
    cin >> students[i].marks;
  }

  cout << "\nStudent details in sorted order by regno: \n";
  sort(students, students + 3, [](const Student &a, const Student &b) {
    return a.regno < b.regno;
  });
  for (int i = 0; i < 3; i++) {
    cout << students[i].name << " " << students[i].regno << " " << students[i].marks << endl;
  }

  cout << "\nStudent details in sorted order by name: \n";
  sort(students, students + 3, [](const Student &a, const Student &b) {
    return a.name < b.name;
  });
  for (int i = 0; i < 3; i++) {
    cout << students[i].name << " " << students[i].regno << " " << students[i].marks << endl;
  }

  return 0;
}
