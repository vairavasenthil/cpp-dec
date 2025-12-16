#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int last = n % 10;

    if(last % 2 == 0)
        cout << "Last digit is Even";
    else
        cout << "Last digit is Odd";
}
