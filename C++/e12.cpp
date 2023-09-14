#include <iostream>
#include <string>
#include <algorithm>  

using namespace std;    

struct Census {
    string city;
    long population;
    float literacy;
};

int main() {
    Census cityData[5];  

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for city " << i + 1 << ":\n";
        
        cout << "City name: ";
        cin >> cityData[i].city;
        
        cout << "Population: ";
        cin >> cityData[i].population;
        
        cout << "Literacy level: ";
        cin >> cityData[i].literacy;
    }

    sort(cityData, cityData + 5, [](const Census &a, const Census &b) {
        return a.city < b.city;
    });

    cout << "\nSorted city list:\n";
    for (int i = 0; i < 5; i++) {
        cout << "City: " << cityData[i].city << ", Population: " << cityData[i].population
             << ", Literacy: " << cityData[i].literacy << endl;
    }

    return 0;  
}
