#include <iostream>
using namespace std;

int sumOfFactors(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of factors of " << num << " is " << sumOfFactors(num) << endl;
    return 0;
}
