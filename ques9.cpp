#include <iostream>
using namespace std;
int main() {
    cout << "Vowels: ";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            cout << ch << " ";
    }
    cout << "\nConsonants: ";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            cout << ch << " ";
    }
    return 0;
}
