#include <iostream>
using namespace std;

bool isStrongNumber(int num) {
    int original = num, sum = 0;
    while (num != 0) {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrongNumber(num)) {
        cout << num << " is a Strong number." << endl;
    } else {
        cout << num << " is not a Strong number." << endl;
    }

    return 0;
}
