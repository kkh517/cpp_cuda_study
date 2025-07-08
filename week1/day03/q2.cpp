#include <iostream>
using namespace std;

void square_one(int a) {
    a = a * a;
}

void square_two(int& a) {
    a = a * a;
}

int main() {
    int num;
    cin >> num;
    cout << "Input: " << num << endl;
    cout << "Input for square_one: " << num << endl;
    // square_one(num);
    square_one(num);
    cout << "Output from square_one: " << num << endl;
    cout << "Input for square_two: " << num << endl;
    square_two(num);
    cout << "Output from square_two: " << num << endl;
    cout << "Final value of num: " << num << endl;
    return 0;
}

