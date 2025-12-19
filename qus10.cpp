#include <iostream>
using namespace std;

bool isNeonNumber(int num) {
    int sum = 0, square = num * num;
    
    // Calculate sum of digits of square
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isNeonNumber(num)) {
        cout << num << " is a Neon number." << endl;
    } else {
        cout << num << " is not a Neon number." << endl;
    }

    return 0;
}
