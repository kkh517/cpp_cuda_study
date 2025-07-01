# include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << "Input: " << num << endl;
    if (num > 0) {
        cout << "Output: Positive" << endl;
    } else if (num < 0) {
        cout << "Output: Negative" << endl;
    } else {
        cout << "Output: Zero" << endl;
    }
    return 0;
}