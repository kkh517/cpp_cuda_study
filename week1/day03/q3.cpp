#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int* p = &x;
    cout << "Input: " << x << endl;
    cout << "Printing from the pointer: " << *p << endl;
    cout << "Address of x: " << &x << endl;

    return 0;
}