#include<iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if(year % 100 == 0)
        cout << "Century Year";
    else
        cout << "Not a Century Year";
}
