#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y ;
    float area = x * y * 0.5; // Area of triangle formula: 0.5 * base * height
    cout << "Input: " << x << " " << y << endl;
    cout << "Output: Area = " << area << endl;
    return 0;
}