#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;          // example: 345

    int first = n / 100;

    if(first % 2 == 0)
        cout << "First digit is Even";
    else
        cout << "First digit is Odd";
}
