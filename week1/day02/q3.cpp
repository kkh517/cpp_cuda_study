# include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout << "Input: " << num << endl;
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    cout << "Output: " << sum << endl;
    return 0;
}
