#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 7 == 0 || num % 10 == 7)
        cout << "Buzz Number";
    else
        cout << "Not a Buzz Number";
    return 0;
}
