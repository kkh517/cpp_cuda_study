#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, x4, x5;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    // array with length 5
    int arr[5] = {x1, x2, x3, x4, x5};
    cout << "Input: " << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << endl;

    // sum of the array using pointers
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *(arr + i); // using pointer arithmetic
    }
    
    cout << "Sum: " << sum << endl;
    return 0;
}