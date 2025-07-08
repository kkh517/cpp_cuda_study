#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num_1, num_2;
    cin >> num_1 >> num_2;
    cout << "Input: " << num_1 << " or " << num_2 << endl;
    int result = max(num_1, num_2);
    cout << "Output: " << result << endl;
    return 0;
}
