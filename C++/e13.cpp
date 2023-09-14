#include <iostream>
using namespace std;
#include <string>

struct Date {
    int day;
    int month;
    int year;
};

bool validate(const Date &date) {
    if (date.year < 0 || date.month < 1 || date.month > 12 || date.day < 1) {
        return false;
    }

    int daysInMonth;

    switch (date.month) {
        case 2:
            daysInMonth = (date.year % 4 == 0 && (date.year % 100 != 0 || date.year % 400 == 0)) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    return date.day <= daysInMonth;
}

void displayFormattedDate(const Date &date) {
    const string monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (date.month >= 1 && date.month <= 12) {
        cout << monthNames[date.month - 1] << " " << date.day << " " << date.year << endl;
    }
}

int main() {
    Date date;

    cout << "Enter day in DD format: ";
    cin >> date.day;

    cout << "Enter month in MM format: ";
    cin >> date.month;

    cout << "Enter year in YYYY format: ";
    cin >> date.year;

    if (validate(date)) {
        cout << "Date is valid." << endl;
        displayFormattedDate(date);
    } else {
        cout << "Invalid date." << endl;
    }

    return 0;
}