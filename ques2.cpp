#include <iostream>
using namespace std;
int main() {
    int num, square;
    cout << "Enter a number: ";
    cin >> num;
    square = num * num;
    int temp = num;
    bool isAuto = true;
    while (temp > 0) {
        if (temp % 10 != square % 10) {
            isAuto = false;
            break;
        }
        temp /= 10;
        square /= 10;
    }
    if (isAuto)
        cout << "Automorphic Number";
    else
        cout << "Not an Automorphic Number";
    return 0;
}
