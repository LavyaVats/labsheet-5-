
#include <iostream>
using namespace std;

int main() {
    int n, t, d, s = 0;

    cout << "Enter No. : ";
    cin >> n;

    t = n;

    while (t > 0) {
        d = t % 10;
        s += d;
        t /= 10;
    }

    if (n % s == 0)
        cout << n << " is a Harshad Number." << endl;
    else
        cout << n << " is not a Harshad Number." << endl;

    return 0;
}
