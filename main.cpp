
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("people.txt");
    int population;

    if (!inputFile) {
        cout << "Error opening people.txt" << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1000 people)" << endl;

    for (int year = 1910; year <= 2010; year += 20) {
        if (!(inputFile >> population)) {
            cout << "Error reading population data." << endl;
            return 1;
        }

        cout << year << " ";

        for (int i = 0; i < population / 1000; i++) {
            cout << "*";
        }

        cout << endl;
    }

    inputFile.close();
    return 0;
}
