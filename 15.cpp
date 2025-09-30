
#include <iostream>
using namespace std;

int main() {
    int n, s, d,t;

    cout << "Armstrong numbers : ";

    for (n = 1; n <= 500; n++) {
         t = n;
        s = 0;

        while (t > 0) {
            d = t % 10;
            s += d * d * d;  
            t /= 10;
        }

        if (s == n) {
            cout << n<< " ";
        }
    }

    return 0;
}
