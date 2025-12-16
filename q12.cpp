#include<iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    switch(month) {
        case 1: case 2: case 3: case 4: case 5:
            cout << "Summer";
            break;

        case 6: case 7: case 8: case 9: case 10:
            cout << "Wind";
            break;

        case 11: case 12:
            cout << "Rain";
            break;

        default:
            cout << "Invalid Month";
    }
}
