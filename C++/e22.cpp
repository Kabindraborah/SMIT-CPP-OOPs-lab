#include <iostream>

using namespace std;

class Employee {
public:
  int emp_no;
  string emp_name;
  float basic;
  float da;
  float it;
  float net_sal;

  void read_data() {
    cout << "Enter employee number: ";
    cin >> emp_no;
    cout << "Enter employee name: ";
    cin >> emp_name;
    cout << "Enter basic salary: ";
    cin >> basic;
  }

  void calculate_net_sal() {
    da = 0.52 * basic;
    it = 0.3 * (basic + da);
    net_sal = basic + da - it;
  }

  void print_data() {
    cout << "Employee number: " << emp_no << endl;
    cout << "Employee name: " << emp_name << endl;
    cout << "Basic salary: " << basic << endl;
    cout << "DA: " << da << endl;
    cout << "IT: " << it << endl;
    cout << "Net salary: " << net_sal << endl;
  }
};

int main() {
  Employee emp1;
  emp1.read_data();
  emp1.calculate_net_sal();
  emp1.print_data();

  Employee emp2;
  emp2.read_data();
  emp2.calculate_net_sal();
  emp2.print_data();

  return 0;
}