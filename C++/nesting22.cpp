#include <iostream>
#include <string>   // Include <string> for using std::string
#include <cstdlib>  // Include <cstdlib> for using exit function
using namespace std;

class binary {
    string s;
public:
    void read(void);
    void chk_bin(void);
};

void binary::read(void) // no semicolon reqd
{
    cout << "Enter a binary no" << endl;
    cin >> s;
}

void binary::chk_bin(void) 
{
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format" << endl;}
            if (s.at(i) == '0' || s.at(i) == '1') {
            cout << "Correct binary format" << endl;
            }
            exit(0);
        }
    }

int main() {
    binary b;
    b.read();
    b.chk_bin();
    return 0; 
}
