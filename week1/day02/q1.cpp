# include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << "Input: " << num << endl;
    float remainder = num % 2;
    if (remainder == 0) {
        cout << "Output: Even" << endl;
    } else {
        cout << "Output: Odd" << endl;
    }
    return 0;
}