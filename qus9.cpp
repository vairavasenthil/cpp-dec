#include <iostream>
using namespace std;

bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num)) {
        cout << num << " is a Perfect number." << endl;
    } else {
        cout << num << " is not a Perfect number." << endl;
    }

    return 0;
}
