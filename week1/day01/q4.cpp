#include <iostream>
using namespace std;

int main() {
    int x, y;
    int bigger, smaller;
    cin >> x >> y;
    float average = (x + y) / 2.0f;
    if (x > y) {
        bigger = x;
        smaller = y;
    } else {
        bigger = y;
        smaller = x;
    }
    float difference = bigger - smaller;
    cout << "Input: " << x << " " << y << " " << endl;
    cout << "Output: "<< "Average = " << average << endl;
    cout << "        "<< "Difference = " << difference << endl;
    return 0;
}