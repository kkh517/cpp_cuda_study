#include <iostream>
using namespace std; 

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    float average = (x + y + z) / 3.0f;
    cout << "Input: " << x << " " << y << " " << z << endl;
    cout << "Average: " << average << endl;
    return 0;
}