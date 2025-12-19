#include <iostream>
using namespace std;
int main() {
    int num, sum;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 9) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    if (num == 1)
        cout << "Magic Number";
    else
        cout << "Not a Magic Number";
    return 0;
}
