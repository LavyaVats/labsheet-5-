
#include <iostream>
using namespace std;

int main() {
    int n, t, d, s;
  
    for (n = 1; n <= 100; n++) {
        t = n;
        s = 0;

        while (t > 0) {
            d = t % 10;
            s += d;
            t /= 10;
        }

        if (n % s == 0) {
            cout << n ;
        }
    }

    cout << endl;
    return 0;
}
