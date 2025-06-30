#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    double product = x * y;
    cout << "Input: " << x << " " << y << endl;
    cout << "Output: Product = " << fixed << setprecision(3) << product << endl;
    return 0;
}