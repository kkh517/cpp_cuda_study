# include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 2;
    b = 1;
    while (a<10) {
        while (b<10) {
            cout << a << " x " << b << " = " << a*b << endl;
            b++;
        }
        if (b == 10) {
            b = 1;
        }
        a++;
    }
    return 0;
}

